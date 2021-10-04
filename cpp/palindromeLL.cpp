#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class node      // make an independent node
{
    public:
    int n;
    node* next;
    node(int v)
    {
        n=v;
        next=NULL;
    }

};

void addnode(node* &head,int v)  //add the new node at the end of the linked list 
{
    node* nn=new node(v);
    if(head==NULL)
    {
        head=nn;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=nn;
}
node* recrev(node* &head)    // this function reverse the linked list and return new head
{
    if(head==NULL||head->next==NULL)
    {
        return head;
    }
    node* k=recrev(head->next);
    head->next->next=head;
    head->next=NULL;
    return k ;
}
void dis(node * & head)  
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->n;
        temp=temp->next;
    }
}
bool checkPP(node* &head)
{
    node* slow=head;   
    node* fast = head;
    while(fast!=NULL&&fast->next!=NULL)   // to get the mid point 
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    
    node* mid;
    if(fast!=NULL)
    {
        mid=recrev(slow->next);
    }
    else{
        mid=recrev(slow);

    }
    slow=head;
    while(mid!=NULL)
    {
        if(mid->n!=slow->n)
        {
            return 0;
        }
        mid=mid->next;
        slow=slow->next;
    }
    return 1;
}
int main()
{
    node* head=NULL;   //starting of linked list
    addnode(head,1);  // add node to the end of linked list
    addnode(head,2);
    addnode(head,3);
    addnode(head,3);
    addnode(head,2);
    addnode(head,1);
    dis(head);   // function that display the linked list
    
    cout<<checkPP(head); // function that return's 1 if the linked list is plaindrome otherwisw 0

}