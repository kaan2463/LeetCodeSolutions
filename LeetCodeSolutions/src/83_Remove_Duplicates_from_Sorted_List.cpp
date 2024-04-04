// 83_Remove_Duplicates_from_Sorted_List
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
    ListNode* deleteDuplicates(ListNode* head)
    {
        if (head == nullptr)
        {
            return head;
        }
        ListNode* newNode = head;
        int prev = head->val;
        for (ListNode* it = head->next; it != nullptr; it = it->next)
        {
            if (prev != it->val)
            {
                newNode->next = it;
                newNode = newNode->next;
                prev = it->val;
            }
        }
        newNode->next = nullptr;

        return head;
    }
};