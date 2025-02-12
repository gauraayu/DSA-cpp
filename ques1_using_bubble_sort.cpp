// USING BUBBLE SORT

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
    public:void bubble(int arr[],int s)
    {
        for (int i = 0; i < s; i++)
        {
           for (int j = 0; j <s-1; j++)
           {
            if (arr[j]>arr[j+1])
            {
            
            int temp;
            
            }
           }
           
        }
        
    }
    
        
    };




// this is not present in online compiler tests
int main()  //  driver codde starts here
{
int a[]={3,4,5,6,7};


int s=sizeof(a)/sizeof(a[0]);
cout<<"size of s="<<s<<endl;

for (int i = 0; i < s; i++)
{
    cin>>a[i];
}

top p;
p.bubble(a,s);


}
// driver code end