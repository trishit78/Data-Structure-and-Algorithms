


bool isVisited(Node* head,int k){

    if(head == NULL)
    return false;

    map<Node*,bool> visited;

    Node* temp =head;
    while(temp != NULL){

        if(visited[temp] == true)
        return true;

        visited[temp]=true;
        temp=temp->next;
    }
    return false;
}