# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def reverse(self, head: ListNode | None) -> ListNode | None:
        prev = None
        dummy = None
        curr = head

        while curr is not None:
            dummy = curr.next
            curr.next = prev
            prev = curr
            curr = dummy

        return prev

    def num(self, head: ListNode | None) -> int:
        curr = self.reverse(head)
        res = 0

        while curr is not None:
            res = res * 10 + curr.val
            curr = curr.next

        return res

    def addTwoNumbers(self, l1: ListNode | None, l2: ListNode | None) -> ListNode | None:
        dummyHead = ListNode(0)
        dummy = dummyHead

        num1 = self.num(l1)
        num2 = self.num(l2)

        num3 = num1 + num2

        if num3 == 0:
            return dummyHead

        while num3 != 0:
            add = num3 % 10
            dummy.next = ListNode(add)
            dummy = dummy.nex
            num3 //= 10

        return dummyHead.next
