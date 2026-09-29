class MyLinkedList {
public:
    struct Node {
        int data;
        Node* next;
    };
    
    Node* head;
    Node* tail;
    int size;
    
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    
    int get(int index) {
        if (head == NULL || index < 0 || index >= size) {
            return -1;
        }
        Node* curr = head;
        for (int i = 0; i < index; i++) {
            curr = curr->next;
        }
        return curr->data;
    }
    
    void addAtHead(int val) {
        Node* temp = new Node();
        temp->data = val;
        temp->next = head;
        head = temp;
        
        if (size == 0) {
            tail = temp;
        }
        size++;
    }
    
    void addAtTail(int val) {
        Node* temp = new Node();
        temp->data = val;
        temp->next = NULL;
        
        if (head == NULL) {
            head = temp;
            tail = temp;
        } else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {
            return;
        }
        
        if (index == 0) {
            addAtHead(val);
            return;
        }
        
        if (index == size) {
            addAtTail(val);
            return;
        }
        
        Node* temp = new Node();
        temp->data = val;
        
        Node* curr = head;
        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }
        
        temp->next = curr->next;
        curr->next = temp;
        size++;
    }
    
    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        
        if (index == 0) {
            head = head->next;
            if (size == 1) {
                tail = NULL;
            }
            size--;
            return;
        }
        
        Node* curr = head;
        for (int i = 0; i < index - 1; i++) {
            curr = curr->next;
        }
        
        curr->next = curr->next->next;
        if (index == size - 1) {
            tail = curr;
        }
        size--;
    }
};