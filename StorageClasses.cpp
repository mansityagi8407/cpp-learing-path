#include<iostream>
using namespace std;
int globalVar = 10;
void automaticDemo() {
    int a = 5;
    cout << "Automatic variable: "<< a << endl;
}
    void registerDemo() {
    int r = 20;
    cout << "Register variable: "<< r << endl;
}
 void staticDemo() {
    static int s = 0;
    cout << "Static variable: "<< s << endl;
}
 void externDemo() {
    extern int globalVar;
    cout << "External variable: "<< globalVar << endl;
}
    int main() {
    cout << "--- Automatic Demo ---" << endl;
    automaticDemo();

     cout << "\n--- Register Demo ---" << endl;
    registerDemo();

     cout << "\n--- Static Demo ---" << endl;
    staticDemo();
    
     cout << "\n--- Extern Demo ---" << endl;
    externDemo();
    return 0;
    }