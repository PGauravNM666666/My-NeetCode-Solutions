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
class Solution {
public:
    void print(ListNode* h){
        while(h!=NULL){
            cout << h->val << " ";
            h=h->next;
        }
        cout << endl;
    }
    
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == NULL)
            return list2;
        if(list2 == NULL)
            return list1;
        if(list1 == NULL && list2 == NULL)
            return NULL;
        
        ListNode* head = new ListNode();
        ListNode* res = head;
        while(list1 != NULL && list2 != NULL)
        {
            // res  = res->next;
            if(list1->val < list2-> val)
            {
                res->val = list1->val;
                list1 = list1->next;
            }
            else
            {
                res->val = list2->val;
                list2 = list2->next;
            }
            if(list1 !=NULL && list2 !=NULL){
                res->next = new ListNode();
                res = res->next;
            }
            // print(res);
        }
        while(list1 != NULL)
        {
            res->next = new ListNode();
            res->next = list1;
            res = res->next;
            list1 = list1->next;
        }
        while(list2 != NULL)
        {
            res->next = new ListNode();
            res->next = list2;
            res = res->next;
            list2 = list2->next;
        }
        return head;
    }
};