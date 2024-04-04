namespace _2_Add_Two_Numbers
{
#include<solution.h>

	/**
	 * Definition for singly-linked list.
	 * public class ListNode {
	 *     int val;
	 *     ListNode next;
	 *     ListNode(int x) { val = x; }
	 * }
	 */
	class Solution
	{
		public ListNode addTwoNumbers(ListNode l1, ListNode l2)
		{

			if (l1 == null && l2 == null)
			{
				return null;
			}
			if (l1 == null)
			{
				l1 = new ListNode(0);
			}
			if (l2 == null)
			{
				l2 = new ListNode(0);
			}

			l1.val = l1.val + l2.val;
			if (l1.val / 10 > 0)
			{
				if (l1.next == null)
				{
					l1.next = new ListNode(l1.val / 10);
				}
				else
				{
					l1.next.val += l1.val / 10;
				}
			}
			l1.val = l1.val % 10;
			l1.next = addTwoNumbers(l1.next, l2.next);
			return l1;

		}
	};

} //_2_Add_Two_Numbers