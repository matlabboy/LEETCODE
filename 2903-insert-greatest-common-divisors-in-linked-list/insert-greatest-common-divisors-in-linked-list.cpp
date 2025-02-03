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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode *temp = head;
        ListNode *temp1 = temp -> next;
        while(temp1 != nullptr){
            int y = temp -> val;
            int x = temp1 ->val;
            int p = gcd(x,y);
            ListNode* nude = new ListNode(p);
            temp -> next = nude;
            nude ->next = temp1;
            temp = temp1;
            temp1 = temp1 -> next;
        }
        return head;
    }
};