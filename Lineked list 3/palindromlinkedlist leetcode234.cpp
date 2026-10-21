class Solution {
public:
    bool isPalindrome(ListNode* head) {
         ListNode*s = head ;
         ListNode*f = head ;
   if ( head == NULL){
         return true ;
}
    while (f != NULL && f->next!=NULL){
              s = s->next ;
              f = f->next->next ;
}
      ListNode* prev = NULL;
ListNode* curr = s ;
while(curr !=NULL){
ListNode *next = curr->next ;
 curr->next = prev ;
prev = curr ;
curr = next ;
}  
ListNode*first = head ;
ListNode*second = prev ;
while (second != NULL){
if (second->val == first ->val){
     second = second->next ;
    first = first->next ;
}else {
     return false ;
}
}
   return true ;
    }
};