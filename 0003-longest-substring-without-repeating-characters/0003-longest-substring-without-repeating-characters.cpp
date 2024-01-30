class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    unordered_set<char> sub;
    int i = 0, j = 0, ans = 0;
    while (j < s.size()) {
        if (sub.find(s[j]) == sub.end()) {
            sub.insert(s[j++]);
            ans = max(ans, (int)sub.size());
        } else {
            sub.erase(s[i++]);
        }
    }
    return ans;
}
};