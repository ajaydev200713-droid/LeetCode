class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>>ans;
        vector<int>ds;
        int freq[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            freq[i] = 0;
        }
        premutate(ans , ds , nums , freq);
        return ans;    
    }
    void premutate(vector<vector<int>>& ans , vector<int> &ds , vector<int>& nums , int freq[])
    {
        if(nums.size() == ds.size())
        {
            ans.push_back(ds);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(!freq[i])
            {
                freq[i] = 1;
                ds.push_back(nums[i]);
                premutate(ans , ds , nums , freq);
                freq[i] = 0;
                ds.pop_back();
            }
        }
    }
};