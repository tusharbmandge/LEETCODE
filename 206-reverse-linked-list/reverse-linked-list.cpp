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
    ListNode* reverse(ListNode* start, ListNode* end){
        if(start==NULL)
        {
            return end;
        }
        ListNode* temp=start->next;
        start->next=end;
        end=start;
        start=temp;
        return reverse(start,end);
    }
    ListNode* reverseList(ListNode* head) {
        ListNode* start=head;
        ListNode* end=NULL;
        ListNode* ans= reverse(start, end);
        return ans;
    }


};