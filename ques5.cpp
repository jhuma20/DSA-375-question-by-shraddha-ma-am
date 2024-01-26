// chocolate distributed problem
// initialize an arr{0,n-1}
// return min difference between maximum
// find the maximum value
#include <iostream>
using namespace std;
int findMindiff(int arr[], int n, int m)
{
    // if there is no stuent and no chocholate
    if (m == 0 || n == 0)
    {
        return 0;
    }
    // sort the given packet
    sort(arr, arr + n);

    // no of student cannot be more then packet
    if (n < m)
    {
        return -1;
    }
    int min_diff = INT_MAX;
    // because we want to calculate the minimum difference
    for (int i = 0; i + m - 1 < n; i++)
    {
        int diff = arr[i + m - 1] - arr[i];
        if (diff < min_diff)
        {
            min_diff = diff;
        }
    }
    return min_diff;
}

int main()
{
    int arr[] = {3, 4, 1, 9, 5, 6, 7, 9, 12};
    // m is the number of student
    int m = 5;
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"minimum difference is"<<findMindiff(arr,n,5)<<" "<<endl;
    return 0;
}