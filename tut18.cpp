#include<iostream>
using namespace std;
// fibonacci sequence: 0,1,1,2,3,5,8,13,21,34,55,89,144

int fibonacci(int n){
    if(n<2){
        return 1;
    }
    
    return fibonacci(n-2)+fibonacci(n-1);
}

// fib(5)
// fib(4)+fib(3)
// fib(3)+fib(2)+fib(2)+fib(1)
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }
   
        return n*factorial(n-1);
    
}   

int main(){
    // Factorial of a number:
    //6 = 6*5*4*3*2*1 = 720
    // 0! = 1 by definition
    // 1! = 1
    // n! = n*(n-1)!
    int a;
    cout<<"Enter a number to find its factorial:"<<endl;
    cin>>a;
    // cout<<"Factorial of "<<a<<" is: "<<factorial(a)<<endl;
    cout<<"The term in fibonnaci sequence at position "<<a<<" is: "<<fibonacci(a)<<endl;
    
return 0;
}