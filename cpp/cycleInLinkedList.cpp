#include<iostream>
using namespace std;
class node{
    public:
    node * next;
     int n;
     node(int v)
     {
         n=v;
         next=NULL;
         
     }

};
void addnode(node* &head,int v)
{
    node* nn= new node(v);
    if(head==NULL)
    {
        head=nn;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
       temp= temp->next;
    }
    temp->next=nn;
}
void dis(node* &head)
{
        node* temp=head;
        int c=1;
    while(temp!=NULL||c==15)
    {
        cout<<temp->n;
        temp=temp->next;
        c++;
    }
}
void makecycle(node * &head, int k)
{
        node* temp=head;
        node* ss;
        int c=1;
        while(temp->next!=NULL)
        {
            if(c==k)
            {
            ss=temp;
            }


            temp=temp->next;
            c++;
        }
        temp->next=ss;
}
bool checkCYCL(node* &head)
{

    node* fast=head;
    node* slow=head;
    while(fast!=NULL&& fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            return 1;
        }
    }
    return 0;


}
void delCYCLE(node* &head)
{
     node* fast=head;
    node* slow=head;
    do {

        fast=fast->next->next;
        slow=slow->next;
    }
    while (fast!=slow);
    fast=head;
    while(fast->next!=slow->next)
    {
        fast=fast->next;
        slow=slow->next;
    }
    slow->next=NULL;

  
    

}
int main()
{
    node * head=NULL;
    addnode(head,1);
    addnode(head,2);
    addnode(head,3);
    addnode(head,4);
    addnode(head,5);
    addnode(head,6);
    addnode(head,7);
   // dis(head);
    makecycle(head,2);
    cout<<checkCYCL(head);
    delCYCLE(head);
 cout<<checkCYCL(head);
       dis(head);
}