/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
   struct ListNode *t=head;
   struct ListNode *t1=t->next;
    if(t->next==NULL){
        head=NULL; 
        return head;
    }
    int c=0;
    while(t!=NULL){
        t=t->next;
        c++;
    }
    int ind=c-n+1;
    t=head;  
	if(ind==1){
        head=t1;
        free(t);
        return head;
    }
    for(int i=1;i<ind-1;i++){
        t=t->next;
        t1=t1->next;
    }
    t->next=t1->next;
    free(t1);
    return head;       
}