#include<stdio.h>
#include<conio.h>
void main(){
clrscr();
int a=10;
int *p;
p=&a;

printf("address of a=%d",&a);
printf("\n address of a which is hold by p=%d",p);
printf("\n value of a using pointer %d",*p);


getch();
}