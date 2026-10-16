// Problem: Merge Two Sorted Lists
// Platform: LeetCode
// Link: https://leetcode.com/problems/merge-two-sorted-lists/
// Time Complexity: O(n + m) - where n and m are lengths of list1 and list2
// Space Complexity: O(1) - rearranging pointers, no new nodes created


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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) 
    {
        ListNode dummy;

        ListNode* tail = &dummy;

        while(list1 != nullptr && list2 != nullptr)
        {
            if(list1->val <= list2->val)
            {
                tail->next = list1;  // list1 ki value gayi tail ke next me
                list1 = list1->next; // list1 ko aage badhaya
            }
            else
            {
                tail->next = list2;  // list2 ki value gayi tail ke next me
                list2 = list2->next; // list2 ko aage badhaya
            } 
            tail = tail->next;  // tail ko aage badha do
        }


        if(list1 != nullptr)  // agar koi list ke elements baccche hue hai
        {
            tail->next = list1;
        }
        else
        {
            tail->next = list2;
        }

        return dummy.next;  // dummy ke next wale se return kardo list.
    }
};