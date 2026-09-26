#include<iostream>
using namespace std;

class Employee{
    int id;
   static int count; // by default static variable , zero se start ho jaata h
    public:
    void setData(void){
        cout<<"Enter the id "<<endl;
        cin>>id;
        count++;
    }
    void getData(void){
        cout<<"The id of this employee is "<<id<<"and this is employee number"<<count<<endl;
    }
    static void getcount(void){
        cout<<"The value of coount is "<<count<<endl;
    }
};
// static variable isiliye banaya jaata j , jo ki sirf static function ka hi access le sake
// count is the static data memer of class employee

int Employee::count; // default value is 0 // yaha pe  count ke saamne = 1000 likh sakte h , input 1 daalne pe 1001 output aayega and upper jo count uske saamne likhne pe error aaayega

int main (){
    Employee karan,madara,naruto;
    //karan.id = 1;
    //karan.count =1; // cannot do this as id and count are private
    karan.setData();
    karan.getData();
    Employee::getcount();
    
    madara.setData();
    madara.getData();
    Employee::getcount();

    naruto.setData();
    naruto.getData();
    Employee::getcount();
    return 0;
}