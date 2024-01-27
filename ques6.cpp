// search in a rotated sorted array
class solution{
    public:
    int search(vector<int>&arr,int k)
    {
        int start=0;
        int size=arr.size();
        int end=size-1;
        while(arr[start]<=arr[end])
        {
            int mid=(start+end)/2;
            if(arr[mid]==k)
            {
                return mid;
            }
            if(arr[start]<=arr[mid]){
            if(arr[start]<=k && k<=arr[mid])
            {
                end=mid-1;
            }
            else{
                start=mid+1;
            }
        }
        else{
            if(arr[mid]>=k && arr[end])
            {
                start=mid+1;
            }
            else{
                end=mid-1;
            }
        }
     }
     return -1;
    }
};