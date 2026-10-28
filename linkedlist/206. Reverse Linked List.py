# // # Definition for singly-linked list.
# // # class ListNode:
# // #     def __init__(self, val=0, next=None):
# // #         self.val = val
# // #         self.next = next
class Solution:
    def reverseList(self, head: ListNode | None) -> ListNode | None:
        dummy = None
        prev = None
        curr = head 
        while curr != None :
            dummy = curr.next
            curr.next = prev
            prev = curr
            curr = dummy
        return prev
            
