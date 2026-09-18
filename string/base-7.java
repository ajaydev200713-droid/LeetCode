class Solution {
    public String convertToBase7(int num) {
        StringBuffer cal = new StringBuffer("");
        Boolean ans = true;
        if(num < 0)
            ans = false;
        int nums = Math.abs(num);
        while(nums>0)
        {
            int rem = nums%7;
            cal.append(rem);
            nums/=7;
        }
        if(ans)
            return cal.toString();
        else
            {
                cal.append("-");
                cal.reverse();
                return cal.toString();
            }
    }
}