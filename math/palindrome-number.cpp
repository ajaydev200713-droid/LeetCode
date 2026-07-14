class Solution {
public:
    bool isPalindrome(int x) 
    {
        bool sign = true;
        if(x<0)
        {
            return false;
        }   
        x = abs(x);
        int copy = x;
        long long rev = 0;
        while(x>0)
        {
            int rem = x%10;
            rev = rem + (rev*10);
            x/=10;
            if(rev > INT_MAX || rev < INT_MIN)
                return 0;
        }
        if(!sign)
            rev = -1 * rev;
        if(rev == copy)
            return true ;
        else 
            return false ;
    }
};