class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n)
    {
        // if(n == 1)
        // {
        //     ;
        //     return head;
        // }
        int count = 0;
        ListNode* p = head; 
        while (p != NULL) 
        { 
          ++count; 
          p = p->next;
        }
        if(count == 1)
        {
            return NULL;
        }
        if(n == count)
        {
            head = head->next;
            return head;
        }
        ListNode* hmm = head;
        // return head;
        //cout << count << endl;
        int ass = count - n; // 5-2-1 = 2
        int counter=1;
        while(counter <= ass-1)
        {
            //cout << "value = " << hmm->val << endl;
            hmm = hmm->next;
            counter++;
        }
        //cout << "afdsghdfndjbv = " << hmm->val << endl;
        // cout << hmm->next->next->val;
        if(hmm->next!=NULL)
        {
            cout << "adsgf";
            hmm->next = hmm->next->next;
        }
        return head;
    }
};