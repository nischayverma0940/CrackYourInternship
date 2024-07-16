class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int i = 0;
        while(i < s.length()){
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                st.push(s[i]);
            } else if(s[i] == ')'){
                if(st.empty()) return false;
                char cur = st.top();
                st.pop();
                if(cur != '(') return false;
            } else if(s[i] == '}'){
                if(st.empty()) return false;
                char cur = st.top();
                st.pop();
                if(cur != '{') return false;
            } else if(s[i] == ']'){
                if(st.empty()) return false;
                char cur = st.top();
                st.pop();
                if(cur != '[') return false;
            }
            i++;
        }
        if(!st.empty()) return false;
        return true;
    }
};
//Leetcode 20
