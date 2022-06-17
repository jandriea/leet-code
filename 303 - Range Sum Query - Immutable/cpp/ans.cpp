// Method 1
class NumArray {
public:
    vector<int> nums;
    NumArray(vector<int>& nums) {
        this->nums = nums;
    }
    
    int sumRange(int left, int right) {
        return accumulate(std::next(this->nums.begin(), left), std::next(this->nums.begin(), right + 1), 0);
    }
};

// Method 2
class NumArray {
public:
    vector<int> sums;
    NumArray(vector<int>& nums) {
        int current_sum = 0;
        for(auto num: nums){
            current_sum += num;
            this->sums.push_back(current_sum);
        }
    }
    
    int sumRange(int left, int right) {
        if (left == 0) {
            return this->sums[right];
        } else {
            return this->sums[right] - this->sums[left - 1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */