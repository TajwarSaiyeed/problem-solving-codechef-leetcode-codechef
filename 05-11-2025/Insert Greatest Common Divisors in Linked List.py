import math
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def insertGreatestCommonDivisors(self, head: Optional[ListNode]) -> Optional[ListNode]:
        tmp = head
        arr = [tmp.val]
        tmp = tmp.next
        i = 0
        while tmp:
            x = tmp.val
            arr.append(math.gcd(arr[i], x))
            arr.append(tmp.val)
            tmp = tmp.next
            i+=2

        x = ListNode(-1)
        cp = x
        for i in range(len(arr)):
            new_node = ListNode(arr[i])
            cp.next = new_node
            cp = new_node
        

        return x.next