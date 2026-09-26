#include<iostream>
using namespace std;

int add(int a, int b){  // you can use add in place of sum, but it is better to use sum as function name for better understanding
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}

int add(int a, int b, int c){
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
}
// calculate volume of cylinder
int volume(double r, double h){
    return 3.14*r*r*h;
}
// calculate volume of cube
int volume(int a){
    return a*a*a;
}
// Rectangular box volume
int volume(int l, int b, int h){
    return l*b*h;
}
int main(){
    cout<<"The sum of 2 and 3 is: "<<add(2,3)<<endl;
    cout<<"The sum of 2, 3 and 4 is: "<<add(2,3,4)<<endl;
    cout<<"The volume of cylinder of radius 3 and height 6 is: "<<volume(3,6)<<endl;
    cout<<"The volume of cube of side 3 is: "<<volume(3)<<endl;
    cout<<"The volume of rectangular box of length 3, breadth 4 and height 5 is: "<<volume(3,4,5)<<endl;

return 0;
}