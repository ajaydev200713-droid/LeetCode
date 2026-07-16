class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int l = s.size();
        int ans = 0;
        int max = 0;
        for(int i=0;i<l;i++)
        {
            bool visit[256] = {false};
            ans = 0;
            for(int j=i;j<l;j++)
            {
                if(visit[s[j]])
                    break;
                visit[s[j]] = true;
                ans++;
            }
            if(max < ans)
            {
                max  = ans;
            }
        }
        return max;
    }
};