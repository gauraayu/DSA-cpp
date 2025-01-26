// QUES 1 IN ONLINE PLATFORMS WDOUT INT MAIN 
// kuch b value input kre voh compiler ki marzi

//  QUES 1 wap to display values of array
// ex 1:
//       i/p:arr[2,3,4,5]
//       o/p:2,3,4,5
// ex 2:
//       i/p:arr[]
//       o/p:no data

#include <iostream>
using namespace std;
class top{
    public:void show(int arr[],int s)
    {
        if(s==0){
            cout<<"no data";
        }
        else{
        for (int i = 0; i < s; i++)
        {
            // METHOD 1
          cout<<arr[i];
          if(i<s-1){
            cout<<",";}

        // OR  
        // METHOD 2
        //    if(i==s-1){
        //     cout<<arr[i];
        //    }
        //    else{
        //     cout<<arr[i]<<",";
        //    }
          }
        }
    }
    
        
    };




// this is not present in online compiler tests
int main()  //  driver codde
{
// int a[5]={3,4,5,6,7};

int n;
cout<<"enter size of array either 0 or moree "<<endl;
cin>>n;
int a[n];
int s=sizeof(a)/sizeof(a[0]);
cout<<"size of s="<<s<<endl;
cout<<"enter "<<n<<"values"<<endl;
for (int i = 0; i < n; i++)
{
    cin>>a[i];
}

top p;
p.show(a,s);


}