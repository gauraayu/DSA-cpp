#include <iostream>
#include<vector>
using namespace std;
int main()
{
 vector<vector<int>>v1;//here the inner vector id given as v2 afterwards
 int row, col,n;
 cout<<"enter no. of rows"<<endl;
 cin>>row;
 cout<<"enter no. of column"<<endl;
 cin>>col;
 for (int i = 1; i <= row; i++)
 {
    vector<int>v2; //giving vector id to the inner vector
    for (int j = 1; j <=col; j++)
    {
        cout<<"enter value"<<endl;
        cin>>n;
        v2.push_back(n);

    }
    v1.push_back(v2);
    
 }
 cout<<"stored values are"<<endl;
 for(int i=0;i<v1.size();i++){
    for (int j = 0; j < v1[i].size(); j++)
    {
        cout<<v1[i][j]<<"\t";
    }
    cout<<endl;
    
 }
 
}