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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp1 = head;
        ListNode* temp2 = head;
        if (head== NULL)
        {
            return head;
        }
        while (temp1->next!=NULL)
        {
            temp1=temp1->next;
            if(temp1->val!=temp2->val)
            {
                temp2->next=temp1;
                temp2=temp2->next;
            }
            
        }
        temp2->next=NULL;

        return head;
    }
};