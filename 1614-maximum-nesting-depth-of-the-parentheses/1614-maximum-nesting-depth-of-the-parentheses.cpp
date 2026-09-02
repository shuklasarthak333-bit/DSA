class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxi=0;
        vector<int> arr;
        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                count++;
            }
            else if(s[i]==')'){
                count--;
            }
            else{
                continue;
            }
            if(count>maxi){
                maxi=count;
            }
        }
        return maxi;
    }
};