class Solution {
public:
    int reverseDegree(string s) {
        vector<int> hash(26);
        int count=1;
        int sum=0;
        for(char ch:s){
            int value='z'-ch+1;
            sum+=count*value;
            count++;
        }
        return sum;
    }
};