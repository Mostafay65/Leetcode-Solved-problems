class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        vector<int>Maxinrow(grid.size()),Maxincol(grid.size());
        for (int i = 0; i < grid.size(); ++i) {
            Maxinrow[i]=*max_element(grid[i].begin(),grid[i].end());
        }
        for (int j = 0; j < grid.size(); ++j) {
            int mxincol=INT_MIN;
            for (int i = 0; i < grid.size(); ++i) {
                mxincol= max(mxincol,grid[i][j]);
            }
            Maxincol[j]=mxincol;
        }
        long long ans=0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid.size(); ++j) {
                ans +=max(grid[i][j], min(Maxinrow[i],Maxincol[j])) - grid[i][j];
            }
        }
        return ans;
    }
};