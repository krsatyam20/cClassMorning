#include <iostream>

using namespace std;

namespace First {
    void sayHello() {
        cout<<"Hello First Namespace"<<endl;
    }
}
namespace Second  {

       void sayHello() {
           cout<<"Hello Second Namespace"<<endl;
       }
}
int main()
{
    using namespace First;

/* First::sayHello();
 Second::sayHello(); */
 sayHello();
return 0;
}
