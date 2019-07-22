//Function

#include<stdio.h>
#include<conio.h>
//no argument no return
void hello(){

printf("Hello");

}
// with argument with return
int add(int a, int b)
{

int c;
c= a+ b;

return c;


}
void main(){
int x,y,z,res;
 clrscr();

hello();

x= add(10,20);

printf("\n%d",x);
y=30;
z=40;

res=add(y,z);
printf("\n%d",res);

printf("\n%d",add(50,30));

 getch();

}