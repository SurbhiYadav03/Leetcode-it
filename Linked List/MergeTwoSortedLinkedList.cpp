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
ListNode* merge(ListNode* &list1, ListNode* &list2){
            ListNode* p1=list1;
            ListNode* c1=list1->next;
            ListNode* temp=list2;

            while(temp!=NULL && c1!=NULL)
            {
                if(temp->val >= p1->val && temp->val <= c1->val){
                    ListNode* next2=temp->next;
                    p1->next = temp;
                    temp->next = c1;
                    temp = next2;

                    p1=p1->next;
                }
                else{
                    p1=p1->next;
                    c1=c1->next;
                }
            }

            if(c1==NULL){
                p1->next = temp;
            }
            return list1;
}
            
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
        {
            return list2;
        }
        if(list2==NULL)
        {
            return list1;
        }
        if(list1->val<=list2->val)
        {
            return merge(list1,list2);
        }
        
        return merge(list2,list1);
        
    }
};
