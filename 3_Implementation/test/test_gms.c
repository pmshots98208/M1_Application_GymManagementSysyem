#include "unity.h"
include "test_gms.h"

void searchstaff()
void setup()
{}
void tearDown()
{}
void test_gms()
{
{

system("cls");

int d;

printf("\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdbSearch Member\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb");


gotoxy(20,10);

printf("1. Search By ID");

gotoxy(20,14);

printf("2. Search By Name");

gotoxy( 15,20);

printf("Enter Your Choice");

fp=fopen("stf.dat","rb+"); 

rewind(fp);   

switch(getch())

{

case '1':

{

system("cls");

gotoxy(25,4);

printf("\xdb\xdb\xdb\xdb\xdb\xdbSearch By Id\xdb\xdb\xdb\xdb\xdb\xdb");

gotoxy(20,5);

printf("Enter the id:");

scanf("%d",&d);

gotoxy(20,7);

while(fread(&a,sizeof(a),1,fp)==1)

{

if(a.id==d)

{

Sleep(2);

gotoxy(20,6);

printf("The Record is available\n");
}}}}
}
{
UNITY_VERSION_BUILD
RUN_TEST(test_gms)
return UNITY_END();
}
}