#include<iostream>
using namespace std;

    void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    }
    // ------> FOR REFERENCE VARIABLE ------>
    // int & swapReferenceVar(int &a, int &b) {
    //     int temp = a;
    //     a = b;
    //     b = temp;
    //     return a;
    // }
    int main(){
        int x = 4, y = 5;
        cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
       swap(&x, &y);
    //    swapReferenceVar(x, y) = 765;
        cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    
    return 0;
    }