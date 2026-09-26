#include<iostream>
using namespace std;

class Employee
{
    private:
    int a, b, c;
    public:
    int d, e;
    void setData(int a1, int b1, int c1); //declaration
    void getData(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of c is "<<c<<endl;
        cout<<"The value of d is "<<d<<endl;
        cout<<"The value of e is "<<e<<endl;
    }
};
void Employee::setData(int a1, int b1, int c1){
    a = a1;
    b = b1;
    c = c1;
}
int main(){
    Employee karan;
    // karan.a = 34; --> not allowed because a is private
    // karan.b = 56; --> not allowed because b is private
    // karan.c = 78; --> not allowed because c is private
    karan.d = 90;
    karan.e = 12;
    karan.setData(1,2,4);
    karan.getData();



return 0;
}