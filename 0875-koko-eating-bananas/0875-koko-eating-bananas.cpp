class Solution {
public:
int max_el(vector<int>& piles){
    int mini=INT_MIN;
    for(int i=0;i<piles.size();i++){
       mini = max(mini,piles[i]);
    }
    return mini;
}
long long calculateTotalH(vector<int>& piles,int hourly){
    long long totalH=0;
    int n=piles.size();
    for(int i=0;i<n;i++){
totalH += ((long long)piles[i] + hourly - 1) / hourly;    }
    return totalH;
}

    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=max_el(piles);
        int ans=-1;
        while(low <= high){
            int mid = (low+high)/2;
            long long totalH=calculateTotalH(piles,mid);
            if(totalH<=h){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};