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
    ListNode* reverseLL(ListNode* head){
        ListNode* cur = head;
        ListNode* res = nullptr;

        while(cur){
            ListNode* t = cur->next;
            cur->next = res;
            res = cur;
            cur = t;
        }
        return res;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* cur = head;
        for(int i=0; i<k-1; i++){
            if(!cur) return head;
            cur = cur->next;
        }
        if(!cur) return head;
        ListNode* temp = cur->next;
        cur->next = nullptr;
        ListNode* mynode = reverseLL(head);
        head->next = reverseKGroup(temp, k);
        return mynode;

    }
};