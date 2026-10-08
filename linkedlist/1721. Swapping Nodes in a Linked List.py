class Solution:
    def swapNodes(self, head: Optional[ListNode], k: int) -> Optional[ListNode]:
        dummy = ListNode(0)
        dummy.next = head

        curr = head
        n = 0

        while curr is not None:
            n += 1
            curr = curr.next

        if k == n - k + 1:
            return head

        prev1 = dummy
        curr1 = head

        a = 1
        while a != k:
            prev1 = curr1
            curr1 = curr1.next
            a += 1

        prev2 = dummy
        curr2 = head

        b = 1
        target = n - k + 1

        while b != target:
            prev2 = curr2
            curr2 = curr2.next
            b += 1

        Next1 = curr1.next
        Next2 = curr2.next

        if curr1.next == curr2:
            prev1.next = curr2
            curr2.next = curr1
            curr1.next = Next2

        elif curr2.next == curr1:
            prev2.next = curr1
            curr1.next = curr2
            curr2.next = Next1

        else:
            prev1.next = curr2
            curr2.next = Next1

            prev2.next = curr1
            curr1.next = Next2

        return dummy.next