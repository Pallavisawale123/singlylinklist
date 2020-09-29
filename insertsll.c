 #include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node *next;
};
struct node *newnode,*temp,*head,*prev,*curr,*nextnode,*temp;


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

void insertfirst()
{
    newnode=(struct node *)malloc (sizeof(struct node));
    printf("\nenter data to insert at beggining \n");
     scanf("%d",&newnode->data);
     
      
     //newnode->data=data1;
     newnode->next=NULL;
     newnode->next=head;
        head=newnode;
       Display();
}
void insertatlast()
{
  
   newnode=(struct node *)malloc (sizeof(struct node));
    printf("\nenter data to insert at last position\n");
     scanf("%d",&newnode->data);
      newnode->next=NULL;
       temp=head;
      while(temp->next!=0)
         {
            temp=temp->next;
	 }
             temp->next=newnode;

             Display();
}
int count()
 {
     int icnt;
     temp=head;
     while(temp!=NULL)
     { icnt++;  temp=temp->next;
    }
       return icnt;
  }
void insertAtpos()
{
   int pos,i;
 
  
    printf("enter a position to insert ele");
    scanf("%d",&pos);
   
   int icnt=count();
    if(pos>icnt)
   {
       printf("invalid position");
   }
  else
   {
     temp=head;
     
       newnode=(struct node *)malloc (sizeof(struct node));
  
   
    printf("\nenter data \n");
     scanf("%d",&newnode->data);

  for(i=1;i<=pos-2;i++)
  {
    temp=temp->next;
     }
     newnode->next=temp->next;
       temp->next=newnode;
   }
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
 //printf("\nbefore reverse a LL\n");
 Display();
  //incount();
 //insertfirst();
 // insertatlast();
   insertAtpos();
    Display();
 //rev();
 //insertfirst(51);
 //printf("\nafter reverse a LL\n");
 //Display();
return 0;
}

