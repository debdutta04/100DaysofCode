
LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
  if (head == NULL || head->next == NULL) {
    return head;
  }
  LinkedListNode<int>* prev = NULL;
  LinkedListNode<int>* curr = head;
  LinkedListNode<int>* forward; // Declare 'forward' variable
  while (curr != NULL) {
    forward = curr->next;
    curr->next = prev;
    prev = curr;
    curr = forward;
  }
  return prev;
}