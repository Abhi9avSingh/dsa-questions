class Solution:
    def detectCycle(self, head: Optional[ListNode]) -> Optional[ListNode]:
        if head == None or head.next == None :
            return None 
        fast = head 
        slow = head 
        while fast != None and fast.next != None :
            slow = slow.next
            fast = fast.next.next
            if fast == slow :
                slow = head 

                while fast != slow :
                 slow = slow.next
                 fast = fast.next
                return slow
                
        return None 
