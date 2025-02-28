#include <iostream>
#include<array>
using namespace std;

int main()
{
 array<int,5>arr1{45,2,3,17};
 array<int,5>arr2{40,98,23,12,9};
 swap(arr1,arr2);
//  this for each is only used to print the array
 for(auto p1:arr1){
    cout<<p1<<"\t";
 }
//  p2 p1 are variables 
cout<<endl;
 for(auto p2:arr2){
    cout<<p2<<"\t";
 }
}