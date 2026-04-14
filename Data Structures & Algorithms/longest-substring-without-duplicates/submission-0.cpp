class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int res = 0;

        for (int i = 0; i < n; i++) {
            unordered_set<char> charSet;
            for (int j = i; j < n; j++) {
                if (charSet.count(s[j])) break;
                charSet.insert(s[j]);
                res = max(res, j - i + 1);
            }
        }
        return res;
    }
};