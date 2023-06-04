class Solution
{
public:
    void insert(ListNode *&root, int val)
    {
        if (!root)
        {
            root = new ListNode(val);
            return;
        }
        ListNode * dummy = new ListNode(root->val, root);
        ListNode* curr = dummy;
        while (curr->next && curr->next->val <= val)
            curr = curr->next;
        ListNode* NewNode = new ListNode(val,curr->next);
        curr->next = NewNode;
        root = dummy->next;
        delete dummy;
    }

    ListNode *mergeKLists(vector<ListNode *> &lists)
    {
        ListNode *root = NULL;
        for (int i = 0; i < lists.size(); i++)
        {
            ListNode *ptr = lists[i];
            while (ptr)
            {
                insert(root, ptr->val);
                ptr = ptr->next;
            }
        }
        return root;
    }
};