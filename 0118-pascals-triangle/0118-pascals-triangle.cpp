class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int rowIndex = 0 ; rowIndex < numRows ; rowIndex++){
            vector<int>row;
            long long val=1;
            for(int i=0;i<=rowIndex;i++){
                row.push_back(val);
                val=val*(rowIndex-i);
                val=val/(i+1);
            }
            ans.push_back(row);
        }
        return ans;
    }
};