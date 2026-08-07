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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* res = new ListNode(0);
        auto temp = res;
        auto cur1 = list1;
        auto cur2 = list2;
        while(cur1 && cur2){
            if(cur1->val<cur2->val){
                temp->next = cur1;
                cur1 = cur1->next;
            } else {
                temp->next = cur2;
                cur2 = cur2->next;
            }
            temp = temp->next;
        }
        while(cur1){
            temp->next = cur1;
            cur1 = cur1->next;
            temp = temp->next;
        }
        while(cur2){
            temp->next = cur2;
            cur2 = cur2->next;
            temp = temp->next;
        }
        temp->next = nullptr;
        return res->next;

    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        if(n == 0) return nullptr;

        while(n > 1){
            vector<ListNode*> merged;

            for(int i = 0; i < n; i += 2){
                if(i + 1 < n)
                    merged.push_back(mergeTwoLists(lists[i], lists[i+1]));
                else
                    merged.push_back(lists[i]);
            }

            lists = merged;
            n = lists.size();
        }

        return lists[0];
    }
};