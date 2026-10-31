class Solution:
    def oddEvenList(self, head: ListNode | None) -> ListNode | None:
        if head == None or head.next == None:
            return head

        temp = head.next
        curr = head
        prev = temp

        while prev != None and prev.next != None:
            curr.next = prev.next
            curr = curr.next

            prev.next = curr.next
            prev = prev.next

        curr.next = temp

        return head