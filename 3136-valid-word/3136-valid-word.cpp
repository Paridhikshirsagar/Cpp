class Solution {
    public:
    bool isValid(string word) {
        if(word.length() <3 ) return false;


        string vowels = "aeiouAEIOU"  ;
        bool hasVowel = false;
        bool hasConsonant = false;

        for ( char c : word )
        {
            if(!isalnum(c)) return false;
            if(isalpha(c)) {
                if (vowels.find(c) != string::npos) {
                    hasVowel=true;
                } 
                else {
                    hasConsonant = true;
                }
            }
        }
        return (hasVowel && hasConsonant);
    }
};