
Node* detectLoop(Node* head,int n){
    if(head ==NULL)
    return NULL;

    Node* fast =head;
    Node* slow =head;

    while(fast!= NULL && slow!= NULL){
        fast =fast ->next;
        if(fast!= NULL){
            fast = fast->next;
        }
        slow = slow->next;
    }
    if(fast == slow){
        return fast;
    }
}

Node* startOfLoop(Node* head){
    if(head==NULL)
    return NULL;

    Node* intersection = detectLoop(head);
    Node* slow = head;
    while(slow!=intersection){
        slow=slow-next;
        intersection = intersection->next;
    }
    if(slow==intersection)
    return slow;
}


void removeLoop(Node* head){

    if(head ==NULL)
    return NULL;

    Node* start = startOfLoop(head);
    Node* temp = start;
    while(temp->next !=start){
        temp= temp->next;
    }
    temp ->next = NULL;
}