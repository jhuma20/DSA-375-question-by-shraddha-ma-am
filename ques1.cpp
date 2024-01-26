#include<iostream>
using namespace std;
int getMin(int arr[],int n)
{
    int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int getMax(int arr[],int n)
{
    int max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[3]={1,2,3};
    int size=3;
    int minimum=getMin(arr,3);
    int maximum=getMax(arr,3);
    cout<<" minimum number is"<<" "<<minimum<<" "<<endl;
    cout<<" maximum number is"<<" "<<maximum<<" "<<endl;
    return 0;
}