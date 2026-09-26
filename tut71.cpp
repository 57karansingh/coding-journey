#include <iostream>
#include<vector>

using namespace std;
template<class T>
void display(vector<T> &v){
    cout<<"DIsplaying this vector"<<endl;
    for (int i = 0; i<v.size();i++)
    {
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<endl;
}
int main() {
    // way to create vector
    vector<int>vec1;  //zero length vector
    vector<char> vec2(4); // 4- element character vector 
    vector<char> vec3(vec2);//4- element character vector from vec2
    vector<int> v(6,3); //6-element vector of 3
    // vec2.push_back('5');
    // display(vec2);
    vector<int> vec4(6,13); //6-element vector of 3s
    display(vec4);
    cout<<vec4.size();
    int element,size =5;
    // cout<<"Enter the size of your vector"<<endl;
    // cin>>size;

    // for(int i=0; i < 4; i++){
    //     cout<<"Enter an element to add to this vector"<<endl;
    //     cin>>element;
      
    //     vec1.push_back(element);
        
    // }
      // vec1.pop_back();

    // display(vec1);
    // vector<int>::iterator iter = vec1.begin();
    // // vec1.insert(iter,10, 566);//middle waala jitna chahe utna 566 print kr sakta h
    // display(vec1);

    
    return 0;
}
