#include <iostream>
#include<string.h>
using namespace std;

int main()
{
    /*  ========Simple string program===========
    string s1 = "Hello";
        char ch[] = { 'C', '+', '+','\0'};
        string s2 = string(ch);
        cout<<s1<<endl;
        cout<<s2<<endl;

        ================string compare===========
  char key[] = "mango";
  char buffer[50];
  do {
     cout<<"What is my favourite fruit? ";
     cin>>buffer;

  }while (strcmp (key,buffer) != 0);
 cout<<"Answer is correct!!"<<endl;


 ======String Cancanate(append)========
char key[25], buffer[25];

    cout << "Enter the key string: ";
    cin.getline(key, 25);

    cout << "Enter the buffer string: ";
     cin.getline(buffer, 25);


    strcat(buffer,key );

    cout << "Buffer = " << buffer<<endl;
    cout << "Key = " << key << endl;


    ======== String copy =========
    */
    char key[25], buffer[20];

    cout << "Enter the key string: ";
    cin.getline(key, 25);

    strcpy(buffer, key);

    cout << "Key = "<< key << endl;
    cout << "Buffer = "<< buffer<<endl;
    return 0;
}
