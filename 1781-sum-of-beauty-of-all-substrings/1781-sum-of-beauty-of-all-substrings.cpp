class Solution {
public:
    int beautySum(string s) {
        string t = "";
        int sum=0;
        for(int i=0;i<s.length();i++){
            vector<int> hash(26);
            for(int j=i;j<s.length();j++){
                int maxi = INT_MIN;
            int mini = INT_MAX;
                hash[s[j]-'a']++;
                for(int k=0;k<26;k++){
                    if(hash[k]>0){
                mini = min(mini,hash[k]);
                maxi = max(maxi,hash[k]);
                    }
                }
                int beauty = maxi-mini;
            sum+=beauty;
            }
        }
        return sum;
    }
};