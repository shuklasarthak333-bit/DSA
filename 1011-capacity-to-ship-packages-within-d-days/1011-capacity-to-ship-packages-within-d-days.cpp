class Solution {
public:
    int capacity(vector<int>& weights, int capacity,int days){
        int load=0;
        int day=1;
        for(int i=0;i<weights.size();i++)
        if(load+weights[i]>capacity){
         day=day+1;
         load=weights[i];
        }
         else{
            load+=weights[i];
         }
        return day;
    }
    int Maxi(vector<int>& weights){
        int maxi = INT_MIN;
        for(int i=0;i<weights.size();i++){
            maxi = max(maxi,weights[i]);
        }
        return maxi;
    }
    int Sum(vector<int>& weights){
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum += weights[i];
        }
        return sum;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int low = Maxi(weights);
        int high = Sum(weights);
        int ans;
        while(low <= high){
            int mid=(low+high)/2;
            if(capacity(weights,mid,days)<=days){
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