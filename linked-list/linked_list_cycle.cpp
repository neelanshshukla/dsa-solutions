// Problem: Linked List Cycle
// Platform: LeetCode
// Link: https://leetcode.com/problems/linked-list-cycle/
// Approach: Floyd's Cycle Detection (Tortoise and Hare)
// Time Complexity: O(n) - Fast pointer traverses the list at most twice.
// Space Complexity: O(1) - Only using two pointers (slow and fast).

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) 
    {
        // do pointers head se start karke
        ListNode* slow = head;
        ListNode* fast = head;

        // jab taak fast waala end pe na a jaye
        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;  

            if(slow == fast)
            {
                return true;  // agar overlap hogaye toh true
            }
        }
        return false; // agar kahi nahi mile ya end agayaa toh false
    }
};