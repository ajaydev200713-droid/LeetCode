class Solution {
public:
    bool check(vector<int>& nums) 
    {
        int n = nums.size();
        int count = 0;
        for(int i=0;i<n;i++)
        {
            //i+1%n -> this checks the array is rotated or not
            // if the array is rotated then there is only one break point 
            // so we are using count as and checking equal to 1 or not
            if(nums[i] > nums[(i+1)%n])
            {
                count++;
            }
        }
        if(count<=1)
        {
            return true;
        }
        else
            return false;
    }   
};