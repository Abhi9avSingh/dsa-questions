class Solution:
    def swapPairs(self, head: ListNode | None) -> ListNode | None:
        if head == None or head.next == None:
            return head

        curr = head
        curr1 = curr.next
        ans = curr1
        ptr = None
        prev = None

        while curr != None and curr1 != None:
            ptr = curr1.next
            curr1.next = curr
            curr.next = ptr

            if prev != None:
                prev.next = curr1

            prev = curr
            curr = ptr

            if curr != None:
                curr1 = curr.next

        return ans