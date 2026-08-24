class Solution {
public:
pair<int,int> maxEl(vector<int> mat,int m){
    int maxi = INT_MIN;
    int row = -1;
    for(int i=0;i<m;i++){
    if(mat[i]>maxi){
        maxi = mat[i];
      row = i; 
    }
    }
    return {maxi,row};
}
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int low = 0;
        int high = m-1;
        while(low<=high){
            int mid = (low + high)/2;
            auto ans = maxEl(mat[mid] , n);
            int maxElement = ans.first;
            int left = (mid>0)?mat[mid-1][ans.second]:-1;
            int right = (mid<m-1)? mat[mid+1][ans.second] : -1;
            if( maxElement > left && maxElement > right ){
                return {mid,ans.second};
            }
            else if( maxElement < left){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return  {-1,-1};
    }
};