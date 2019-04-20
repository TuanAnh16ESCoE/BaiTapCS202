#include <iostream>
#include "linkedlist.h"
using namespace std;
List::List()
{
    head = NULL;
    tail = NULL;
}
List::~List()
{
    delete head;
    delete tail;
}
void List::createnode(int value)
{
    node *temp=new node;
    temp->data=value;
    temp->next=NULL;

    if(head==NULL)
      {
        head=temp;
        tail=temp;
        temp=NULL;
      }
    else
      {
        tail->next=temp;
        tail=temp;
      }

}
void List::display()
{
    node *temp=new node;
    temp=head;
    while(temp!=NULL)
    {
      cout<<temp->data<<"-->";
      temp=temp->next;
    }
    cout<<"NULL\n\n";
}
void List::insert_start(int value)
{
    node *temp=new node;
    temp->data=value;
    temp->next=head;
    head=temp;
}
void List::insert_position(int pos, int value)
{
    node *pre=new node;
    node *cur=new node;
    node *temp=new node;
    cur=head;
    for(int i=1;i<pos;i++)
    {
      pre=cur;
      cur=cur->next;
    }
    temp->data=value;
    pre->next=temp;
    temp->next=cur;
}
void List::insert_end(int value)
{
    node *temp=new node;
    temp->data=value;
    temp->next=NULL;

    tail->next=temp;
    tail=temp;
}
void List::delete_first()
{
    node *temp=new node;
    temp=head;
    head=head->next;
    delete temp;
}
void List::delete_last()
{
    node *current=new node;
    node *previous=new node;
    current=head;
    while(current->next!=NULL)
    {
      previous=current;
      current=current->next;
    }
    tail=previous;
    previous->next=NULL;
    delete current;

}
void List::delete_position(int pos)
{
    node *current=new node;
    node *previous=new node;
    current=head;
    for(int i=1;i<pos;i++)
    {
      previous=current;
      current=current->next;
    }
    previous->next=current->next;

}

