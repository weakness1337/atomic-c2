import socket,requests,json,hashlib,random,ipaddress
from flask import *
from flask_limiter import Limiter
from flask_limiter.util import get_remote_address

app = Flask(__name__)

limiter = Limiter(app,key_func=get_remote_address,default_limits=["200 per day", "30 per hour"])

class atomic:
    UserAgents = []
    Respo = None
    @app.route("/")
    @limiter.limit("1/second")
    def StartPoint () :
        return jsonify({"Message" : "Welcome to atomic Security Team, please reffer to the API documentation"})
    
    @app.route("/api/v1/atomic/status", methods=["POST", "GET"])
    @limiter.limit("1/second", override_defaults=False)
    def StatusCheck ():
        Headers   = request.headers.get("User-Agent")
        IP        = request.remote_addr
        for x in range(0, len(atomic.UserAgents)):
            if atomic.UserAgents[x] in Headers: return jsonify({"Error" : "Detected invalid User-Agent."})
            else:   pass
        try:
            CheckAvailability = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
            CheckAvailability.connect(("68.183.124.162", 6969))
            return jsonify({"Response" : "Successfully connected to proxy."})
        except Exception as Error:
            return jsonify({"Response" : "Could not connect to proxy."})
    
    @app.route("/api/basic/documentation", methods=["GET"])
    @limiter.limit("1/second")
    def Documentation ():
        return "Status Check : <kbd>CURL -X GET http://68.183.124.162:80/api/v1/atomic/status -A 'API-Documentation-Test'.<kbd><br>Or, you can visit the link above on your browser."
    

    @app.route("/api/v1/atomic/iplookup")
    def caponeiseskid () -> None:
        ip = request.args.get('ip')
        if ip == None:
            return jsonify({"Error" : "You did not specify an IP address."})
        try:
            ipaddress.ip_address(ip)
            with requests.get("http://ip-api.com/json/{}".format(ip)) as SendAPIRequest:
                SendAPIRequest = json.loads(SendAPIRequest.text)
            
            NewDict = {}
            NewDict['country'] = SendAPIRequest['country']
            NewDict['isp'] = SendAPIRequest['isp']
            NewDict['org'] = SendAPIRequest['org']
            NewDict['city'] = SendAPIRequest['city']
            NewDict['regionName'] = SendAPIRequest['regionName']
            NewDict['zip'] = SendAPIRequest['zip']
            NewDict['countryCode'] = SendAPIRequest['countryCode']
            NewDict['query'] = SendAPIRequest['query']


            with open("iplookup.json", "w+") as SaveSkidCapone:
                SaveSkidCapone.write(json.dumps(NewDict))
                SaveSkidCapone.close()
            return jsonify({"OK" : ""})
        except:
            return jsonify({"Error" : "IP is invalid."})

    @app.route("/api/v1/atomic/cfxlookup")
    def cfxlookup ():
        cfxid = request.args.get("cfx")
        if cfxid == None:   return jsonify({"Error" : "You did not specify a CFX code."})
        elif "HTTP" in cfxid.upper() or "/" in cfxid or "." in cfxid or "/" in cfxid: return jsonify({"Error" : "You need to specify an actual CFX code."})
        Headers = {
            "User-Agent": "Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv102.0) Gecko/20100101 Firefox/102.0"
        }
        if len(cfxid) > 7:
            return jsonify({"Error" : "The length of the CFX-Code you've entered is too long."})
        try:
            SendRequest = requests.get(f"https://servers-frontend.fivem.net/api/servers/single/{cfxid}", headers=Headers)
            SendRequest = json.loads(SendRequest.text)
        except:
            return jsonify({"Error": "An error occured whilst sending a GET request to FiveM API, please try again."})
        try:
            if SendRequest['error'] == "404 Not Found": return jsonify({"Error" : "The CFX code you've entered is not valid."})
        except:
            Hostname = SendRequest['Data']['hostname']
            OWner    = SendRequest['Data']['ownerName']
            ServerIP = SendRequest['Data']['connectEndPoints'][0]
            ServerPORT = SendRequest['Data']['connectEndPoints'][0].replace(":", " ").split()[1]
            ServerJSON = f"http://{SendRequest['Data']['connectEndPoints'][0]}/players.json"
            Players = SendRequest['Data']['clients']

            JSONFormat = {
                "Hostname" : Hostname,
                "Owner" : OWner,
                "ServerIP" : ServerIP,
                "ServerPORT" : ServerPORT,
                "ServerJSON" : ServerJSON,
                "Online" : Players
            }

            with open(f"cfxinfo.json", "w+") as SaveJSON:
                SaveJSON.write(json.dumps(JSONFormat))
            
            return "cfxinfo.json"

if __name__ == '__main__':
    for x in open("user-agents.txt", "r").readlines():
        x = x.strip("\r\n")
        atomic.UserAgents.append(x)
    app.run(host="0.0.0.0",port=80)