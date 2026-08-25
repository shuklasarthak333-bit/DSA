class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int count1=0,count2=0,count3=0;
        int r1,r2;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count1++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                count2++;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]==2){
            count3++;
            }
        }
        for(int j=0;j<count1;j++){
            nums[j]=0;
        }
        r1=count1;
        for(int j=r1;j<r1+count2;j++){
            nums[j]=1;
        }
        r2=r1+count2;
        for(int j=r2;j<r2+count3;j++){
            nums[j]=2;
        }



    }    
};