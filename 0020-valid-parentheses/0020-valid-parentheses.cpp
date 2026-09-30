class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int count = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(' || s[i]=='{' || s[i]=='['){
                st.push(s[i]);
                count++;
            }
            else{
                if(st.empty() == true){
                    return false;
                }
                if(s[i]==')' && st.top()!='('){
                    return false;
                }
                if(s[i]=='}' && st.top()!='{'){
                    return false;
                }
                if(s[i]==']' && st.top()!='['){
                    return false;
                }
                st.pop();
                count--;
            }
        }
        if(count==0){
            return true;
        }
        return false;
    }
};