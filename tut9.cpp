#include<iostream>

using namespace std;
int main(){

        int age;
        cout<<"Tell me your age"<<endl;
        cin>>age;
        // Selection structure switch case type
        switch (age)
        {
        case 22:
            /* code */
            cout<<"You are 22 year old"<<endl;
            break;
        case 18:
            /* code */
            cout<<"You are 18 year old"<<endl;
            break;
        case 2:
            /* code */
            cout<<"You are 2 year old"<<endl;
            break;
           case 88:
            /* code */
            cout<<"You are 88 year old"<<endl;
            break;

        default:
        cout<<"no special cases"<<endl;
            break;
            // break tod deta h ki ab exact wahi output aaye warna neeche ki bhi aa jayenge;
        }
        return 0;
    }