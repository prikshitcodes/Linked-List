
void deleteNode(Node* node) {
    //Write your code here.

    Node* back = node->prev;
    Node* front = node->next;

    if(front==NULL){
        back->next=nullptr;
        node->prev=nullptr;
        delete(node);
        return ;
    }

    back->next=front;
    front->prev=back;

    node->next=node->prev=nullptr;
    delete(node);
}
