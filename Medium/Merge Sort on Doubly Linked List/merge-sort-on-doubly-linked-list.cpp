//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node *next, *prev;

    Node(int x) {
        data = x;
        next = NULL;
        prev = NULL;
    }
};


// } Driver Code Ends

/* Structure of the node of the list is as
struct Node
{
    int data;
    struct Node *next, *prev;
    Node (int x){
        data = x;
        next = prev = NULL;
    }
};
*/

class Solution {
  public:
    // Function to sort the given doubly linked list using Merge Sort.
    
    struct Node *findmid(struct Node *head)
    {
        Node *slow,*fast;
        slow=head;
        fast=head->next;
        while(fast and fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;
    }
    
    struct Node *merge(struct Node *first , struct Node *second)
    {
        Node *dummy=new Node(-1);
        Node *temp=dummy;
        while(first and second)
        {
            if(first->data<second->data)
            {
                temp->next=first;
                first->prev=temp;
                temp=temp->next;
                first=first->next;
            }
            else
            {
                temp->next=second;
                second->prev=temp;
                temp=temp->next;
                second=second->next;
            }
        }
        
        while(first)
        {
            temp->next=first;
            first->prev=temp;
            temp=temp->next;
            first=first->next;
        }
        
        while(second)
        {
            temp->next=second;
            second->prev=temp;
            temp=temp->next;
            second=second->next;
        }
        
        dummy->next->prev=NULL;
        
        return dummy->next;
    }
    
    // Function to sort the given doubly linked list using Merge Sort.
    struct Node *sortDoubly(struct Node *head) {
        // Your code here
        if(!head || !head->next)
        return head;
        
        Node *first,*second,*mid;
        first=head;
        mid=findmid(first);
        second=mid->next;
        
        mid->next=NULL;
        second->prev=NULL;
        
        first=sortDoubly(first);
        second=sortDoubly(second);
        
        Node *ans=merge(first,second);
        
        
        return ans;
    }
};


//{ Driver Code Starts.

void insert(struct Node **head, int data) {
    struct Node *temp = new Node(data);
    if (!(*head))
        (*head) = temp;
    else {
        temp->next = *head;
        (*head)->prev = temp;
        (*head) = temp;
    }
}

void print(struct Node *head) {
    struct Node *temp = head;
    while (head) {
        cout << head->data << ' ';
        temp = head;
        head = head->next;
    }
    cout << endl;
    while (temp) {
        cout << temp->data << ' ';
        temp = temp->prev;
    }
    cout << endl;
}

// Utility function to swap two integers
void swap(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}

// Driver program
int main(void) {
    long test;
    cin >> test;
    while (test--) {
        int n, tmp;
        struct Node *head = NULL;
        cin >> n;
        while (n--) {
            cin >> tmp;
            insert(&head, tmp);
        }
        Solution ob;
        head = ob.sortDoubly(head);
        print(head);
    }
    return 0;
}

// } Driver Code Ends