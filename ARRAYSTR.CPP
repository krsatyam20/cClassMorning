#include<stdio.h>
#include<conio.h>
#include<string.h>

void main(){
clrscr();

char a[10]={'a','k','a','s','h','k','h','o','k','\0'};
int x=strlen(a);
//printf("%d",x);
//printf("\n%c",a[6]);
for(int i=0;i<=x;i++){
printf("\n%c",a[i]);
}
getch();
}