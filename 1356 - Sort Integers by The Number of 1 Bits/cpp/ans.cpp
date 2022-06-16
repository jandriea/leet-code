class Solution {
public:
    int hammingWeight(int x) {
        int ret = 0;
        while (x > 0){
            ret += 1 * (x & 0x01);
            x >>= 1;
        }
        return ret;
    }
    vector<int> sortByBits(vector<int>& arr) {
        std::map<int, vector<int>> order;
        vector<int> ret;
        // store the value into hashmap
        for(auto x: arr) {
            int val = hammingWeight(x);
            order[val].push_back(x);
        }
        // keys is already sorted
        // only need to sort the value
        for (auto t = order.begin(); t != order.end(); t++){
            sort(t->second.begin(), t->second.end());
            ret.insert(ret.end(), t->second.begin(), t->second.end());
        }
        
        return ret;
    }
};