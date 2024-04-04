// 21_Merge_Two_Sorted_Lists
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {

        if (list1 == nullptr)
        {
            return list2;
        }

        if (list2 == nullptr)
        {
            return list1;
        }

        ListNode* tNode = nullptr;

        if (list1->val < list2->val)
        {
            tNode = list1;
            tNode->next = mergeTwoLists(list1->next, list2);
        }
        else
        {
            tNode = list2;
            tNode->next = mergeTwoLists(list1, list2->next);
        }

        return tNode;
    }
};