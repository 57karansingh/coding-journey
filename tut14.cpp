#include<iostream>
using namespace std;
//TOPIC STRUCTURE

// typedef struct employee
// {
//     /* data */
//     int eId;
//     char favchar;
//     float salary;
// } ep; 
// // ep yaha par struct employee ko replace kr sakta h

// int main(){
    // ep harry;
    // ep shubham;
    // harry.eId = 1;
    // harry.favchar = 'c';
    // harry.salary = 5700000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favchar<<endl;
    // cout<<"The value is "<<harry.salary<<endl;

//     // TOPIC UNION
//     union money
//     {
//         /*data*/
//         int rice;
//         char car;
//         float pounds;
//     };
//     int main(){
//         union money m1;
//         m1.rice = 34;
//         m1.car = 'c';
//         cout<<m1.rice<<endl;
//         cout<<m1.car<<endl;

//         return 0;
//     }

// // return 0;
// // }

//TOPIC ENUM
int main(){
    enum meal{breakfast, lunch , dinner};
    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;
    // ya fir
    meal m1 = lunch;
    cout<<(m1==2)<<endl;
    return 0;
}