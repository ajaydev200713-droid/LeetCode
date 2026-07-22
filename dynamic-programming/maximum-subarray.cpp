class Solution 
{
public:
    int maxSubArray(vector<int>& nums)
    {
        int n = nums.size();
        int maxsum = INT_MIN;
        int length = 0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=i;j<n;j++)
            {
                sum+=nums[j];
                if(maxsum < sum)
                {
                    maxsum = sum;
                    // if(j-i+1 > length)
                    // {
                    //     length = j-i+1;
                    // }
                    // length = j-i+1;
                }
            }
        }   
        return maxsum;
    }
};