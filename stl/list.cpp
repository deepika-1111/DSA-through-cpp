#include<iostream>
#include<list>
using namespace std;
int main(){
    //similar to vector but list can be pushed and pop from both ends
    list<int> l={1,2,3};
    l.push_back(10);//adds 10 after 3
    l.push_back(50);//adds 50 after 10
    l.push_front(20);//add 20 before 1 
    l.push_front(30);//adds 30 before 20
    l.pop_back();//removes 50
    l.pop_front();//removes 30
    //remaining front,back,clear,empty etc all are same like vector only
    cout<<"List elements after all operations :\n";
    for(int &i:l)
    cout<<i<<" ";

    return 0;
}