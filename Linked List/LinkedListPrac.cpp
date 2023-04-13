#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node(int data){
        this->data =data;
        this->next =NULL;
    }

    ~Node(){
        int value = this->data;
        while(this->next != NULL){
            delete next;
            this ->next =NULL;
        }
        cout<<endl;
        cout<<"This memory is free with the data"<<value<<endl;
    }
};

void insertAtHead(Node* &head,int d){
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node* &head,int d){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insertAtN(Node* &head,Node* &tail,int position,int d){

    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    if(tail->next==NULL){
        insertAtTail(tail,d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count<position-1){
        temp= temp->next;
        count++;
    }
    Node* insert= new Node(d);
    insert->next = temp->next;
    temp->next = insert;

}



void deleteNode(Node* &head,int position){
    
    if(position == 1){
        Node* temp =head;
        head = head->next;
        temp ->next =NULL;
        delete temp;
    }
    else{
        Node* prev = head;
    Node* curr = NULL;
    int cnt=1;

    while(cnt<position){
        prev= curr;
        curr = curr->next;
        cnt++ 
    }
    prev->next = curr->next;
    curr->next =NULL;
    delete curr;
    }
    
}


int main(){

    Node* node1= new Node(10);
   
    cout<<node1 -> data<<endl;
    cout<<node1->next<<endl;

    Node* head = node1;
    Node* tail = node1;

}