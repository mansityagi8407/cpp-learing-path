#include<iostream>
using namespace std;
class Student {
    int rollNo;
    public:
    void setRoll(int r);
    void showRoll();
};
void Student::setRoll(int r) {
    rollNo = r;
}
void Student::showRoll() {
    cout << "Roll No: " << rollNo << endl;
}
int main() {
    Student s1;
    s1.setRoll(101);
    s1.showRoll();
    return 0;
}