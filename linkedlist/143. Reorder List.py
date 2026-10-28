# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverse(self, head: ListNode | None) -> ListNode | None:
        prev = None
        dummy = None
        curr = head

        while curr != None:
             dummy = curr.next
             curr.next = prev
             prev =curr
             curr = dummy

        return prev
    def reorderList(self, head: ListNode | None) -> None:
        slow = head
        fast = head
        while fast != None and fast.next != None :
            slow = slow.next
            fast = fast.next.next
         
        prev = self.reverse(slow)
        curr = head 
        dummy = None
        duumy = None
        while prev.next != None :
            dummy = curr.next
            duumy = prev.next 
            curr.next = prev 
            prev.next = dummy
            curr = dummy
            prev = duumy
    
        