#include <iostream>
using namespace std;
int divide(int arr[], int low, int high)
{
    int pv = arr[low]; // low=0 i.e pv=9
    int i = low + 1;   // 1 step age s
    int j = high;      // last element or high     //starts wd 4
    do
    {
        while (arr[i] < pv)
        { // this is for low side
            i++;
        }
        while (arr[j] > pv)
        { // this is for high side   //1st step : 6>9
            j--;
        }

        if (i < j)
        {
            int tmp;
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
        }

    } 
    while(i<j);
    
        int tmp;
        tmp = arr[low];
        arr[low] = arr[j];
        arr[j] = tmp;
        return j;
}
    void qksort(int arr[], int low, int high)
    {
        int pv;
       
        if (low < high)
         // algorithm of qksort starts here
        {                                // arr ka comparison tb tk chlega
            pv = divide(arr, low, high); // 3 position //here fucntion is being called //divide functn bnaya pivot element lane k lie
            qksort(arr, low, pv - 1);    // pv-1=means pivot s ek kam kyuki 2 parts m divide kra kyuki pivot elemtn mil gy ameans uske left side elemnt usse kam hog aaur right side elemnt usse zada
            qksort(arr, pv + 1, high);
        }
    };
        // end of algorith of qk sort
   
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




//program ko divide kr rhe h  
// time complexity = avg& best case = n log n
// worst case m order  of n^2  o(n^2) // because of this merge short came 
  

//   space complexity is order of 1 i.e constant