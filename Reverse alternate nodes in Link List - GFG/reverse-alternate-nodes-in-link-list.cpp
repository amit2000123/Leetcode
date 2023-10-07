//{ Driver Code Starts
#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */


struct Node
{
    int data;
    struct Node *next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

struct Node *start = NULL;

/* Function to print nodes in a given linked list */
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
    
}

void insert()
{
    int n,value;
    cin>>n;
    struct Node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start = new Node(value);
            temp = start;
            continue;
        }
        else
        {
            temp->next = new Node(value);
            temp = temp->next;
        }
    }
}


// } Driver Code Ends
/*
  reverse alternate nodes and append at the end
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
      int data;
      struct Node *next;
    
      Node(int x){
        data = x;
        next = NULL;
      }
    
   };

*/

class Solution
{
    public:
    // Node* reverse(Node* head){
    //     Node* current = head;
    //     Node *prev = NULL, *next = NULL;
 
    //     while (current != NULL) {
           
    //         next = current->next;
           
    //         current->next = prev;
            
    //         prev = current;
    //         current = next;
    //     }
    //     return prev;
    // }
    void rearrange(struct Node *odd)
    {
        // if(head==NULL || head->next==NULL || head->next->next==NULL) return;
        //   Node* a=head;
        //   Node* b=head->next;
        //   Node* c=b;
          
        
        // while(a&&a->next){
        //     a->next=a->next->next;
        //     a=a->next;
            
        //     b->next=b->next->next;
        //     b=b->next;
        //     if(b&&b->next==NULL){
        //         break;
        //     }
        // }
        // c=reverse(c);
        // a->next=c;
        
        
        
        
        
        
        
        Node *first = odd;
        Node *second = odd->next;
        Node *second_copy = second;
        
        while(first->next != NULL && second->next != NULL){
            first->next = first->next->next;
            first = first->next;
            
            second->next = second->next->next;
            second = second->next;
            
        }
        
        second_copy = reverse(second_copy);
        first->next = second_copy;

}
};








//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while (t--) {
        insert();
        Solution ob;
        ob.rearrange(start);
        printList(start);
    }
    return 0;
}

// } Driver Code Ends