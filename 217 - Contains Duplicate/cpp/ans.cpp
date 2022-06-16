class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, bool> m;
        for(auto x: nums) {
            if (m.find(x) == m.end()) {
                m[x] = true;
            } else {
                return true;
            }
        }
        return false;
    }
};