class Solution {
public:
    int dist(int a, int b){
        int d = abs(a-b);
        return min(d,10-d);
    }
    int minRotations(int n, string s) {
        int base=dist(0,s[0]-'0');

        for(int i=1;i<n;i++){
            base+=dist(s[i-1]-'0',s[i]-'0');
        }
        int ans=base;
        int cost = dist(0,s[n-1]-'0');

        for(int i=1;i<n;i++){
            cost+=dist(s[i]-'0',s[i-1]-'0');
        }
        ans = min(ans,cost);

        for(int k=1;k<n;k++){
            int candidate=base;

            candidate-=dist(s[k-1]-'0',s[k]-'0');
            candidate+=dist(s[k-1]-'0',s[n-1]-'0');
            ans=min(ans,candidate);
        }
        return ans;
    }
};