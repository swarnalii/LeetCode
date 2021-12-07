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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int len = 1;
        while(temp -> next != NULL){
            temp = temp -> next;
            len++;
        }
        int num = 0;
        while(len--){
            num += pow(2, len) * head -> val;
            head = head -> next;
        }
        return num;
    }
};