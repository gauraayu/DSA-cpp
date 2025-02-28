#include <iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v;
    cout<<v.size();
    vector<int>v1{4,2,1,10};
    cout<<v1.size();
    v1[2]=100;//overiding the index 2 of v1
    for(auto p:v1){
        cout<<p<<"\t";}

    
    cout<<"capacity ="<<v1.capacity();
    cout<<endl;
    v1.push_back(67);
    for(auto p:v1){
        cout<<p<<"\t";}

}