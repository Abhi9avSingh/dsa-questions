# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def partition(self, head: ListNode | None, x: int) -> ListNode | None:
        if head == None:
            return head
        curr = head 
        temp = head
        temp1 = None
        prev = None
        i = 0
        j = 0
        while curr != None :
            dummy = curr.next
            curr.next = None
          
            if curr.val>=x and j == 0:
                temp1 = curr
                j+=1
                prev = curr
            elif curr.val < x and i == 0 :
                temp = curr
                i += 1
                head = temp
            elif curr.val < x and i ==1 :
                temp.next = curr 
                temp = curr 
            else :
                prev.next = curr
                prev = curr
            
            curr = dummy
        
        if i == 0:
            return temp1
        temp.next = temp1
        return head 
