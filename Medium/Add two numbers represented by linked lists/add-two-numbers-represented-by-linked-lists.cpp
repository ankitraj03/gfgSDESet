//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends
/* node for linked list:

struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

class Solution
{
    public:
    struct Node* reverse(struct Node* n){
        struct Node* curr=n,*prev=NULL,*nex=n->next;
        
        while(curr){
            curr->next=prev;
            prev=curr;
            curr=nex;
            if(nex)nex=nex->next;
        }
        
        return prev;
    }
    
    struct Node* addTwoLists(struct Node* num1, struct Node* num2){
        num1 = reverse(num1);     num2 = reverse(num2);
        struct Node *num3=new Node(0),*temp=num3;
        
        int carry=0;
        while(num1 or num2){
            int a=num1?num1->data:0;
            int b=num2?num2->data:0;
            
            int sum=a+b+carry;
            carry=sum/10;
            temp->data=sum%10;
            temp->next=new Node(0);
            temp=temp->next;
            
            if(num1)num1=num1->next;
            if(num2)num2=num2->next;
        }
        
        while(carry){
            temp->data=carry%10;
            carry=carry/10;
            temp->next=new Node(0);
            temp=temp->next;
        }
        
        num3 = reverse(num3);
        while(num3 and num3->data==0)num3=num3->next;
        return num3?num3:new Node(0);
    }

};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* num1 = buildList(n);
        
        cin>>m;
        Node* num2 = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(num1,num2);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends