/* switch condtion */

#include<stdio.h>
#include<conio.h>


void main(){

clrscr();

//int x=5;
 int x, a,b,c;
 a=50;
 b=20;
 printf("please enter the case no between 1 to 3:- ");
 scanf("%d",&x);
switch(x){

    case 1:
      printf("case is one \n");
      c=a+b;
      printf("%d",c);
     break;

    case 2:
      printf("case is two \n");
      c=a-b;
      printf("%d",c);
     break;

    case 3:
      printf("case is three \n");
      c=a*b;
      printf("%d",c);
     break;

     default:
	printf("No any case");




}



getch();



}