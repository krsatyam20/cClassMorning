#include<stdio.h>
#include<conio.h>
void main(){
clrscr();

int a[5];
a[0]=10;
a[1]=20;
a[2]=30;
a[3]=40;
a[4]=35;

//printf("%d",a[0]);
int sum=0;

for(int i=0;i<5;i++){

 printf("\n%d",a[i]);
  sum=sum+a[i];  //a[0]
		//a[1]
}
printf("\n%d",sum);







getch();
}