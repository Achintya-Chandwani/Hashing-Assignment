// code
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0) return 0;
        if(n==1) return 1;
        int len=1;
        int maxlen=0;
        for(int i=1;i<n;i++){
            if(nums[i]==(nums[i-1]+1)) len++;
            else if(nums[i]==nums[i-1]);
            else len=1;
            maxlen=max(maxlen,len);
        }
        return maxlen;
    }
};
// time complexity-O(nlogn)
// space complexity-O(1)
