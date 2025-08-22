class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int result = 0;
        for (int i = 0; i < 32; i++)
         {
            int bitCount = 0;
            for (int num : nums)
             {
                if ((num >> i) & 1)
                 {
                    bitCount++;
                }
            }
            if (bitCount % 3 != 0)
             {
                result |= (1 << i);
            }
        }
        return result;
    }
};
