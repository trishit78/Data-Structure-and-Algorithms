
//FloydAlgo
Node* isLoop(Node* head,int k){
    if(head == NULL)
    return NULL;

    Node* fast = head;
    Node* slow = head;

    while(fast!=NULL || slow!= NULL){
        fast =fast->next;
        if(fast != NULL)
        fast = fast ->next;

        slow=slow->next;

        if(slow == fast ){
            cout<<"Loop detected"<<endl;
        }

    }
    return NULL;
    cout<<"Loop not found"<<endl;
}