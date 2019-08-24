#include <iostream>

using namespace std;

float division(int x, int y) {
   if( y == 0 ) {
     throw "Attempted to divide by zero!";
     //cout<<"Attempted to divide by zero!";
   }
   return (x/y);
}
int main () {
    int i,j;
    i = 25;
    j = 0;
   float k;
     try {

      k = division(i, j);
      cout << k << endl;


   }catch (const char* e) {
     cerr << e << endl;
   }

   return 0;
}
