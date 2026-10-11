class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        vector<int> ans;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                ans.push_back(nums[i-1]);
            }
            else{
                continue;
            }
        }
        for(int i=0;i<ans.size();i++){
            sum=sum+(ans[i]*ans[i]);
        }
        return sum;
    }
};