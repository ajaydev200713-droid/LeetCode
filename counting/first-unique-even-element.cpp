class Solution {
public:
    int firstUniqueEven(vector<int>& nums) 
    {
        int n = nums.size();
        unordered_map<int ,int>mpp;
        for(auto it : nums)
        {
            if(it%2 == 0)
                mpp[it]++;
        }
        for(auto it : nums)
        {
            if(it%2 == 0 && mpp[it] == 1)
                return it;
        }
        return -1;
    }
};