#include<iostream.h>
#include<conio.h>

class a{
 public:
  void hello(){
   cout<<"hello\n";
  }

};

class b: public a{
public:
  void hello1(){
   cout<<"hello1\n";
  }

};

class c: public a{
public:
void hello2(){
cout<<"hello2\n";

}

};

void main(){
clrscr();

c obj;
b obj2;


obj.hello2();
obj.hello();
obj2.hello1();
obj2.hello();

getch();
}