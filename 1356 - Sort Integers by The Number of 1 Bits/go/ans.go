import "sort"

func count1Bits(value int) int {
    ret := 0
    for value > 0 {
        ret += 1 * (value & 0x01)
        value >>= 1
    }
    
    return ret
}
func sortByBits(arr []int) []int {
    hmap := make(map[int][]int)
    for _, x := range arr {
        val := count1Bits(x)
        hmap[val] = append(hmap[val], x)
    }
    // get the keys and sort
    keys := make([]int, len(hmap))
    i := 0
    for k := range hmap {
        keys[i] = k
        // sort hmap[k]
        sort.Ints(hmap[k])
        i++
    }
    sort.Ints(keys)
    // append sorted value to the return value
    ret := []int{}
    for _, k := range keys {
        ret = append(ret, hmap[k]...)
    }
    
    return ret
}