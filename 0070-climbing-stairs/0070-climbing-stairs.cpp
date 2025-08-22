class Solution {
public:
    int climbStairs(int n)
     {
  if( n==1)
  return 1;
  
  if( n==2)
  return 2;

  int prev1 = 1;
  int prev2 = 2;
  int curr =0;

  for (int i = 3; i <=n; i++) 
  {
    curr = prev1+prev2;
    prev1=prev2;
    prev2=curr;


  }      

  return curr;
    }
};