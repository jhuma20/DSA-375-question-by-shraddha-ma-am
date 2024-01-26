//contains duplicates
class solution{
    public:
    bool containduplicate(vector<int>&num)
    {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(arr[i]==arr[i+1])
            {
                return true;
            }
        }
        return false;
    }
}