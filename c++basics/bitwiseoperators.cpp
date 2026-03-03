#include<iostream>
using namespace std;
int main(){
    int a=1/*0001*/,b=2;//0010
    //bitwise OR
    cout<<(a|b)<<endl;
    //bitwise AND
    cout<<(a&b)<<endl;
    //bitwise XOR
    cout<<(a^b)<<endl;
    //right shift
    cout<<(a>>1)<<endl;
    //left shift
    cout<<(a<<1)<<endl;
    return 0;
}