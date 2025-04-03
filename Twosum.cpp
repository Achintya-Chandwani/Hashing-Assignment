// code
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]=i;
        }
        vector<int> ans;
        for(int i=0;i<n;i++){
            int k=target-nums[i];
            if(mpp.find(k)!=mpp.end() && mpp[k]!=i) return {i,mpp[k]};
        }
        return ans;
    }
};
// time complexity-O(n)
// space complexity-O(n)
