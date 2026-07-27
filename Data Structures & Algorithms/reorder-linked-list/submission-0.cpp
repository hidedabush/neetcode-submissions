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
    void reorderList(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head->next;

        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next -> next;
        }

        ListNode* rev = nullptr;
        while(slow != nullptr){
            ListNode* temp = slow -> next;
            slow -> next = rev;
            rev = slow;
            slow = temp;
        }
        
        while(head!=nullptr&&rev!=nullptr){
            ListNode* temp1 = head->next;
            ListNode* temp2 = rev->next;
            head -> next = rev;
            rev->next = temp1;
            head = temp1;
            rev = temp2;
        }

        
    }
};
