# // # Definition for singly-linked list.
# // # class ListNode:
# // #     def __init__(self, val=0, next=None):
# // #         self.val = val
# // #         self.next = next
class Solution:
    def reverse(self, head : ListNode | None, limit: int)-> ListNode | None:
        curr = head
        prev = None
        dummy = None 
        while  limit > 0 and curr != None :
            dummy = curr.next
            curr.next = prev
            prev = curr 
            curr = dummy 
            limit -= 1
        return prev
    def reverseBetween(self, head: ListNode | None, left: int, right: int) -> ListNode | None:
        if left == right :
            return head
        limit = right -left  +1
        curr = head 
        pos =1
        temp1 = None
        while pos < left :
            temp1 = curr
            curr = curr.next
            pos += 1
        
        tempp = curr
        pos = 0
        while pos < limit :
            curr = curr.next
            pos += 1
        temp2 = curr
        temp3 = self.reverse(tempp,limit)
         
         
        if temp1!= None :
            temp1.next = temp3
        else : 
            head = temp3
        tempp.next = temp2
        return head
            


         


        