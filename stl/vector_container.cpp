#include<iostream>
#include<vector>
using namespace std;
int main(){
    //vector creations
    vector<int> vec1;
    vector<int> vec2={1,2,3};
    vector<int> vec3(3,2);// vector with 3 elements all are 2's
    vector<int> vec4(4);//vector with 4 elements all are 0's
    vector<int> vec5(vec2);//makes a copy of vec2

    //stl functions
    //size:returns number of vector elements
    cout<<"size of vec2 : "<<vec2.size()<<endl;
    //pish_back(element):used to append an element in avector
    vec1.push_back(10);
    vec1.push_back(20);
    vec1.push_back(30);
    //capacity:return no of elements that can be occupied
    cout<<"vec1 capacity:"<<vec1.capacity()<<endl;
    //pop_back():used to remove last inserted element
    vec2.pop_back();
    cout<<"front element of vec5:"<<vec5.front()<<endl;
    cout<<"last element of vec5:"<<vec5.back()<<endl;
    //erase:used to remove a range of elements
    vec1.erase(vec1.begin()+1,vec1.begin()+3);
    cout<<"after erasing 2nd and 3rd elements of the vector:"<<endl;
    for(int &x : vec1){
        cout<<x<<" ";
    }
    //insert:used to insert elements in between
    vec5.insert(vec5.begin()+1,4);
        cout<<"\nafter inserting 4 at 1st position:"<<endl;
    for(int &x : vec5){
        cout<<x<<" ";
    }cout<<endl;
    //clear():used to clear all elements of the vector but cant change the capacity
    vec1.clear();
    cout<<"is vec1 empty:"<<vec1.empty()<<endl;
    cout<<"capacity will be same:"<<vec1.capacity()<<endl;

    return 0;
}