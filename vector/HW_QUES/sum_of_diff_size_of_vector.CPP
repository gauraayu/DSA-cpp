#include <iostream>
#include<vector>
using namespace std;
int main()
{
  // here we aree giving static numbers in the code 
  vector<int>v1{5,1,7};
  vector<int>v2{5,5,7,8,1,2};
  int a=0,b=0;
  for (int i = 0; i <v1.size(); i++)
  {
    a=a*10+v1[i];

  }
  for (int j = 0; j < v2.size(); j++)
  {
    b=b*10+v2[j];
  }
  cout<<a+b;
  
}