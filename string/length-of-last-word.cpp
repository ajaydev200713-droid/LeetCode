class Solution {
public:
    int lengthOfLastWord(string s) {
        int l=s.length();
        string ch="";
        int count=0;
        for(int i=l-1;i>=0;i--)
        {
            if(i == l-1 && s[i] == ' ')
            {
                while(s[i] == ' ' && i>=0)
                {
                    i--;
                }
            }
            if(s[i] != ' ')
            {
                ch+=s[i];
                count++;
            }
            if(s[i] == ' ')
            {
                break;
            }
        }
        return count;
    }
};