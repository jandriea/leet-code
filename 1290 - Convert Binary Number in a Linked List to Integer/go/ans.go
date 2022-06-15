/**
 * Definition for singly-linked list.
 * type ListNode struct {
 *     Val int
 *     Next *ListNode
 * }
 */
 // method 1
 func getDecimalValue(head *ListNode) int {
    ptr := head
	var st []int
	for ptr != nil {
		st = append(st, ptr.Val)
		ptr = ptr.Next
	}

	ret := 0
	for _, x := range st {
		ret <<= 1
		ret += x
	}

	return ret
}
 // method 2
func getDecimalValue(head *ListNode) int {
    ptr := head
	ret := 0
	for ptr != nil {
		ret <<= 1
		ret += ptr.Val
		ptr = ptr.Next
	}

	return ret
}