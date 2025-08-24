class Solution {
public:
    int longestSubarray(vector<int>& nums) 
    {
        int keep = 0 , deleteOne=0, ans=0;
        bool hasZero= false;


        for (int n : nums) 
        {
            if (n==1) 
            {
                keep++;
                deleteOne++;
            }
            else{
                hasZero= true;
                deleteOne=keep;
                keep=0;
            }

            ans=max(ans,deleteOne);
        }
        
        if(!hasZero) return ans-1;
        return ans;
    }
};