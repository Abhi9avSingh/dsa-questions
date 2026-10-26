# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def middleNode(self, head: ListNode | None) -> ListNode | None :
        slow = head 
        fast = head 
        while fast != None and fast.next != None :
            fast = fast.next.next
            slow = slow.next 
        return slow 
            