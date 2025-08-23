class Solution {
public:
    string countDigits(int n) {

        string s= to_string(n);
        sort(s.begin(), s.end());
        return s;
    }


    bool reorderedPowerOf2(int n)
    {
        string target= countDigits(n);
        for (int i = 0; i<31; i++)
        {
            int power = 1<<i;

            if(countDigits(power)== target)
            return true;
        }


        return false;
    }

};