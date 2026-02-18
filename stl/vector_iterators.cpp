#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);
    vector<int>::iterator it;
    //forward iterator
    for(it=vec.begin();it!=vec.end();it++){
        cout<<*(it)<<" ";//since it is pointer
    }cout<<endl;
    //backward iterator
    //another way to define iteartor type
    for( auto it=vec.rbegin();it!=vec.rend();it++){
        cout<<*(it)<<" ";
    }
    return 0;
}