#pragma once
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <regex.h>
#include <netdb.h>
#include <pthread.h>
#include <curl/curl.h>
#include <time.h>
#include <error.h>
#include <json-c/json.h>
#include <crypt.h>

struct AccountData
{
	char username[30], password[30], status[20], secs[4];
	long expiry;
} accounts[500];

struct FileDesData
{
	int connected, titlestatus, ownerstatus, adminstatus, vipstatus, basicstatus, fmpstatus, rawstatus, bvfmp, bfmp, br, brvfmp, brfmp, brv, confirmation;
	char username[30], password[30], status[20], buf[512], secs[4];
	long expiry;
} Users[5000];

int strjcmp(char string1[], char string2[]);
int ValidIP(const char *);
int urlcheck(int, int);
void apiattack(char *, int);
void TitleBar(void);
//void TitleBarIn(void);
void Connections(int);
void AtomicCNC(void *);

int socketWrite(int, char *);
int inputSocketWrite(int, char *, char *);
int DelFD(int);
void trim(char *);
int recieve(int, char *, int);
int fdgets(char *, int, int);

int Find_Login(char *);
int ValidateFiles();
int ReloadAccounts();
