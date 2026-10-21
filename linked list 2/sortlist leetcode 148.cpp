
class Solution {
public:
    ListNode* merge(ListNode* h1, ListNode* h2) {
        ListNode* h = new ListNode(0);   // dummy node
        ListNode* t = h;

        while (h1 != NULL && h2 != NULL) {
            if (h1->val < h2->val) {
                t->next = h1;
                h1 = h1->next;
            } else {
                t->next = h2;
                h2 = h2->next;
            }
            t = t->next;
        }

        if (h1 != NULL) t->next = h1;
        else t->next = h2;

        return h->next;
    }

    ListNode* sortList(ListNode* head) {
        // 1. base case: empty or one node is already sorted
        if (head == NULL || head->next == NULL) return head;

        // 2. find the end of the first half
        ListNode* s = head;
        ListNode* f = head->next;
        while (f != NULL && f->next != NULL) {
            s = s->next;
            f = f->next->next;
        }

        // 3. cut the list into two halves
        ListNode* second = s->next;
        s->next = NULL;

        // 4. sort each half
        ListNode* left = sortList(head);
        ListNode* right = sortList(second);

        // 5. merge the sorted halves
        return merge(left, right);
    }
};