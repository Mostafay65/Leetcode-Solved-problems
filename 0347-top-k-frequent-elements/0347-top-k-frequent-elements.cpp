class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int>fre;
        for (int i = 0; i < nums.size(); ++i) {
            fre[nums[i]]++;
        }
        vector<pair<int,int>>ans;
        for(auto ele:fre){
            ans.push_back({ele.second, ele.first});
        }
        sort(ans.begin(),ans.end());
        while (ans.size()>k)ans.erase(ans.begin());
        vector<int>anss;
        for (int i = 0; i < ans.size(); ++i) {
            anss.push_back(ans[i].second);
        }
        return anss;
    }
};