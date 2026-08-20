class Solution {
public:

int Maxi(vector<int>& nums){
    int maxi = INT_MIN;
    for(int i = 0;i < nums.size() ; i++){
        maxi = max(nums[i],maxi);
    }
    return maxi;
}
int sumi(vector<int>& nums){
    int sum = 0;
    for(int i = 0 ; i < nums.size() ; i++){
        sum+=nums[i];
    }
    return sum;
}
int canSplit(vector<int>& nums,int current){
    int currSum = 0;
    int noOfSplit = 0;
    for(int i=0;i<nums.size();i++){
    if(currSum + nums[i] > current){
        noOfSplit++;
        currSum = nums[i];
    }
    else{
        currSum+=nums[i];
    }
  }
  return noOfSplit+1;
}
    int splitArray(vector<int>& nums, int k) {
        int low = Maxi(nums);
        int high = sumi(nums);
        int result;
        while(low<=high){
            int mid = (low+high)/2;
            if(canSplit(nums,mid)<=k){
                result=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return result;
    }
};