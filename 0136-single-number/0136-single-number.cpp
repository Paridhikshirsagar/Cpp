class Solution {
public:
    int singleNumber(vector<int>& nums) {
     int result =0;
     for (int nums:nums) 
     {
        result ^= nums;
     }   

     return result;
    }
};