#include<iostream>
using namespace std;
class Test {
    public:
    static int count;
    int num;
    void setNum(int n) { num = n; }
    void show() { cout << "Num: " << num << endl; }
};
int Test::count = 0;
int main() {
    Test t1, t2;
    t1.setNum(10);
    t1.show();
0
    Test *ptr = &t2;
    ptr->setNum(20);
    ptr->show();

    cout << "static count: " << Test::count << endl;
}