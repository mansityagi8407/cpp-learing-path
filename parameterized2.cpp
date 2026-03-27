#include<iostream>
using namespace std;

class Point {
    int x, y;
    public:
         point(int a, int b) {
            x = a;
            y = b;
         }

         void displayPoint(){
            cout<<"The point is("<<x<<", "<<y<<")"<<endl;
         }
};
int main() {
    // Create a function which takes 2 point objects and computes the distance between those 2 points.
    Point p(1, 1);
    p.displayPoint();

    Point q(4, 3);
    q.displayPoint();l
 
    return 0;
}