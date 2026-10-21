class Solution {
    int countPairs(Node* a, Node* b) {
        int count = 0;
        while (a != NULL && b != NULL && a->data == b->data) {
            count++;
            a = a->next;
            b = b->next;
        }
        return count;
    }

public:
    int maxPalindrome(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        int best = 1;

        while (curr != NULL) {
            Node* next = curr->next;
            curr->next = prev;                               // flip first

            best = max(best, 2 * countPairs(prev, next) + 1); // odd: curr is the center
            best = max(best, 2 * countPairs(curr, next));     // even: center between curr and next

            prev = curr;                                     // then advance
            curr = next;
        }
        return best;
    }
};
//need to do it again on my own