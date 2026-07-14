class Solution {
public:
    int searchInsert(vector<int>& nums, int target) 
    {
        int l=nums.size();
        int low=0;
        int high=l-1;
        int temp;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(nums[mid] == target)
            {
                return mid;
            }
            else if(nums[mid]<target)
            {
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        // for(int i=0;i<l;i++)
        // {
        //     if(nums[i]<target && nums[i]<target)
        //     {
        //         return i;
        //     }
        // }
        return low;
    }
};