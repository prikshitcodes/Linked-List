class Solution {
  public:
    // Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node* head) {

        // Add code here
        
        
        if(head==NULL  || head->next==NULL) return head;
        Node* zeroNode = new Node(-1);
         Node* oneNode = new Node(-1);
          Node* twoNode = new Node(-1);
          
          Node* zero = zeroNode;
          Node* one = oneNode;
          Node* two = twoNode;
          
          Node* temp = head;
          
          while(temp!=NULL){
              if(temp->data==0){
                  zero->next=temp;
                  zero=temp;
              }
              else if(temp->data==1){
                  one->next=temp;
                  one=temp;
              }
             else if(temp->data==2){
                  two->next=temp;
                  two=temp;
              }
              temp =temp->next;
              
              
          }
          
          zero->next = (oneNode->next)? oneNode->next: twoNode->next;
          one->next=twoNode->next;
          two->next=NULL;
          
        Node* newHead = zeroNode->next;
        delete zeroNode;
        delete oneNode;
        delete twoNode;
        return newHead;
          
          
    }
};
