class Solution {
    public String reverseWords(String s) 
    {
        String[] sub = s.trim().split("\\s+");
        int n = sub.length-1;
        StringBuilder ans = new StringBuilder();
        for(int i=n;i>=0;i--)
        {
            ans.append(sub[i]);
            if(i != 0)
            {
                ans.append(" ");
            }
        }
        return ans.toString();
        
    }
}