//maximum sub array
class Solution
   {
    public:
    int maxSubarray(vector<int> &nums){
        //we want to intialize INT_MIN  because  we want maximum
        int answer=INT_MIN;
        //initalizing a current sum variable
        int temp=0;
        for(int i=0;i<nums.size();i++)
        {
            temp=temp+nums[i];
        
        if(temp>answer)
        {
            answer=temp;
        }
        if(temp>0)
        {
            temp=0;
        }
    }
    return answer;
   }
   }