class Solution:
    def removeElements(self, head: ListNode | None, val: int) -> ListNode | None:
        curr = head 
        prev = None 
        while curr :
            if curr.val == val :
                if prev is None :
                    head = curr.next
                    curr = head
                else :
                    prev.next = curr.next 
                    curr = curr.next
            else :
                prev = curr 
                curr = curr.next
        return head