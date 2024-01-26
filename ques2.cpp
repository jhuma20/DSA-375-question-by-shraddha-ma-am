//reverse an array
#include<iostream>
using namespace std;
void Reverse(int arr[],int n)
{
    //taking start as 0
    int start=0;
    //taking end as size of array - 1
    int end=n-1;
    //comparing both start ans end
    while(start<=end)
    {
        //if it satisfie the given conditions then they swap with each other
        swap(arr[start++],arr[end--]);
    }
}
//for printing an array
void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    //taking arr input 
    int arr[5]={1,2,3,4,5};
    //taking the size of array
    int size=5;
    //function call
    Reverse(arr,5);
    printArray(arr,5);
    return 0;
}