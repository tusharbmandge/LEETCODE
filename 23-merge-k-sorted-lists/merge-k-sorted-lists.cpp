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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head;
        if(lists.size()==0)
        {
            return NULL;
        }
        if(lists.size()==1)
        {
            return lists[0];
        }
        vector<int> ans;
        for (int i=0;i<lists.size();i++)
        {
            ListNode* temp=lists[i];
            while(temp!=NULL)
            {
                ans.push_back(temp->val);
                temp=temp->next;   
            }
        }
        if(ans.size()==0)
        {
            return NULL;
        }
        sort (ans.begin(),ans.end());
        ListNode* previous;
        for (int i=0;i<ans.size();i++)
        {
            ListNode* final_ans=new ListNode();
            final_ans->val=ans[i];
            if(i==0)
            {
                head=final_ans;   
            }
            else
            {
                previous->next=final_ans;
            }
            previous=final_ans;
        }
        previous->next=NULL;
        return head;
    }
};