class Solution:
    def mergeTwoLists(self, list1: ListNode | None, list2: ListNode | None) -> ListNode | None:
        dummy = ListNode(0)
        curr = dummy

        while list1 is not None and list2 is not None:
            if list1.val < list2.val:
                curr.next = list1
                list1 = list1.next
            else:
                curr.next = list2
                list2 = list2.next

            curr = curr.next

        if list1 is not None:
            curr.next = list1
        else:
            curr.next = list2

        return dummy.next