# # Definition for singly-linked list.
# # class ListNode:
# #     def __init__(self, val=0, next=None):
# #         self.val = val
# #         self.next = next
# class Solution:
#     def reverse(self, head: ListNode | None, k: int) -> ListNode | None:
#         dummy = None 
#         curr = head 
#         prev = None 
#         while k>0 and curr != None :
#             dummy = curr.next
#             curr.next = prev 
#             prev = curr
#             curr = dummy 
#             k -= 1
#         return prev


#     def reverseKGroup(self, head: ListNode | None, k: int) -> ListNode | None:
#         # if head == None or k == 1:
#         #     return head
#         # curr = head
         
#         # # while i <k:
#         # #     head = curr
#         # #     curr = curr.next
#         # #     i += 1
#         # # curr = head
         
#         # while curr != None :
           
            
#         #         temp1 = curr
                
#         #     elif i%k == 0:
#         #         temp2 = self.reverse(temp1,k)
#         #         temp1.next = curr
#         #         temp1 = curr                   
#         #     i +=1 
#         #     curr = curr.next           
#         # return head
       
class Solution:
    def reverse(self, head: ListNode | None, k: int) -> ListNode | None:
        dummy = None
        curr = head
        prev = None

        while k > 0 and curr != None:
            dummy = curr.next
            curr.next = prev
            prev = curr
            curr = dummy
            k -= 1

        return prev

    def reverseKGroup(self, head: ListNode | None, k: int) -> ListNode | None:
        if head == None or k == 1:
            return head

        curr = head
        new_head = None
        prev_tail = None

        while curr != None:
            temp1 = curr
            count = 0

            while count < k and curr != None:
                curr = curr.next
                count += 1

            if count < k:
                if prev_tail != None:
                    prev_tail.next = temp1
                break

            temp2 = self.reverse(temp1, k)

            if new_head == None:
                new_head = temp2
            else:
                prev_tail.next = temp2

            prev_tail = temp1

        return new_head if new_head != None else head
        # --------------------------- my approach ------------------------------------

        class Solution:
    def reverse(self, head: ListNode | None, x: int) -> ListNode | None:
        curr = head
        prev = None
        dummy = None
        i = 0

        while curr != None and i < x:
            dummy = curr.next
            curr.next = prev
            prev = curr
            curr = dummy
            i += 1

        return prev

    def reverseKGroup(self, head: ListNode | None, k: int) -> ListNode | None:
        if head == None or k == 1:
            return head

        prev = None
        curr = head
        temp = curr
        curr1 = curr
 
        i = k
        while curr1 != None and i > 1:
            curr1 = curr1.next
            i -= 1

        if curr1 == None:
            return head

        head = curr1
 
        while curr != None:
            i = k
            temp = curr
            count = 0

            while i != 0 and curr != None:
                curr = curr.next
                count += 1
                i -= 1

            if count < k:
                break

            rev = self.reverse(temp, k)

            if prev != None:
                prev.next = rev

            prev = temp
            temp.next = curr

        return head