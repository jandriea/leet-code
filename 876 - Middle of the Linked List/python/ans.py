# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        ptrA = head
        ptrB = head
        while ptrB :
            if ptrB.next == None:
                return ptrA
            else:
                ptrA = ptrA.next
                ptrB = ptrB.next.next
        return ptrA
        