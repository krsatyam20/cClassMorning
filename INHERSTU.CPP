#include<iostream.h>
#include<conio.h>

class a{
public:
void msg(){
 cout<<"Hello\t" ;

}



};
// single level inheritance
class b: public a{

 public:
 void rolno(){
  cout<<"your Roll no." ;

 }



};

void main(){
 clrscr();
  //a obj1;

  b obj2;

  obj2.msg();
  obj2.rolno();

getch();
}
