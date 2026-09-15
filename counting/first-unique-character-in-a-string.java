class Solution {
    public int firstUniqChar(String s) 
    {
        int n = s.size();
        unordered_map<char,int>mpp;
        for(char ch : s)
        {
            mpp[s]++;
        }    
        for(int i=0;i<n;i++)
        {
            if(mpp[i].second == 1)
                return i;
        }
        return -1;
    }
}