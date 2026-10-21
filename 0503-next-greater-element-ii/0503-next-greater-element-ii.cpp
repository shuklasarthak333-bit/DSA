class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n= nums.size();
        vector<int> ans;
        for(int i=0;i < n;i++){
            int j=(i+1)%n;
            int count=0;
            while(count<n-1){
                if(nums[i]<nums[j]){
                    break;
                }
                else{
                    j=(j+1)%n;
                    count++;
                }
            }
            if(count<n-1 && nums[i]<nums[j]){
                ans.push_back(nums[j]);
            }
            else{
                ans.push_back(-1);
            }
        }
        return ans;
    }
};