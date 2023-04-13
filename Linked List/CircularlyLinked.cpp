

bool isCircular(Node* head, int k){
    if(head==NULL)
    return true;

    Node* prev = NULL;
    Node* curr = head;
    Node* forward =NULL;

    Node* temp = head->next;
    while (temp!= head || temp!= NULL)
    {
        temp =temp->next;
    }
    if(temp==NULL)
    return false;

    if(temp==head)
    return true;
    

}