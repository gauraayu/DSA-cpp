#include <iostream>
#include<vector>
using namespace std;
int main()
// in this we have made vector static
{
 vector<int>v(5,10);
 v[0]=90;
 v[2]=89;
 v[4]=100;
 cout<<"size="<<v.size()<<"\n";
 for(auto p:v){
    cout<<p<<"\t";
 }

}