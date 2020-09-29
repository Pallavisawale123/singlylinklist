#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
};
struct node *newnode,*temp,*head,*prev,*curr,*nextnode,*first;


void  createLL()
{
    
   newnode=(struct node *)malloc (sizeof(struct node));
   printf("enter a data\t");
   scanf("%d",&newnode->data);

   newnode->next=NULL;
  if(head==0)
  {
       head=temp=newnode;
  }
else
 {
     temp->next=newnode;
     temp=newnode;
  }
}
void Display()
{
   temp=head;
  while(temp!=0)
{
  printf("%d ",temp->data);
  temp=temp->next;
}
}

void rev()
{
  prev=0;
  curr=nextnode=head;
 
 while(nextnode!=0)
{
   nextnode=nextnode->next;
   curr->next=prev;
   prev=curr;
  curr=nextnode;
}
  head=prev;
}

void insertfirst()
{
    newnode=(struct node *)malloc (sizeof(struct node));
    printf("enter data to insert");
     scanf("%d",&newnode->data);

      
     //newnode->data=data1;
     newnode->next=NULL;
     newnode->next=head;
        head=newnode;
       Display();
}



 int main()
{
  int n,i;
  printf("enter total no of nodes:\n");
  scanf("%d",&n);

 for(i=0;i<n;i++)
 {
  createLL();
 }
 printf("\nbefore reverse a LL\n");
 Display();
  insertfirst();
 rev();
 //insertfirst(51);
 printf("\nafter reverse a LL\n");
 Display();
return 0;
}

 /* void  createLL()
{
    
   newnode=(struct node *)malloc (sizeof(struct node));
   printf("enter a data\t");
   scanf("%d",&newnode->data);

   newnode->next=NULL;
  if(head==0)
  {
       head=temp=newnode;
  }
else
 {
     temp->next=newnode;
     temp=newnode;
  }
}
void Display()
{
   temp=head;
  while(temp!=0)
{
  printf("%d ",temp->data);
  temp=temp->next;
}
}

void rev()
{
  prev=0;
  curr=nextnode=head;
  newnode=head;
 while(nextnode!=0)
{
   nextnode=nextnode->next;
   curr->next=prev;
   prev=curr;
  curr=nextnode;
}
  head=prev;
}


*/






