class Solution {
public:
    // method 1, using hashmap
    bool isAlienSorted(vector<string>& words, string order) {
        // convert the order to hash map
        unordered_map<char, int> hmap;
        for (int i = 0; i < order.length(); i++) {
            hmap[order[i]] = i;
        }
        // loop through the list
        for (int i = 0; i < words.size() - 1; i++) {
            string w1 = words[i];
            string w2 = words[i+1];
            // check every character in w1 and w2
            for (int j = 0; j < w1.length(); j++) {
                if (j == w2.length()) {
                    // reaches the end of w2, that means w2 is a prefix of w1
                    return false;
                }
                if (w1[j] != w2[j]) {
                    // first different char
                    // check the value using the hashmap
                    if (hmap[w1[j]] > hmap[w2[j]]) {
                        // the current char in w1 comes after char in w2
                        return false;
                    }
                    // stop checking the current words, and start the next one 
				    break;
                }
            }
        }
        return true;
    }
    // method 2, using find
    bool isAlienSorted(vector<string>& words, string order) {
        // loop through the list
        for (int i = 0; i < words.size() - 1; i++) {
            string w1 = words[i];
            string w2 = words[i+1];
            // check every character in w1 and w2
            for (int j = 0; j < w1.length(); j++) {
                if (j == w2.length()) {
                    // reaches the end of w2, that means w2 is a prefix of w1
                    return false;
                }
                if (w1[j] != w2[j]) {
                    // first different char
                    // check the value using the hashmap
                    if (order.find(w1[j]) > order.find(w2[j])) {
                        // the current char in w1 comes after char in w2
                        return false;
                    }
                    // stop checking the current words, and start the next one 
				    break;
                }
            }
        }
        return true;
    }
};