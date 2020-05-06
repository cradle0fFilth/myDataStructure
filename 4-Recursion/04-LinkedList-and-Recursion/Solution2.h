#pragma once
#include"ListNode.h"
class Solution2 {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if (head == NULL)
            return NULL;
        head->next = removeElements(head->next, val);
        if (head->val == val)
        {
            return head->next;
        }
        else
        {
            return head;
        }
        //return head->val==val?head->next:head;
    }
};
