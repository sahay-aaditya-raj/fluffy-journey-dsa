/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* ret = nullptr;
        ListNode* cur = head;

        while (cur) {
            ListNode* temp = cur->next;
            cur->next = ret;
            ret = cur;
            cur = temp;
        }

        return ret;
    }
};