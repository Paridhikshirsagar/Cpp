class Solution {
public:
    string reverseWords(string &s) {
        
        vector<string> words;
        string current = "";     // <-- remove the space here
        
        // extract words and ignore extra dots
        for(int i = 0; i < s.length(); i++){
            if(s[i] != '.'){
                current += s[i];
            }
            else {
                if(current.length() > 0){
                    words.push_back(current);
                    current = "";
                }
            }
        }
        
        // push the last word (important!)
        if(current.length() > 0){
            words.push_back(current);
        }
        
        // build the answer in reverse order
        string ans = "";
        for(int i = words.size() - 1; i >= 0; i--){
            ans += words[i];
            if(i != 0){
                ans += ".";
            }
        }
        
        return ans;
    }
};
