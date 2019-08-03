#include<iostream.h>
#include<conio.h>


class emp{
  public:
  int id;// globle variable

  emp(int n){
   this->id=n;

  }

 void display(){

 cout<<id;
 }
};
void main(){
clrscr();
emp obj=emp(102);

obj.display();


getch();
}