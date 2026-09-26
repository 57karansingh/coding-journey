#include<iostream>
#include<string>
using namespace std;

class binary{
    // private hota hai by default
    // void ka matlab hai ki ye function kuch return nahi karega,agar kuch return karna hai to return type specify karna padega
                string s;
                public:
                void read(void);
                void chk_bin(void);
                void ones_complement(void);
                void display(void);
                    
            };
void binary :: read(void){
    
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary :: chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"Incorrect binary format"<<endl;
            exit(0);
        }
        
    }
    
}
void binary :: ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)=='0'){
           s.at(i)='1';
        }
       else
       {
            s.at(i)='0';
           
        }
    }
}
void binary :: display(void){
    cout<<"Displaying your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main(){
      //OOPs - Classes and objects
      //C++ --> intially called --> C with classes by stroutstroup
      //class --> extension of structures (in C)
      // structure has limitations
            //   --> members are public
            // --> No methods
            // classes --> structures + more
            // classes --> can have methods and properties
            //  classes --> can make few members as private & feew as public
            // structures in C++ are typedefed
            // you can declare objects along with the class declaration like this
           /* class Employee{
                class defintion
                karan , shubham, rohan;*/
                //karan.salary = 8 makes no sense if salary is private
            
            //  Nesting of member functions
            binary b;
            b.read();
            b.chk_bin();
            b.ones_complement();
            b.display();
            b.display();
return 0;
}