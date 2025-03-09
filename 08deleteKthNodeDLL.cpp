
Node* deleteHead(Node *head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    
    Node* back = head;
    head = head->next;
    head->prev = nullptr;
    back->next = nullptr; // Fixed: back-next should be back->next
    delete back;
    
    return head;
}

Node* deleteTail(Node* head) {
    if (head == NULL || head->next == NULL) {
        return NULL;
    }
    
    Node* tail = head;
    while (tail->next != NULL) { // Fixed: changed temp to tail
        tail = tail->next;
    }
    
    Node* back = tail->prev;
    tail->prev = nullptr;
    back->next = nullptr;
    delete tail;
    
    return head;
}

Node* deleteNode(Node *head, int k) {
    // Write your code here
    Node* temp = head;
    int count = 0;
    
    while (temp != NULL) {
        count++;
        if (count == k) {
            break;
        }
        temp = temp->next;
    }
    
    if (temp == NULL) return head; // Fixed: Handle case when k is out of bounds

    Node* prevv = temp->prev;
    Node* front = temp->next;

    if (prevv == NULL && front == NULL) {
        delete temp;
        return NULL;
    } 
    else if (prevv == NULL) {
        return deleteHead(head); // Fixed: Return the new head when deleting the first node
    }
    else if (front == NULL) {
        return deleteTail(head); // Fixed: Return the updated head when deleting the last node
    }
    else {
        prevv->next = front;
        front->prev = prevv;
        temp->next = nullptr;
        temp->prev = nullptr; // Fixed: temp->prevv should be temp->prev
        delete temp;
        return head;
    }
}
