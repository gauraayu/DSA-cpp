#include <iostream>
using namespace std;
void combine(int arr[], int low, int mid,int high){
    int bk[high+1];
    int i,j,k=0;
    i=low;
    j=mid+1;
    while (i<=mid&&j<=high)
    {
        if (arr[i]<arr[j])
        {
        bk[k]=arr[i];
        i++;
        }
        else{
            bk[k]=arr[j];
        j++;
        }
        k++;

        
    }
    while (i<=mid)
    {
       bk[i]=arr[i];
       i++;
       k++;
    }
    while(j<=high){
        bk[k]=arr[j];
        j++;
        k++;
    }
    for (int i = low; i < high; i++)
    {
        arr[i]=bk[i];
    }
    
    
}
void mergesort(int arr[], int low, int high)
{
    int mid;
    if(low<high){
        mid=(low+high)/2;
        mergesort(arr,low,mid);
        
    }
}
int main()
{
  int arr[] = {9, 2, 1, 50, 6};
        int s = sizeof(arr) / sizeof(arr[0]);
        for (int i = 0; i < s; i++)
        {
            cout << arr[i]<<"\t";
                 
        }
        qksort(arr,0,s-1);
        cout<<"\n after apllying sort:"<<endl;
         for (int i = 0; i < s; i++)
        {
            cout << arr[i]<<"\t";
                 
        }
        return 0;
}