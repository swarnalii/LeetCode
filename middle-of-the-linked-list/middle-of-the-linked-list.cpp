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
    ListNode* middleNode(ListNode* head) {
        ListNode *temp = head;
        int n = 0;
        while(temp != NULL){
            n++;
            temp = temp -> next;
        }
        int m = n/2 + 1;
        for(int i=0; i<m-1;i++){
            head = head -> next;
        }
        return head;
    }
    // time complexity is O(n)+O(n/2)
};
