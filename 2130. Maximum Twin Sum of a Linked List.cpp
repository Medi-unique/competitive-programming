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
    ListNode *reverseLinkedList(ListNode *head)
    {
        if (head == NULL)
            return head;
        ListNode *pre = NULL;
        ListNode *curr = head;
        ListNode *next = NULL;
        while (curr != NULL)
        {
            next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        return pre;
    }

    int pairSum(ListNode *head)
    {
        stack<int> st;
        int ans = INT_MIN;
        ListNode *fast = head, *slow = head;
        while (fast->next->next != NULL)
        {
            st.push(slow->val);
            slow = slow->next;
            fast = fast->next->next;
        }
        st.push(slow->val);
        slow->next = reverseLinkedList(slow->next);
        slow = slow->next;
        ListNode *curr = head;
        while (slow != NULL)
        {
            ans = max(curr->val + slow->val, ans);
            slow = slow->next;
            curr = curr->next;
        }
        return ans;
    }
};
