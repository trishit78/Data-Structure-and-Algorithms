#include <iostream> 
using namespace std;

class Node{
    
    public:
    int data;
    Node* next;

    Node (int data){
        this ->data = data;
        this ->next= NULL;
    }
    ~Node(){
        int value= this->data;
        while(this->next!=NULL){
            delete next;
            this->next= NULL;

        }
        cout<<endl;
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp= new Node(d);
    temp->next=head;
    head=temp; 
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node* &tail, int d){
    Node* temp= new Node(d);
    tail->next=temp;
    tail=temp;
}

void insertAtN(Node* &tail,Node* &head,int position,int d){

    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node* temp = head;
    int count=1;

    if(temp->next == NULL){
        insertAtTail(tail,d);
        return;
    }

    while(count<position-1){
        temp=temp->next;
        count++;
    }
    Node* insert= new Node(d);
    insert->next= temp->next;
    temp->next=insert;
}

void deleteNode(int position, Node* &head){
    if(position == 1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        Node* prev=head;
        Node* curr=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}


int main(){

Node* node1= new Node(10);
cout<<node1->data<<endl;
//cout<<node1-next<<endl;

Node* head=node1;
Node* tail=node1;

print(head);

//insertAtHead(head,12);

insertAtTail(tail,15);
//print(head);
insertAtTail(tail,20);
//print(head);

insertAtN(tail,head,2,25);
print(head);

deleteNode(3,head);
print (head);

cout<<"Head"<< head -> data<<endl;
cout<<"Tail"<< tail -> data<<endl;

}

