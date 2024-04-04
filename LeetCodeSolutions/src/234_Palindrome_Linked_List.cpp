// 234_Palindrome_Linked_List
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
    bool isPalindrome(ListNode* head)
    {
        if (head == nullptr)
        {
            return false;
        }

        ListNode* middle = head;
        ListNode* mNext = nullptr;
        ListNode* temp = nullptr;

        int i = 0;
        while (head != nullptr)
        {

            head = head->next;

            if (i % 2 == 0)
            {
                mNext = middle->next;
                middle->next = temp;
                temp = middle;
                middle = mNext;
            }
            i++;

        }

        if (i % 2 == 1)
        {
            temp = temp->next;
        }

        while (temp != nullptr && middle != nullptr)
        {
            if (temp->val != middle->val)
            {
                return false;
            }
            temp = temp->next;
            middle = middle->next;
        }

        return true;
    }
};