/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int a[1000000],n=0;
    while(head!=NULL){
        a[n++] = head -> val;
        head=head -> next;
    }
    for (int i=0;i<n/2;i++){
        if(a[i] !=a[n-i-1])return false;
    }
    return true;
}
