#include<iostream.h>
#include<conio.h>

class helloClass{

public:
void hello(char a[])
{

 cout<<"\nHello "<<a <<endl;

}

};

class findAge: public helloClass{

public:
void age(int b){

  cout<<"age is=" <<b <<endl;

}
};
class sal: public findAge {
 public:
	void salAmount(){
	cout<<"salamount: 200000" ;

	}

};
void main(){
  clrscr();
 // print any things
//helloClass obj;
sal obj;
obj.hello("ankit");
obj.age(23);
obj.salAmount();

getch();
}