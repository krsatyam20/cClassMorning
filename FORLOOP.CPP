/* loop  Repetation
1. for(stratingPoint;endPoint;steps){ repet Belt }
2. while() {}
3. do{}while();
steps
	increment
	a=10
	a=a+1
	a++  post  11
	++a  pre    11
	decrement
	a=a-1
	a--  post   9
	--a pre     9

*/

#include<stdio.h>
#include<conio.h>
void main(){
clrscr();

int a;
printf("please given any number which u want to print table:- ");
scanf("%d",&a);
for(int i=1;i<=10;i++) {

// printf("hello%d\n",i*2);
printf("%d * %d = %d\n",a,i,i*a);


 }
getch();

}
