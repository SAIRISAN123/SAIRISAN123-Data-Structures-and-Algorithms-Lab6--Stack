struct Node {
    int val;
    Node *next;
};

Node *head = NULL; //new node is head of  list
Node *top = NULL; //new node is top

bool isEmpty() {      //to check wheather list is empty or not
    return top == NULL;
}

void push(int value) {
    Node *newNode = new Node();
    newNode->val = value; 
    newNode->next = NULL;
    
    if (isEmpty()) {
        head = newNode; //new node is head
        top = newNode; //new node is top
    }
    else {
        top->next = newNode;
        top = newNode;
    }
}

int pop() {
    if (isEmpty()) {
        cout << "stack Underflow" << endl;
        return -1;
    }
    else {
        int x = top->val;
        if (top == head) { // only one head
            top = NULL;
            head = NULL;
        }
        else {
            Node *tmp = head;
            while (tmp->next != top) { //iterate to the node prevous to stop
                tmp = tmp->next;
            }
            tmp->next = NULL; //making the next of the nnode null
            top = tmp; // change top pointer
        }
        return x;
    }
}