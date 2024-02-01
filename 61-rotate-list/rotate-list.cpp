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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        int count=1;
        if(head==NULL)
        {
            return NULL;
        }
        if(k==0)
        {
            return head;
        }
        while(temp->next!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(count==1)
        {
            return head;
        }
        temp->next=head;
        k=k%count;
        count=count-k;
        k=0;
        while(temp!=NULL)
        {
            if (k==count)
            {
                head=temp->next;
                temp->next=NULL; 
                break;
            }
            temp=temp->next;
            k++;
        }
        return head;
    }
};