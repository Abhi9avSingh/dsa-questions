# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def deleteDuplicates(self, head: ListNode | None) -> ListNode | None:
        mp = {}
        curr = head

        while curr != None:
            mp[curr.val] = mp.get(curr.val, 0) + 1
            curr = curr.next
        dummy = ListNode(0,head)
        curr = head 
        prev = dummy 
        while curr != None :
            if mp[curr.val] > 1 :
                prev.next = curr.next
                curr = curr.next
            else :
                prev = curr
                curr = curr.next
        return dummy.next