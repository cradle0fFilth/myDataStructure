#pragma once
#include"ListNode.h"
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* dummyHead = new ListNode(-1);
        dummyHead->next = head;
        ListNode* pre = dummyHead;
        while (pre->next != nullptr)
        {
            if (pre->next->val == val)
            {
                pre->next = pre->next->next;
            }
            else
                pre = pre->next;
        }
        return dummyHead->next;
    }
};
