# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def isPalindrome(self, head: ListNode | None) -> bool:
        new = None
        slow = head 
        fast = head
        prev = None
        dummy = None
        while fast != None and fast.next != None :
            slow = slow .next
            fast = fast .next.next

        new = slow

        while new != None:
            dummy = new.next
            new.next = prev
            prev = new
            new = dummy

        curr = head

        while prev != None :
            if curr.val == prev.val :
                curr = curr.next
                prev = prev.next
            else :
                return False 
        return True 
             

            
        