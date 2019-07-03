#include<stdio.h>
#include<conio.h>

void main(){
clrscr();
int a=40,c;
int b=50;

if(a>b)
  {
	printf("A is greater than B");
	c=a-b;
	printf("%d",c);

  }
else
 {
	printf("B is greater than A");
	c=a+b;
	printf("\n%d",c);


 }

getch();
}