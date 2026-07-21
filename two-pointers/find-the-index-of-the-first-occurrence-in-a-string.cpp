class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        int n = haystack.length();
        int l = needle.length();
        for(int i=0;i <= n-l;i++)
        {
            string sub="";
            for(int j=0 ; j<l ; j++)
            {
                sub+=haystack[i+j];
            }
            if(sub == needle)
            {
                return i;
            }
        }
        return -1;
    }
};