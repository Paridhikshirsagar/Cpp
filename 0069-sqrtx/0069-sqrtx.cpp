class Solution{
    public:
    int mySqrt(int x)
    {
        if (x<2) return x;

        long long left= 1, right=x , ans=0;

        while (left <= right)
        {
            long long mid = (left+right)/2;
            long long sq= mid*mid;

            if (sq==x)
            {
                return mid;
            }
            else if (sq<x) 
            {
                ans=mid;
                left=mid+1;
            }
            else {
                right= mid-1;
            }
        }
        return(int)ans;
    }
};