class Solution {
public:
int searchRow(vector<int>& matrix,int target, int m){
    int low = 0;
    int high = m-1;
    while(low<=high){
        int mid = (low+high)/2;
        if( matrix[mid] == target){
            return true;
        }
        else if( target < matrix[mid]){
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return false;
}
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = n-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(target >= matrix[mid][0] && target <= matrix[mid][m-1]){
                return searchRow( matrix[mid] , target , m);
            }
            else if(matrix[mid][0] > target){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        return false;
    }
}; 