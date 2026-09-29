class Solution {
   public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) {
            return NULL;
        }
        Node* curr = head;
        while (curr != NULL) {
            Node* y = new Node(curr->val);
            y->next = curr->next;
            curr->next = y;
            curr = curr->next->next;
        }
        curr = head;
        while (curr != NULL) {
            if (curr->random == NULL) {
                curr->next->random = NULL;
            } else {
                curr->next->random = curr->random->next;
            }
            curr = curr->next->next;
        }
        curr = head;
        Node* newHead = head->next;
        Node* x = head->next;
        
        while (curr != NULL) {
            curr->next = curr->next->next;
            if (x->next != NULL) {
                x->next = x->next->next;
            }
            curr = curr->next;
            x = x->next;
        }
        
        return newHead;
    }
};
        