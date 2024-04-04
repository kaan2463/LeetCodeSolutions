namespace _1721_Swapping_Nodes_in_a_Linked_List
{
#include<solution.h>

    // 1721_Swapping_Nodes_in_a_Linked_List
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
        ListNode* swapNodes(ListNode* head, int k)
        {

            k = k - 1;

            if (head == nullptr)
            {
                return head;
            }

            ListNode* current = head;

            int size = 0;
            ListNode* backNode = head;
            ListNode* frontNode = nullptr;

            while (current != nullptr)
            {

                if (size == k)
                {
                    frontNode = current;
                }

                if (size - k > 0)
                {
                    backNode = backNode->next;
                }

                current = current->next;
                size++;
            }

            if (backNode != nullptr && frontNode != nullptr)
            {
                int val = backNode->val;
                backNode->val = frontNode->val;
                frontNode->val = val;
            }

            return head;
        }
    };

}