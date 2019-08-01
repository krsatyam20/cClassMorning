#include<iostream.h>
#include<conio.h>

class a{
public:
void hello(){
cout<<"hello";

}


};

class b: public a{
  public:
   void hello(){
    cout<<"a\n";

   }


};

void main(){
 clrscr();
 b obj;
 a obj2;
 obj.hello();
 obj2.hello();

getch();
}
