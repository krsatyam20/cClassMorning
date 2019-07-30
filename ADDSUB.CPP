#include<iostream.h>
#include<conio.h>

class add{

 public:
 void addition(){
  int c= 10+20;
 cout<<"class add" <<c <<endl;
  }


};

class sub: public add {


 public:
 void subtraction(){
  int x= 40 - 20;
 cout<<"class sub"<< x;
 }

};
void main(){
clrscr();

sub obj;
obj.addition();
obj.subtraction();

getch();

}


