# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reverse ( self, head : ListNode | None , x : int )-> ListNode | None:
        curr = head 
        prev = None 
        dummy = None
        i =0 
        while curr != None and i < x :
            dummy = curr.next
            curr.next = prev 
            prev = curr
            curr = dummy 
            i += 1 
        return prev

    def reverseEvenLengthGroups(self, head: ListNode | None) -> ListNode | None:
        if head == None:
             return head
        prev = head
        temp1 = None
        curr = head.next
        rev = None
        temp = curr
        
        while curr != None :
            i=k
            temp = curr
            while i !=0 and curr!=None :
                curr = curr.next
                i -= 1
                 
             
            rev = self.reverse(temp,k)
            prev.next = rev
            prev = temp
            temp.next = curr
             
        return head

            
            
           


            

            
             

    
        
            
        