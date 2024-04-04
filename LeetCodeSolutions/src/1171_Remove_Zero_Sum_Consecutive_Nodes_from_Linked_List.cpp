// 1171_Remove_Zero_Sum_Consecutive_Nodes_from_Linked_List
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
    ListNode* removeZeroSumSublists(ListNode* head)
    {
        map<int, vector<ListNode*>> mInt;

        int sum = 0;

        ListNode* prev = 0;
        for (ListNode* temp = head; temp != 0; temp = temp = temp->next)
        {

            if (temp->val == 0)
            {
                if (prev != 0)
                {
                    prev->next = temp->next;
                }
                else
                {
                    head = temp->next;
                }
                continue;
            }

            sum += temp->val;

            if (sum == 0)
            {
                return removeZeroSumSublists(temp->next);
            }

            mInt[sum].push_back(temp);
            prev = temp;
        }

        if (sum == 0)
        {
            return 0;
        }

        bool hasPair = false;
        for (auto pair : mInt)
        {
            if (pair.second.size() > 1)
            {
                pair.second[0]->next = pair.second[pair.second.size() - 1]->next;
                hasPair = true;
            }
        }

        if (!hasPair)
        {
            return head;
        }

        return removeZeroSumSublists(head);
    }
};