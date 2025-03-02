#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int>v;
  v.push_back(2);
  v.push_back(20);
  v.push_back(1);
  v.push_back(39);
  v.push_back(14);
  for(auto p:v){
    cout<<p<<"\t";
 }
 cout<<"min value"<<*min_element(v.begin(),v.end());
 cout<<endl;
 cout<<"max value"<<*max_element(v.begin(),v.end());
 cout<<endl;
 cout<<"if it is empty"<<v.empty();
 vector<int>::iterator it=v.begin();
 v.insert(it,32);
 for(auto p:v){
  cout<<p<<"\t";
}

 v.pop_back();
 cout<<"\n";
 for(auto p:v){
  cout<<p<<"\t";
}
cout<<endl;
v.erase(it+2);
for(auto p:v){
  cout<<p<<"\t";
}
int x;
cout<<"enter value for searching";
cin>>x;
auto j=find(v.begin(),v.end(),x);
cout<<*j;
v.erase(j);
cout<<endl;
for(auto p:v){
  cout<<p<<"\t";
}
cout<<endl<<"reversed";
reverse(v.begin(),v.end());
for(auto p:v){
  cout<<p<<"\n";
}
}