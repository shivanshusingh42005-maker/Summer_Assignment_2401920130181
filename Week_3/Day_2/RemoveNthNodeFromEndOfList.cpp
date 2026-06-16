/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(next) {}
 * };
 */

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int count = 0;
        ListNode* temp = head;

        // Count total nodes
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }

        // If we need to remove the first node
        if (count == n) {
            return head->next;
        }

        int steps = count - n;
        temp = head;

        // Move to the node before the one to remove
        for (int i = 1; i < steps; i++) {
            temp = temp->next;
        }

        temp->next = temp->next->next;

        return head;
    }
};
