# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    # method 1
    def getDecimalValue(self, head: ListNode) -> int:
        # store the value to stack and convert the
        # stack value to int
        st = list()
        n = head
        while n is not None:
            st.append(n.val)
            n = n.next
        
        binVal = "".join([str(x) for x in st])
        return int(binVal, 2)
    
    # method 2
    def getDecimalValue(self, head: ListNode) -> int:
        # create a temporary return value
        retval = 0
        while head is not None:
            retval <<= 1
            retval += head.val
            head = head.next
        
        return retval