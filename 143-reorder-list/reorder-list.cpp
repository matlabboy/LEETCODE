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
    ListNode* reversed(ListNode* head){
        ListNode* prev = nullptr;
        ListNode* curr = head;
        ListNode* next = nullptr;
        while(curr != nullptr){
           next = curr -> next;
           curr -> next =prev;
           prev = curr;
           curr=next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;
        ListNode *temp = head;
        while(fast != nullptr && fast -> next != nullptr){
            slow = slow -> next;
            fast = fast -> next ->next;
        }
        ListNode *hi = reversed(slow);
        while(hi->next != nullptr && hi != nullptr){
           ListNode *temp1 = temp -> next;
            temp -> next = hi;
            hi = hi->next;
            temp -> next -> next = temp1;
            temp = temp1;
        }

    }
};