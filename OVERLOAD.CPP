#include<iostream.h>
#include<conio.h>

class a{
public:
  int add(int x, int y){
   int c;
   c= x+y ;
     cout<<c<<endl;

  }

  int add(int x, int y, int z){
   int c;
   c= x+y+z;
     cout<<c<<endl;

  }

};

void main(){
clrscr();

a obj;

obj.add(10,20);
obj.add(10,20,30);






getch();
}