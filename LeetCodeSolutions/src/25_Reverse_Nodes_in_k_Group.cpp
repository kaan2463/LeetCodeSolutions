namespace _25_Reverse_Nodes_in_k_Group
{
#include<solution.h>
    // 25_Reverse_Nodes_in_k-Group
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
    class Solution
    {
    public:
        ListNode* reverseKGroup(ListNode* head, int k)
        {
            if (head == nullptr)
            {
                return nullptr;
            }
            ListNode* first = head;

            ListNode* prev = nullptr;
            ListNode* current = head;
            ListNode* next = head->next;

            int i = k;
            while (i > 1 && next != nullptr)
            {

                current->next = prev;
                prev = current;
                current = next;
                next = next->next;
                i--;
            }

            current->next = prev;

            if (i > 1)
            {
                return reverseKGroup(current, k - i + 1);
            }

            first->next = reverseKGroup(next, k);

            return current;
        }
    };

}