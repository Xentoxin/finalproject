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

void main(){}
void newrecord(int l)
{
	char q;
	p.sn=l;
	displaydepartment();
	gotoxy(5,14);textcolor(10);
	cprintf("Record of patient no:");
	printf(" %d",l);
	gotoxy(5,17);
	cprintf("Name:");

	gotoxy(5,20);
	cprintf("Address:");

	gotoxy(5,23);
	cprintf("Age: ");

	gotoxy(5,26);
	cprintf("Sex(m/f): ");

	gotoxy(5,29);
	cprintf("Disease Descrp:");
	gotoxy(9,30);
	cprintf("(In Short)");

	gotoxy(5,33);
	cprintf("Reff. Specialist no:");
	fflush(stdin);gotoxy(10,17);
	scanf("%[^\n]",p.name);
	p.name[0]=toupper(p.name[0]);
	gotoxy(14,20);
	fflush(stdin);
	scanf("%[^\n]",p.address);
	gotoxy(10,23);
	fflush(stdin);
	scanf("%d",&p.age);
	gotoxy(15,26);
	fflush(stdin);
	scanf("%c",&p.ch);
	fflush(stdin);gotoxy(22,29);
	scanf("%[^\n]",p.disease);
}