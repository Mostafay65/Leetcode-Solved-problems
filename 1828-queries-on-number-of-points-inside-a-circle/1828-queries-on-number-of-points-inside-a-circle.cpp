class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int>ans(queries.size());
        for (int i = 0; i < queries.size(); ++i) {
            int cx=queries[i][0],cy=queries[i][1],radius=queries[i][2];
            for (int j = 0; j < points.size(); ++j) {
                int px=points[j][0],py=points[j][1];
                double dis= sqrt((cx-px)*(cx-px)+(cy-py)*(cy-py));
                if (dis<=radius)ans[i]++;
            }
        }
        return ans;
    }
};