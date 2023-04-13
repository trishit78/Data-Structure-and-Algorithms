#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    

    Node(int d){
        this->data =d ;
        this->prev =NULL;
        this->next = NULL;
    }
};

void print(Node* &head){
    Node* temp = head;
    while(head!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

int getLen(Node* &head){
    int len=0;
    Node* temp = head;
    
    while(head!= NULL){
        len++;
        temp=temp->next;
    }
    return len;
    cout<<endl;
}

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    temp->next= tail;
    tail->prev = temp;
    tail = temp;
}

void insertAtPosition(Node* &head,Node* &tail, int position,int d){
    if(position == 1){
        insertAtHead(head,d);
    }
    Node* temp = new Node(d); 
    int cnt =1;
    while(cnt<position){
        temp=temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertAtTail(tail,d);
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev =temp;
}

int main(){

    Node* node1 = new Node(10);

    Node* head = node1;
    Node* tail = node1;
    cout<<"happy"<<endl;
    print(head);
    
   // cout<<getLen(head)<<endl;
    insertAtHead(head,11);
    print(head);
    insertAtTail(tail,15);
    cout<<"happy"<<endl;
    print(head);
    return 0;



}