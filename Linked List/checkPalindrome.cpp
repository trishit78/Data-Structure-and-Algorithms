//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<vector>
class Solution{
  
  private:
  
    bool checkPalindrome(vector<int> arr){
        int n = arr.size();
        int s =0;
        int e = n-1;
        while(s<=e){
            if(arr[s] != arr[e]){
                return false;
                s++;
                e--;
            }
        }
        return true;
        
    }
  
  public:
    //Function to check whether the list is palindrome.
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        vector<int> arr;
        Node* temp = head;
        while(temp != NULL){
            arr.push_back(temp->data);
            temp=temp->next;
        }
        return checkPalindrome(arr);
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends


//***********************************************************************//

                         //OPTIMAL SOLUTION

//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
    private:
    Node* getMiddle(Node* head){
        Node* slow = head;
        Node* fast = head->next;
        
        while(fast!= NULL && fast->next != NULL){
            fast =fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    
    Node* reverse(Node* head){
        Node* curr= head;
        Node* next = NULL;
        Node* prev = NULL;
        
        while(curr!=NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        
        if(head->next == NULL)
        return true;
        
        Node* middle = getMiddle(head);
        
        Node* temp = middle->next;
        middle->next = reverse(temp);
        
        
        Node* head1 =head;
        Node* head2 =middle->next;
        
        while(head2!= NULL){
            if(head1->data!=head2 ->data){
                return false;
            }
             head1=head1->next;
                head2=head2->next;
        }
        return true;
        
        
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends




