class Solution {
public:
bool arrSum(vector<int>& nums, int divisor,int threshold){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        sum+=ceil((double)nums[i]/divisor);
    }
    if(sum<=threshold){
        return true;
    }
    else{
        return false;
    }
}
int FindMax(vector<int>&nums){
    int maxi=INT_MIN;
    for(int i=0;i<nums.size();i++){
        maxi=max(maxi,nums[i]);
    }
    return maxi;
}

    int smallestDivisor(vector<int>& nums, int threshold) {
        int n = nums.size();
        int low=1;
        int high=FindMax(nums);
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            if(arrSum(nums,mid,threshold)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};