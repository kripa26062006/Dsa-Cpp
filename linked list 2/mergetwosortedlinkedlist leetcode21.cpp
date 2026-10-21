class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* h;   // head of merged list
        ListNode* t;   // tail of merged list
        ListNode* h1 = list1;
        ListNode* h2 = list2;

        if (h1->val < h2->val) {
            h = h1;
            t = h1;
            h1 = h1->next;
        } else {
            h = h2;
            t = h2;
            h2 = h2->next;
        }

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

        return h;   // h is the real head here, not a dummy
    }
};
        