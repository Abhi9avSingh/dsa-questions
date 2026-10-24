# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: ListNode | None, n: int) -> ListNode | None:
        count = 0
        curr = head

        while curr:
            count += 1
            curr = curr.next

        a = count - n

        if a == 0:
            return head.next

        curr = head
        pos = 1

        while curr:
            if pos == a:
                curr.next = curr.next.next
                break
            else:
                curr = curr.next
                pos += 1

        return head


