#include<iostream>
using namespace std;
class Demo {
    int x;
    public:
    void setX(int val) {
        x = val;
    }
    void show() {
        cout << "X = " << x << endl;
    }
};
int main() {
    Demo d1;
    d1.setX(10);
    d1.show();
    return 0;
}