#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> s,s2;
    cout<<"pusing 1,2,3 into stack\n";
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<"stack top :"<<s.top()<<endl;
    s.pop();
    cout<<"stack top after removing 3:"<<s.top()<<endl;
    cout<<"size of stack :"<<s.size()<<endl;
    cout<<"Is stack empty? :"<<s.empty()<<endl;
    s2.swap(s);
    cout<<"size of s2 after swapping :"<<s2.size()<<endl;
}