// MiddleOfTheLinkedList
// 2021.12.28
// Easy

class Solution
{
public:
    ListNode* middleNode(ListNode* head)
    {
        ListNode* node = head;
        int count = 0;

        while (node != nullptr)
        {
            count++;
            node = node->next;
        }

        node = head;
        for (int i = 0; i < count / 2; i++)
        {
            node = node->next;
        }
        return node;
    }
};
