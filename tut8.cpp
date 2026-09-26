#include<iostream>

using namespace std;
int main(){
    // cout<<'this is turtorial 9';
    // selection control structure if else;
    int age;
    cout<<"tell me your age"<<endl;
    cin>>age;
    if((age<18) && (age>0)){
        cout<<"you cann not come to party"<<endl;
    }
    else if(age==18){
        cout<<"you are a kid and you will get a kid pass party"<<endl;
    }
    else if(age<1){
        cout<<"Pahle paida ho jaa saale"<<endl;
    }
    else{
        cout<<"you can come to party"<<endl;
    }
    return 0;

}
