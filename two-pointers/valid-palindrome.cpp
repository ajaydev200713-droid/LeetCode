class Solution {
public:
    bool isPalindrome(string s) 
    {
        int l = s.length();
        string newstr="";
        for(int i=0;i<l;i++)
        {
            if(isalpha(s[i]) || isdigit(s[i]))
                newstr+=tolower(s[i]);
            // if(isdigit(s[i]))
            //     return false;
        }
        int n = newstr.length();
        // if(n==1)
        //     return false;
        int left = 0;
        int right = n-1;
        while(left<right)
        {
            if(newstr[left] != newstr[right])
                return false;
            left++;
            right--;
        }
        return true;
    }
};