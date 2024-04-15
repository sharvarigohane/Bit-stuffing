#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i=0,count=0;
char databits[80];
printf("Enter Data Bits: ");
scanf("%s",databits);
printf("\nData Bits After Bit stuffing: ");
for(i=0; i<strlen(databits); i++)
{
if(databits[i]=='1')
count++;
else
count=0;
printf("%c",databits[i]);
if(count==5)
{

printf("0");
count=0;
}
}
getch();
}