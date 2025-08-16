class Solution {
  public:
    bool isBalanced(string& k) {
        stack<char> st;

        for(char c : k) 
        {
            if(c == '(' || c == '{' || c == '[') {
                st.push(c);
            }
            else {
                if(st.empty()) return false;
                char topChar = st.top();
                st.pop();
                if((topChar == '(' && c != ')') ||
                   (topChar == '{' && c != '}') ||
                   (topChar == '[' && c != ']')) {
                    return false;
                }
            }
        }
        return st.empty();
    }
};
