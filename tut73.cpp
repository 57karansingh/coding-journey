#include <iostream>
#include<map>
#include<string>

using namespace std;

// Mapis an associative array
int main() {
    map<string, int> marksMap;
    marksMap["Karan"]=98;
    marksMap["Jack"]=97;
    marksMap["Oggy"]=95;

    marksMap.insert({{"Kozume", 169.2},{"kuroo",187.7}});
    map<string, int> :: iterator iter;
    for(iter = marksMap.begin(); iter!= marksMap.end();iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    cout<<" The sizeis:"<<marksMap.size()<<endl;
    cout<<" The max size is:"<<marksMap.max_size()<<endl;
    cout<<" The empty's return value is:"<<marksMap.empty()<<endl;
    
    return 0;
}