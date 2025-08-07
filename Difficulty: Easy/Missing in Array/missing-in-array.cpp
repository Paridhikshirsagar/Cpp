class Solution {
  public:
    int missingNum(vector<int>& arr) sort(arr.begin() ,arr.end());
        long long  n =arr.size()+1;
        if(n==1)return 2;
        long long   ans=n*(n+1)/2;
        long long   sum=0; 
        for(int i=0; i<n-1 ;i++){
            sum=sum+arr[i];
            
        }
        if(n==1)return 2;
        else
        return ans-sum;
    }
};