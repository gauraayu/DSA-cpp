#include <iostream>
#include<vector>
#include<iterator>
using namespace std;
int main()
// in this we have made vector static
{
 vector<int>v;
 int n,input;
 cout<<"how many elements \n";
 cin>>n;
 for (int i = 0; i < n; i++)
 {
    cout<<"enter value inputs \n";
    cin>>input;
    v.push_back(input);
 }
 for(auto p:v){
    cout<<p<<"\t";
 }
//  to delete A array from last wee use pop back
v.pop_back();
  
cout<<"after deletion \n";
for(auto p:v){
    cout<<p<<"\t";
 }
 vector<int>::iterator it=v.begin();
v.insert(it,300);
cout<<"\n insert at begin \n";
for(auto p:v){
    cout<<p<<"\t";
}
v.insert(it-2,100);
cout<<"\n insert at begin \n";
for(auto p:v){
    cout<<p<<"\t";
}
}