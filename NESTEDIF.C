// nested if else
//which number is greater

#include<stdio.h>
#include<conio.h>

void main(){
clrscr();


int a,b,c;

printf("Please enter the first number for find greatest");
scanf("%d",&a);// get value from user
printf("\nPlease enter the second number for find greatest");
scanf("%d",&b);
printf("\nPlease enter the third number for find greatest");
scanf("%d",&c);



if(a>b)
{	if(a>c){
	   printf("a is greater");

	  }
	  else{
	   printf("C is Greater");
	  }
}
else
{
 if(b>c){
	 printf("B is greater");

	}
	else
	{
	 printf("C is greater");
	}

}



getch();

}