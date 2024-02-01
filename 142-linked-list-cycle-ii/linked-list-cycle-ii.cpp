/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode* ,bool >mp;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if (mp[temp]==NULL)
            {
                mp[temp]=true;
            }
            else
            {
                return temp;
            }
            temp=temp->next;
        }
        return NULL;
    }
};