#include<vector>
#include<iostream>
using namespace std;
int main(){
    //declaring
    pair<int ,string>p={1,"deepika"};
    //accessing
    cout<<"first element:"<<p.first<<endl;
    cout<<"second element:"<<p.second<<endl;
    //pairs in vectors
    vector<pair<int,int>>v={{1,2},{3,4}};
    for(auto e:v){
        cout<<e.first<<" ";
    }
    return 0;
}