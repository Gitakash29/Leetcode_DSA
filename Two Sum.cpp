class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++)
        {
            int X = nums[i];
            int Y = target - X;
            if(mpp.find(Y) != mpp.end())
            {
                ans.push_back(mpp[Y]);
                ans.push_back(i);
                return ans;
                
                
            }
            else{
                mpp[X]=i;
            }
        }
        return {-1,-1};
    }
};
