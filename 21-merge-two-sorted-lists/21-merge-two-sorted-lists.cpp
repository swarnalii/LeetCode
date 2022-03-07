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
       ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
            if(l1 == NULL) 
                return l2;
            if(l2 == NULL)
                return l1;
           if(l1 -> val > l2-> val)
               std::swap(l1,l2);
           ListNode *head = l1;
           while(l1 != NULL and l2 != NULL){
               ListNode *temp = NULL;
               while(l1 != NULL and l1->val <= l2->val){
                   temp = l1;
                   l1=l1->next;
               }
               temp->next = l2;
               std::swap(l1,l2);
           }
           return head;
           //time complexity is O(len1+len2)
           //space somplexity is O(1), since no external space is used
       }
//     ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
//         if(l1==NULL)
//             return l2;
//         if(l2==NULL)
//             return l1;
        
//         ListNode* head=NULL;
        
//         if(l1->val < l2->val)
//         {
//             head=l1; 
//             l1=l1->next;
//         }
//         else
//         {
//             head=l2;
//             l2=l2->next;
//         }
        
//         ListNode* p= head;
        
//         while(l1&&l2)
//         {
//             if(l1->val < l2->val)
//             {
//                p->next=l1; 
//                l1=l1->next;
//             }
//             else
//             {
//                 p->next=l2; 
//                 l2=l2->next;
//             }
//             p=p->next;
//         }
        
//         if(l1)
//             p->next=l1;
//         else p->next=l2;
        
//         return head;
        //time complexity is O(len1+len2)
        //space complexity is O(len1+len2), since we are creating a seperate LL
//    }
};