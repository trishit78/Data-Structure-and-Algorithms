#include<bits/stdc++.h>
using namespace std;


class Node{

    public:
    int data;
    Node* next = NULL;

    Node(int d){
        this ->data = d;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        while(next != NULL){
            delete next ;
            next = NULL;
        }
        cout<<endl;
        //cout<<"memory free for node with data"<<val<<endl;
    }


};


void insert(Node* &tail, int element, int d){
    
    //assuming list is empty
    if(tail==NULL){
        Node* newNode = new Node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    //non empty list
    else{
        Node* curr =tail;
        while(curr->data != element){
            curr = curr->next;
        }
        //element found ->curr is representing element node
        Node*temp = new Node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node* &tail){
    Node* temp = tail;
    if(tail==NULL)
        cout<<"Linked List is empty"<<endl;
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    } while(tail!= temp);
    cout<<endl;
}

void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"Linked List is empty"<<endl;
        return;
    }
    else{
        Node* prev = tail;
        Node* curr = prev->next;
        while(curr->data !=value){
            prev= curr;
            curr=curr->next;
        }           
        if(tail ==curr){
            tail=prev;
        }
        prev->next = curr->next;
        //1 Node Linked List
        if(curr ==prev)
        tail = prev;
        //2 Node Linked List
        if(tail ==curr)
        tail =curr;

        curr->next = NULL;
        delete curr;


    }

}



int main(){

    Node* tail = NULL;
    insert(tail,5,3);
    print(tail);
    deleteNode(tail,3);
    print(tail);

}