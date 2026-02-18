#include<iostream>
#include<deque>
using namespace std;
int main(){
    //deque is similar to list but only difference is random access
    deque<int> d;
    d.push_back(2);
    d.push_back(3);
    d.push_front(1);
    d.push_front(0);
    d.pop_back();
    d.pop_front();
    cout<<" deque elements after all operations :\n";
    for(int &i:d)
    cout<<i<<" ";
    cout<<"\nrandom access :"<<d.at(4);//not possible in lists  
    return 0;
}