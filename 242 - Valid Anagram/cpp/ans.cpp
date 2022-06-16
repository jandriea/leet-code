class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> m1;
        unordered_map<char, int> m2;
        for (int i = 0; i < s.size(); i++) {
            if (m1.find(s[i]) == m1.end()) {
                m1[s[i]] = 1;
            } else {
                m1[s[i]]++;
            }
            if (m2.find(t[i]) == m2.end()) {
                m2[t[i]] = 1;
            } else {
                m2[t[i]]++;
            }
        }
        
        return m1 == m2;
    }
};