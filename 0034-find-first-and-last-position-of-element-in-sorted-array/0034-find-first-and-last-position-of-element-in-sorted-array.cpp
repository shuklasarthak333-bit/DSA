class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        int low=0;
        int high=n-1;
        int start=-1;
        int end=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                start=mid;
                high=mid-1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        low=0;
        high=n-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]==target){
                end=mid;
                low=mid+1;
            }
            else if(nums[mid]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        if(start==-1 || end ==-1){
            return {-1,-1};
        }
        else{
            return{start,end};
        }
    }
};