class Solution {
public:
    int candy(vector<int>& ratings) {
        int n=ratings.size();
        vector<pair<int,int>>kid(n);
        vector<int>ans(n,1);
        for (int i = 0; i < n; ++i) kid[i].first=ratings[i],kid[i].second=i;
        sort(kid.begin(),kid.end());
        for (auto [x,i] :kid) {
            if (i>0 && ratings[i]>ratings[i-1]){
                ans[i]= max(ans[i],ans[i-1]+1);
            }
            if (i<n-1 && ratings[i]>ratings[i+1]){
                ans[i]= max(ans[i],ans[i+1]+1);
            }
        }
        return accumulate(ans.begin(),ans.end(),0ll);
    }
};