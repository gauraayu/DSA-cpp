#include <iostream>
#include<vector>
using namespace std;
int main()
{
vector<pair<int,string>>ans;
int n;
cout<<"enter how many recodes";
cin>>n;
for(int i=0;i<n;i++){
    int x;string name;
    cout<<"enter roll no."<<endl;
    cin>>x;
    cout<<"enter name";
    cin>>name;
    ans.push_back({x,name});
}
for(auto p:ans){
    cout<<p.first<<" "<<p.second<<endl;
}
}