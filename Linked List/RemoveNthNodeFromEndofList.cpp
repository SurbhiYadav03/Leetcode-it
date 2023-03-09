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

int length(ListNode* &head){
    ListNode* temp = head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = length(head);
        int pos = len - n -1;
        ListNode* temp = head;
        if(head==NULL || head->next==NULL){
            return NULL;
        }
        while(pos>0){
            temp=temp->next;
            pos--;
        }
        
        ListNode* todel;
        if(n==len){
            todel = temp;
            head = temp->next;
        }
        else{
            todel = temp->next;
            temp->next = temp->next->next;
        }
        
        delete todel;
        return head;
    }
};
