class Solution:
    def getIntersectionNode(self, headA: ListNode, headB: ListNode) -> ListNode:


        pA = headA
        pB = headB

        while pA != pB:
            if pA == None:
                pA = headB
            else:
                pA = pA.next

            if pB == None:
                pB = headA
            else:
                pB = pB.next

        return pA