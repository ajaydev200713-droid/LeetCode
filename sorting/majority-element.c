int majorityElement(int* nums, int numsSize) 
{
    int count=0;
    int canditate;
    for(int i=0;i<numsSize;i++)
    {
        if(count==0)
        {
            canditate=nums[i];
        }
        if(nums[i] == canditate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    return canditate;
}