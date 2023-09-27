/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
            int data;
            Node *next;
            Node()
            {
                this->data = 0;
                next = NULL;
            }
            Node(int data)
            {
                this->data = data;
                this->next = NULL;
            }
            Node(int data, Node* next)
            {
                this->data = data;
                this->next = next;
            }
        };


*****************************************************************/

class Stack
{
    //Write your code here
    Node* head; // Pointer to the top node of the stack
    int size;   // Variable to keep track of the number of elements in the stack

public:
    // Constructor to initialize an empty stack
    Stack()
    {
        head = NULL; // Initialize the head to NULL (empty stack)
        size = 0;    // Initialize the size to 0 (no elements in the stack)
    }

    // Function to get the current size of the stack
    int getSize()
    {
        return size;
    }

    // Function to check if the stack is empty
    bool isEmpty()
    {
        return (size == 0); // Returns true if size is 0, indicating an empty stack
    }

    // Function to push an element onto the top of the stack
    void push(int data)
    {
        Node* currentNode = new Node(data); // Create a new node with the given data
        ++size;                             // Increase the size of the stack

        if (head == NULL)
        {
            // If the stack is empty, set the head to the new node
            head = currentNode;
        }
        else
        {
            // If the stack is not empty, make the new node point to the current head
            // and then update the head to the new node, effectively pushing the new node onto the stack
            currentNode->next = head;
            head = currentNode;
        }
    }

    // Function to remove the top element from the stack (pop operation)
    void pop()
    {
        if (head == NULL)
        {
            // If the stack is empty, return (nothing to pop)
            return;
        }

        --size; // Decrease the size of the stack

        Node* temp = head; // Create a temporary pointer to the current head

        head = head->next; // Update the head to point to the next node in the stack

        temp->next = NULL; // Set the next pointer of the temporary node to NULL

        free(temp); // Free the memory occupied by the temporary node (the previous top of the stack)
    }

    // Function to get the value of the top element of the stack
    int getTop()
    {
        if (head == NULL)
        {
            // If the stack is empty, return -1 (indicating an error or empty stack)
            return -1;
        }

        // Otherwise, return the data stored in the head node, which is the top of the stack
        return head->data;
    }
};
