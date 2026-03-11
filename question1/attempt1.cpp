class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int i = 0;
        int j = nums.size()-1;
        int y = x;
        int count = 0;
        while(y>0&&i<=j)
        {
            if(y-nums[i]<=y-nums[j])
            {
                if(y-nums[i]>=0)
                {
                    y=y-nums[i];
                    count++;
                    i++;
                }
                else{
                    y=y-nums[j];
                    count++;
                    j--;
                }
                
            }
            else if(y-nums[j]<=y-nums[i])
            {
                if(y-nums[j]>=0)
                {
                    y=y-nums[j];
                    count++;
                    j--;
                }
                else
                {
                    y=y-nums[i];
                    count++;
                    i++;
                }
                
            }
        }
        if(count>0 && y==0)
        {
            return count;
        }
        else{
            return -1;
        }
    }
};