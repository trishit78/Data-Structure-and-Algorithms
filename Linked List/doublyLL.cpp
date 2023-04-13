#include<iostream> 
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

//constructor
    Node(int d){
        this->data= d;
        this->next=NULL;
        this->prev=NULL;
    }
    //distructor
    ~Node(){
        int val = this->data;
        while(next!=NULL){
            delete next;
            next =NULL;
        }
        cout<<"memory free for node with data"<<val<<endl;
    }

};
//traversing the LL
void print(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data <<" ";
        temp=temp -> next;
    }
    cout<<endl;
}
//getting the length of LL
int getLength(Node* head){
    int len=0;
    Node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;

    }
    return len;
    cout<<endl;
}
//inserting element at head
void insertAtHead(Node* &head,Node* &tail,int d){

    if(head==NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
        tail = temp;
    }

}
//inserting element at tail
void insertAtTail(Node* &head,Node* &tail,int d){
    if(tail==NULL){
        Node* temp = new Node(d);
        tail = temp ;
        head = temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next= temp;
    temp->prev = tail;
    tail = temp;
    }
    
}
//inserting element at any position
void insertAtPosition(Node* &head,Node* &tail, int position,int d){
    //insert at start
    if(position == 1){
        insertAtHead(head,tail,d);
        return;
    }
    Node* temp = head; 
    int cnt =1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    //insert at last position
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev =temp;
}

//delete node at any position

void deleteNode(Node* &head,int position){
    if(position == 1){
        Node* temp =head;
        temp->next->prev = NULL;
        temp->next = head;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node* prev = head;
        Node* curr = NULL;
        int cnt=1;

        while(cnt<position-1){
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr -> prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;

    }
}



int main(){

    Node* node1= new Node(10);

    //if we want to add elements in empty linkedList, then (previous line will be removed)

    // Node* head =NULL;
    //Node* tail = NULL;

    Node* head= node1;
    Node* tail= node1;
    cout<<node1->data<<endl;

    cout<<getLength(head)<<endl;
    print(head);
    insertAtHead(head,tail, 13);
    print(head);
    insertAtHead(head,tail, 8);
    print(head);
    insertAtHead(head,tail, 19);
    print(head);
    insertAtTail(head,tail, 30);
    print(head);
    insertAtPosition(head,tail,2,100);
    print(head);
    

    deleteNode(head,1);
    print(head);

}