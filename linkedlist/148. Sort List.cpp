# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def sortList(self, head: ListNode | None) -> ListNode | None:

    #     prev = None 
    #     curr = head 
       
    #    while :
    #        if curr.val >curr.next.val :
    #         new = None 
    #         new = curr.next.next 
    #         curr.next = curr
    #         prev.next = curr.next
    #         curr.next = new
        new = []
        curr = head
        while curr != None :
             new.append(curr.val)
             curr = curr.next
        new.sort()
        curr = head
        for i in new :
            curr.val = i
            curr = curr.next
        return head 

