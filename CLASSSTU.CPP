#include<iostream.h>
#include<conio.h>
class firstclass {
     public:
     void msg(){

	cout<<"Good morning" ;
	}

      int add(int a, int b){

      return a+b;
       }
};

void main(){
clrscr();
int x;

firstclass obj;

obj.msg();
cout<<endl;
cout<<obj.add(10,20);



 getch();
}        d