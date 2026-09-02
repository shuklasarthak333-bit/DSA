class Solution {
public:
    string frequencySort(string s) {
        vector<int> hash(256);
        for(char c:s){
            hash[c]++;
        }
        string t = "";
        for(int k=0;k<s.size();k++){
            int maxi=INT_MIN;
            int index=-1;
            for(int i=0;i<256;i++){
                if(hash[i]>maxi){
                    maxi=hash[i];
                    index=i;
                }
            }
            if(index==-1){
                break;
            }
            for(int i=0;i<maxi;i++){
                t+=(char)index;
            }
            hash[index]=0;
        }
        return t;
    }
};