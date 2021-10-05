#include<iostream>
using namespace std;
class node{
    public:
    node* next;
    node* prev;
    int n;
    node(int v)
    {
        n=v;
        next= NULL;
        prev= NULL;

    }

};

void addnode(node* &head,int v)
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
    nn->prev=temp;
}
void diss(node* &head)
{
      node* temp=head;
      node* xx;

    while(temp!=NULL)
    {
        cout<<temp->n<<"->";
          if(temp->next==NULL)
        {
            xx=temp;
        }
        temp=temp->next;
    }
     while(xx!=NULL)
    {
        cout<<xx->n<<"->";
        xx=xx->prev;
    }


}
void delnode(node* &head,int k)
{
    node* temp=head;
    node* todel;


    while(temp->n!=k&&temp!=NULL)
    {
        temp=temp->next;
        todel=temp;


    }

    if(temp->next==NULL)
    {
        temp->prev->next=NULL;
   todel=temp;
   delete todel;
   return;

    }
    
       todel=temp;
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;
    delete todel;
}
int main()
{
    node* head=NULL;
    addnode(head,1);
    addnode(head,2);
    addnode(head,3);
    addnode(head,4);
    addnode(head,5);
    addnode(head,6);
    addnode(head,7);
    diss(head);


}
