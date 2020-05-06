#include "ListNode.h"
#include "Solution.h"
#include "Solution1.h"
#include "Solution2.h"

int main() {
    int nums[] = { 1,2,6,4,5,6 };
    ListNode* head = new ListNode(nums, 6);
    head->print();
    ListNode* res = Solution().removeElements(head, 6);
    res->print();
    ListNode* head2 = new ListNode(nums, 6);
    head2->print();
    ListNode* res2 = Solution1().removeElements(head, 6);
    res2->print();
    ListNode* head3 = new ListNode(nums, 6);
    head3->print();
    ListNode* res3 = Solution2().removeElements(head, 6);
    res3->print();

    return 0;
}
