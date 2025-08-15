class Solution {
public:
    string largestGoodInteger(string num)
     {
    char maxDigit = 0; 
        for(int i = 0; i + 2 < num.size(); i++)
        {
            if(num[i] == num[i+1] && num[i+1] == num[i+2])
             {
                if(num[i] > maxDigit)
                {
                    maxDigit = num[i];
                }
            }
        }
        if(maxDigit != 0)
        {
            return string(3, maxDigit);
        }
        return "";
    }
};
