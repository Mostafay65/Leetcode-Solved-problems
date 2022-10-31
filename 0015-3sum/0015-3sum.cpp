class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    map<vector<int>,bool>tri;
    for(int i=0;i<nums.size()-1;i++){
        if (i and nums[i]==nums[i-1])continue;
        int l=i+1,r=nums.size()-1;
        while (l<r){
            int threeSum=nums[i]+nums[l]+nums[r];
            if (threeSum>0)r--;
            else if (threeSum<0)l++;
            else {
                ans.push_back({nums[i],nums[l],nums[r]});
                l++;
                while (l<r and nums[l]==nums[l-1])l++;
            }
        }

    }
    return ans;
}
};