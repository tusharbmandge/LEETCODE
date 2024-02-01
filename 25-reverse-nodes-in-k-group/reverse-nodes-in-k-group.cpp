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
    ListNode* reverse_list(ListNode* head, int k,int repetations)
    {

        int count=0;
        ListNode* temp=head;
        ListNode* next_node;
        ListNode* previous=NULL;
        while(count<k && temp!=NULL)
        {
            next_node=temp->next;
            temp->next=previous;
            previous=temp;
            temp=next_node;
            count++;
        }
        if(repetations==1)
        {
            head->next=temp;
        }
        else
        {
            head->next=reverse_list(temp, k, repetations-1);
        }
        return previous;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode* temp1=head;

        while(temp1!=NULL)
        {
            count++;
            temp1=temp1->next;
        }
        int repetations=count/k;
        if(count<k)
        {
            return head;
        }
        else
        {
            return reverse_list(head, k, repetations);
        }

    }
};