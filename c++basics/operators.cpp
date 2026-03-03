#include<iostream>
using namespace std;
int main(){
    int a=20,b=10;
    //arithmetic operators
    cout<<"a+b="<<(a+b)<<endl;//addition
    cout<<"a-b="<<(a-b)<<endl;//subtraction
    cout<<"a*b="<<(a*b)<<endl;//multiplication
    cout<<"a/b="<<(a/b)<<endl;//division(result:quotient)
    cout<<"a%b="<<(a%b)<<endl;//modulo(result:remainder)
    //Relational operators
    cout<<"a>b? : "<<(a>b)<<endl;//1
    cout<<"a<b? : "<<(a<b)<<endl;//0
    cout<<"a==b? : "<<(a==b)<<endl;//0
    cout<<"a>=b? : "<<(a>=b)<<endl;//1
    cout<<"a<=b? : "<<(a<=b)<<endl;//0
    cout<<"a!=b? : "<<(a!=b)<<endl;//1
    //logical operators
    cout<<"a>b and a==b? : "<<(a>b && a==b)<<endl; //&& logical and
    cout<<"a>b or a==b? : "<<(a>b || a==b)<<endl; // || logical or
    cout<<"not a>b : "<<!(a>b)<<endl;// ! logical not
    //assignment operators =,+=,-=,*=,/= etc
    //unary operators 
    b=a++; //post increment a++ ,pre increment ++a
    int c=--a;//post decrement a--, post decrement --a
    cout<<"b= "<<b<<endl; //first store in b then increment a=21
    cout<<"c= "<<c<<endl;//first decrement a=20 then store in c
    cout<<"a= "<<a<<endl;//increment and decrement = original
    return 0;
}