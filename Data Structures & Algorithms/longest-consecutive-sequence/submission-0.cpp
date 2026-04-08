class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        sort(nums.begin(), nums.end());
        int maxLen = 1; 
        int cnt = 1;

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1]) {
                // skip duplicates
                continue;
            } else if (nums[i] == nums[i - 1] + 1) {
                // consecutive
                cnt++;
            } else {
                // sequence broken
                maxLen = max(maxLen, cnt);
                cnt = 1; // reset count
            }
        }

        maxLen = max(maxLen, cnt); // check last sequence
        return maxLen;
    }
};