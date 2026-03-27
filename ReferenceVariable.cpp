#include<iostream>
#include<iomanip>
using namespace std;
int main() {

/*   *****************REFERENCE VARIABLES**************
    float x = 455;
    float &y = x;
    cout<<x<<endl;
    cout<<y<<endl;a11


    **********************TYPECASTING*************

    int a = 45;
    float b = 45.87;
    cout<<"The value of a is "<<(float)a<<endl;
    cout<<"The value of b is "<<(float)b<<endl;
    cout<<"The value of b is "<<(int)b<<endl;
    
    **********************MANIPULATORS***************    


    int a = 8, b = 78, c = 4587;
    cout<<"The value of a without setw is : "<<a<<endl;
    cout<<"The value of b without setw is : "<<b<<endl;
    cout<<"The value of c without setw is : "<<c<<endl;

    cout<<"The value of a  is : "<<setw(5)<<a<<endl;
    cout<<"The value of b  is : "<<setw(5)<<b<<endl;
    cout<<"The value of c  is : "<<setw(5)<<c<<endl;

    *****************OPERATOR PRECEDENCE ****************** */

int a = 3, b = 4;
int c = ((((a*5)+b)-45)+87);
cout<<c;
return 0;

}