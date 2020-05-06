#pragma once
#include"ListNode.h"
class Solution {
public:
	ListNode* removeElements(ListNode* head, int val) {
		while(head != nullptr && head->val = val)
		{
			ListNode* ret = head;
			head = head->next;
			ret->next = nullptr;
		}
		if (head == nullptr)
			return nullptr;

		ListNode* pre = head;
		ListNode* ret = head;
		while (pre->next != nullptr)
		{
			if (pre->next->val == val)
			{
				ret = pre->next;
				pre->next = ret->next;
				ret->next = nullptr;
			}
			else
				pre = pre->next;
		}
		return head;
	}
};