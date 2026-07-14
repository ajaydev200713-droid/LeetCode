class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n = strs.size();
        string prefix = strs[0];
        for(int i=1;i<n;i++)
        {
            string temp = "";
            int l = min(strs[i].size(),prefix.size());
            for(int j=0;j<l;j++)
            {
                if(prefix[j] == strs[i][j])
                {
                    temp+=prefix[j];
                }
                else
                {
                    break;
                }
            }
            prefix = temp;
            if(prefix.empty())
            {
                return "";
            }
        }
        return prefix;

        
    }
};