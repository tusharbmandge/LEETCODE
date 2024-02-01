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
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        if (list1->val<=list2->val)
        {
            list1->next=mergeTwoLists(list1->next,list2);
            return list1;
        }
        else
        {
            list2->next=mergeTwoLists(list1,list2->next);
            return list2;
        }

    }
    


};


// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         vector<int> arr;
//         if(list1==NULL){
//             return list2;
//         }
//         if(list2==NULL){
//             return list1;
//         }
//         ListNode* temp1=list1;
//         ListNode* temp2=list2;
//         while(list1!=NULL || list2!=NULL){
//             if(list1==NULL){
//                 arr.push_back(list2->val);
//                 list2=list2->next;
//                 continue;
//             }
//             if(list2==NULL){
//                 arr.push_back(list1->val);
//                 list1=list1->next;
//                 continue;
//             }
//             if(list1->val>list2->val){
//                 arr.push_back(list2->val);
//                 list2=list2->next;
//             }else{
//                 arr.push_back(list1->val);
//                 list1=list1->next;
//             }
//         }

//         for(int i=0;i<arr.size();i++){
//             cout<<arr[i]<<" ";
//         }

//         list1=temp1;
//         list2=temp2;
//         int i=0;
//         while(temp1!=NULL){
//             temp1->val=arr[i];
//             i++;
//             temp1=temp1->next;
//         }
//         while(temp2!=NULL){
//             temp2->val=arr[i];
//             i++;
//             temp2=temp2->next;
//         }
//         temp1=list1;
//         while(temp1->next!=NULL){
//             temp1=temp1->next;
//         }
//         temp1->next=list2;
//         return list1;
//     }
// };