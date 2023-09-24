#include <bits/stdc++.h> 
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
        };

*****************************************************************/

Node* pairsSwap(Node *head)
{
    if(head == NULL || head->next == NULL)
        return head;

    Node* curr = head->next->next;
    Node* prev = head;
    head = head->next;
    head->next = prev;

    while(curr != NULL && curr->next != NULL){
        prev->next = curr->next;
        prev = curr;
        Node* temp =curr->next->next;
        curr->next->next =curr;
        curr =temp;

    }
    prev->next = curr;
    return head;
}
