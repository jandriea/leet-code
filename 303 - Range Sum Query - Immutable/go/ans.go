// Method 1
type NumArray struct {
    Nums []int
}


func Constructor(nums []int) NumArray {
    return NumArray{Nums: nums}
}


func (this *NumArray) SumRange(left int, right int) int {
    sums := 0
    for i := left; i <= right; i++ {
        sums += this.Nums[i]
    }
    return sums
}

// Method 2
type NumArray struct {
    Sums []int
}


func Constructor(nums []int) NumArray {
    sums := []int{}
    current_sum := 0
    for _, num := range nums {
        current_sum += num
        sums = append(sums, current_sum)
    }
    return NumArray{Sums: sums}
}


func (this *NumArray) SumRange(left int, right int) int {
    if left == 0 {
        return this.Sums[right]
    } else {
        return this.Sums[right] - this.Sums[left - 1]
    }
}


/**
 * Your NumArray object will be instantiated and called as such:
 * obj := Constructor(nums);
 * param_1 := obj.SumRange(left,right);
 */