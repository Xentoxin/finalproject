#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#define rw 80
#define cl 50
FILE*fp,*fp1,*f1,*f2;
int s,z;
char fn1[]="opd12.patient";
char fn2[]="oopd12.patient";

//struct hospital
struct hospital{
		char name[20],address[20],ch;
		int age,roomno,sn;
		char disease[30],department[20],date[15];
		char recommendation[50],category[30];
		char test[15][20];
		float testfee[15];
		float totalfee;
		float balance;
		}p,q;
char string[20];
typedef struct hospital reddit;

//Declarations
void newrecord(int l);
void print();
void displaytest();
void mainscreen();
void newrecord1();
void displaydepartment();
void edit1();
void editrecord();
void switch1();


