# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def rotateRight(self, head: ListNode | None, k: int) -> ListNode | None:
        if head == None or head.next == None:
            return head

        old_head = head
        curr = head 
        n =0 
        last = None
        while curr != None :
            n+=1
            last = curr
            curr = curr.next
        i = k%n
        if i == 0:
            return head
        curr = head 
        prev = None
        steps = n - i

        while steps > 0:
            prev = curr
            curr = curr.next
            steps -= 1

        prev.next = None
        last.next = old_head
        head = curr

        return head

            
        

        