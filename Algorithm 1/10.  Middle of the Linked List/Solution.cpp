class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        int val=0;
        ListNode *p=head;
        while(p!=NULL)
        {
            p=p->next;
            val++;
        }
        int c=0;
        p=head;
        while(c<val/2)
        {
            p=p->next;
            c++;
        }
        return p;
    }
};
