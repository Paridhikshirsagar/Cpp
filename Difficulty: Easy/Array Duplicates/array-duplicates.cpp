class Solution 
{
  public:
    vector<int> findDuplicates(vector<int>& arr)
    {
        int n = arr.size();
        vector<int> result;
        
       
        vector<int> freq(n + 1, 0);   
        
        for(int i = 0; i < n; i++)
        {
            freq[arr[i]]++;
        }

        
        for(int i = 1; i <= n; i++)
        {
            if(freq[i] == 2)
            {
                result.push_back(i);
            }
        }
        
        return result;
    }
};
