// 206_Reverse_Linked_List
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
    ListNode* reverseList(ListNode* head)
    {
        if (head == nullptr)
        {
            return nullptr;
        }

        ListNode* prev = nullptr;
        ListNode* current = head;
        ListNode* next = head->next;

        while (next != nullptr)
        {

            current->next = prev;
            prev = current;
            current = next;
            next = next->next;
        }

        current->next = prev;

        return current;
    }
};