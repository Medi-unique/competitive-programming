
class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        ListNode* dummy = new ListNode(INT_MIN);
        while (head) {
            ListNode* next = head->next;
            insertNode(dummy, head);
            head = next;
        }

        return dummy->next;
    }

private:
    void insertNode(ListNode* head, ListNode* node) {
        if (!head) return head = node;
        ListNode* prev = head;
        ListNode* curr = head->next;
        while (curr && curr->val < node) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = node;
        node->next = curr;
    }
};
