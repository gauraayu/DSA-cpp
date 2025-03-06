#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
 int n1,n2;
 cout<<"enter number of inputs in 1st array ";
 cin>>n1;
 vector<int>a(n1);
 cout<<endl;
 for (int j = 0; j < n1; j++)
 {
    cout<<"enter value"<<" "<<j;
    cin>>a[j];
    
 }
 cout<<endl;
 for(auto x:a){
    cout<<x<<" "<<"\t";
 }
 cout<<"enter number of inputs in 2nd array ";
 cin>>n2;
 cout<<endl;
 vector<int>b(n2);
 cout<<endl;
 for (int k = 0; k < n2; k++)
 {
    cout<<"enter value"<<" "<<k;
    cin>>b[k];
    
 }
 cout<<endl;
 for(auto y:b){
    cout<<y<<" "<<"\t";
 }
 cout<<endl;

 
    
    int m=a.size(),n=b.size();
    int max_size=max(m,n);
    vector<int>result;(max_size,0);
    for (int i = 0; i <max_size; i++)
    {
        int sum=a[i]+b[i];
        result.push_back(sum);
    }
    for(auto r:result){
        cout<<"result is"<<r<<"\t"<<endl;
    }

    
 }

