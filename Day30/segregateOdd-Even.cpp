Node * segregateOddEven (Node * head)
{
      Node *oddStart = NULL, *oddEnd = NULL, *evenStart = NULL, *evenEnd = NULL;

	Node *curr = head;

	while (curr != NULL)
	{
		// If the node is odd, add it to the odd linked list.
		if (curr->data % 2 == 1)
		{
			if (oddStart == NULL)
			{
				oddStart = curr;
				oddEnd = oddStart;
			}
			else
			{
				oddEnd->next = curr;
				oddEnd = oddEnd->next;
			}
		}
		// If the node is even, add it to the even linked list.
		else
		{
			if (evenStart == NULL)
			{
				evenStart = curr;
				evenEnd = evenStart;
			}
			else
			{
				evenEnd->next = curr;
				evenEnd = evenEnd->next;
			}
		}

		// Update current for the next iteration.
		curr = curr->next;
	}

	/*
		If either odd list or even list is empty, 
    	no change is required as all elements  
    	are either even or odd.
    */
	if (oddStart == NULL or evenStart == NULL)
	{
		return head;
	}

	// Connect even linked list after odd.
	oddEnd->next = evenStart;
	evenEnd->next = NULL;

	// Return the head of the modified list i.e oddStart.
	return oddStart;
}