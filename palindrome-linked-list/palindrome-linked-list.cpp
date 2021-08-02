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
    bool isPalindrome(ListNode* head) {
        if(head==NULL or head->next==NULL)
            return true;
       ListNode *slow = head, *fast = head;
        //finding the middle of the linked list
        while(fast->next != NULL and fast->next->next != NULL){
            slow = slow->next;
            fast=fast->next->next;
        }
        //reversing the right half so that we can compare
        //it with the left half
        slow->next=reverseList(slow->next);
        //pointing it to the right half
        slow=slow->next;
        //comparing the values of both the halves
        while(slow!=NULL){
            if(head->val != slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
        //time complexity is O(3n/2)
    }
    ListNode* reverseList(ListNode* head) {
        ListNode *newHead = NULL;
        while(head != NULL){
            ListNode *next = head -> next;
            head -> next = newHead;
            newHead = head;
            head = next;
        }
        return newHead;
    }
};