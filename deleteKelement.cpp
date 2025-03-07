ListNode* removekthElement (ListNode* head, int k) {
    // add your logic here
	if(head == NULL) return head;
	
	if(k==1){
		ListNode* temp =head;
		head = head->next;
		free(temp);
		return head;
	}
	
	int count =0;
	ListNode* temp=head;
	ListNode* prev=NULL;
	while(temp!=NULL){
		count++;
		
		if(count==k){
			prev->next = prev->next->next;
			free(temp);
		    break;
		}
		
		prev=temp;
		temp=temp->next;
	}
	return head;
}
