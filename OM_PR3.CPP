//Q2,=> write aprogram to count the total number of digits

#include<stdio.h>
#include<conio.h>
void main(){
int a,b=0;
clrscr();
printf("enter number ");
scanf("%d",&a);
while(a!=0){
a=a/10;
b++;}

printf("total number of digts%d",b);



getch();}