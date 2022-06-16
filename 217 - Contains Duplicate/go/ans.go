func containsDuplicate(nums []int) bool {
    hmap := make(map[int]bool)
    for i := range nums {
        _, ok := hmap[nums[i]]
        if ok {
            return true
        } else {
            hmap[nums[i]] = true
        }
    }
    return false
}