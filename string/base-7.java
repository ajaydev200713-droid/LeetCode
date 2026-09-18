class Solution {
    public String convertToBase7(int num) {
        StringBuffer cal = new StringBuffer("");
        if(num==0)
            return "0";
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
        cal.reverse();
        if(ans)
            return cal.toString();
        else
            {
                cal.insert(0,"-");
                return cal.toString();
            }
    }
}