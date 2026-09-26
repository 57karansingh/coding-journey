#include<iostream>
using namespace std;
// functions prototype
// type functions name (arguments)
// int sum (int a, int b)>>--acceptable
// int sum (int a, b)>>-- not acceptable
// int sum (int , int);>>--acceptable


int sum (int a , int b){   //agar ye int main se niche hota to isse hm run krne ke liye function protoype use krte h;
   
    int c =a+b;
return c;
}
 void g(void);
int main(){
    int num1 ,num2;
    cout<<"first number bata jaldi"<<endl;
    cin>>num1;
    cout<<"second number bata ab "<<endl;
    cin>>num2;
    cout<<"the sum is "<<sum(num1,num2)<<endl;
    g();
    return 0;
    // int sum (int a, int b){
    // int c =a+b;
    // return c;
    // }
}
void g(){
      cout<<"Hello, good morning"<<endl;
    // but upper void g(void)jo likha h waisa likhna padega
}
