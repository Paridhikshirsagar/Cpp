class Solution {
public:
    int sumOfUnique(vector<int>& nums)
     {
        unordered_map<int,int>box;
        int ans = 0;

        for(int i : nums)
        {
            box[i]++;
        }

        for(int i : nums)
        {
            if(box[i]==1)
            {
                ans += i;
            }
        }

        return ans;
    }
};