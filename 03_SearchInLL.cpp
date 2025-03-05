int searchInLinkedList(Node<int> *head, int k) {
    // Write your code here.
   Node<int>* temp =head;
   while(temp){
       if(temp->data == k){
           return true;
       }
       temp =temp->next;
   }
   return false;
}
