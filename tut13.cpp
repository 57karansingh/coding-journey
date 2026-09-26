#include<iostream>
using namespace std;
int main(){
      int marks[4] = {23, 45, 56, 89};
      int mathsmarks[4];
      mathsmarks[0] = 489;
      mathsmarks[1] = 490;
      mathsmarks[2] = 487;
      mathsmarks[3] = 486;
    //   cout<<"These are maths marks"<<endl;
    //   cout<<mathsmarks[0]<<endl;
    //   cout<<mathsmarks[1]<<endl;
    //   cout<<mathsmarks[2]<<endl;
    //   cout<<mathsmarks[3]<<endl;
      cout<<"These are marks"<<endl;
      cout<<marks[0]<<endl;
      cout<<marks[1]<<endl;
    //   you can change value of array
    marks[2] = 455;
      cout<<marks[2]<<endl;
      cout<<marks[3]<<endl;
    // by loop (for loop)
    for (int i = 0; i < 4;  i++)
    {
        cout<<"the value of marks "<<i<<" is "<<marks[i]<<endl;
    }
// quick quizz: do the same using while and do-while loops?
// Pointer adn arrays 
int* p = marks;
cout<<*(p++)<<endl;
cout<<*(++p)<<endl;
cout<<"The value of *p is "<<*p<<endl;
cout<<"The value of marks [0] is "<<*(p+1)<<endl;
cout<<"The value of marks [0] is "<<*(p+2)<<endl;
cout<<"The value of marks [0] is "<<*(p+3)<<endl;

return 0;
}