#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;

};
struct node *start=NULL,*tail=NULL;

int size();
void push_front(int n);
int pop_front();
void display();
int empty();
int value_at(int loc);
void push_back(int item);
int pop_back();
int front();
int back();
void inserts(int, int);
void erase(int);
int value_at_end(int);
void reverse();
void removes(int);

int main()




{
int ch,n,loc,item;
while(1)
{


printf("\n Enter the choice\n 1.Display\n 2.size \n 3 check empty \n 4.value at particular location\n 5 pushing at front\n 6 poping at front\n 7 exit\n 8. deleting item from last\n 9 inserting an item at end\n 10 returning first item\n 11. returning last item \n 12.inserting item at particular location\n 13.remove node at a particular index \n 14 the value of the node at nth position from the end of the list\n 15. reversing the list\n 16 replacing the element");
scanf("%d",&ch);


switch(ch)
{
case 1:
display();
break;
case 2:
n=size();
printf("size of list:%d\n",n);
break;
case 3:
n=empty();
if(n==1)
printf("list is not empty");
else
printf("list is  empty");


break;
case 4:
printf("enter location of item to find\n");
scanf("%d",&loc);
n=value_at(loc);
printf("value at given location is %d\n",n);
break;
case 5:
printf("Enter item to be pushed\n");
scanf("%d",&n);
push_front(n);
break;
case 6:
    n= pop_front();
    printf("removed item %d\n",n);
break;
case 7:
    exit(0);
    break;
case 8:
    n=pop_back();
    printf("deleted item:%d",n);
    break;
case 9:
    printf("enter item to insert at last\n");
    scanf("%d",&item);
push_back(item);
    break;
case 10:
    n=front();
    printf("first item of the list:%d\n",n);
    break;
case 11:
    n=back();
    printf("last item of the list:%d\n",n);
    break;
case 12:
    printf("enter   item and index to be inserted\n");
    scanf("%d",&item);
    scanf("%d",&n);
    inserts(item,n);
    break;
case 13:
    printf("enter the index\n");
    scanf("%d",&n);
    erase(n);

    break;
case 14:
    printf("enter position from last\n");
    scanf("%d",&n);
    item=value_at_end(n);
    printf("value at %d position from last %d",n,item);
    break;
case 15:
    reverse();
    break;
case 16:
    printf("enter the new item for replacement\n");
    scanf("%d",&item);

    removes(item);
    break;

default:
    printf("wrong choice");




}
}

}

void push_front(int item)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=item;

    if (start==NULL)
    {start=tail=temp;
    temp->next=NULL;
    }
    else
    {

     temp->next=start;
    start=temp;
    }




}
void display()
{

struct node *temp=start;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;


    }
}
int size()
{

    struct node *temp=start;
    int count=0;
    while(temp!=NULL)
    {

        count++;
        temp=temp->next;

    }
    return count;

}
int empty()
{
int n=1;

if (start==NULL)
{
    n=0;
    return n;

}
else
    return n;

}
int value_at(int loc)

{
  int count=0;
    struct node *temp=start;

while(count!=loc)
    {
        temp=temp->next;
        count++;

    }
    return temp->data;

}
int pop_front()
{int n;
struct node *temp;

    if (start==NULL)
    {printf("string is empty");
        return -1;
    }
    else
    {
        n=start->data;
        temp=start;
        start=temp->next;
        free(temp);
        return n;

    }
}
int pop_back()
{int n;
   struct node *temp=start,*t;
   if (start==NULL)
    {printf("string is empty");
    return -1;
    }
   while(temp!=tail)
   {
       t=temp;
       temp=temp->next;
   }
  tail=t;
  t->next=NULL;
  n=temp->data;
  free(temp);
  return n;
}
void push_back(int item)
{
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
        printf("no memory is allocated");
    else
    {


    temp->data=item;
    if(start==NULL)
    {
        start=tail=temp;
        temp->next=NULL;
    }
    else{
        tail->next=temp;
        tail=temp;
        temp->next=NULL;

    }
    }
}
void inserts(int item, int n)
{
    struct node *temp=start,*p;

    int count=1;
    while(count<=n-1);
    {
      count++;
      temp=temp->next;

    }

    p=(struct node *)malloc(sizeof(struct node));
    p->next=temp->next;
    temp->next=p;
    p->data=item;

}
void reverse()
{
    struct node *initial=start, *prev=NULL, *temp=NULL;
    while(initial!=NULL)
    {

        temp=initial->next;
        initial->next=prev;
        prev=initial;
        initial=temp;
    }
     tail=start;
     start=prev;

}
void removes(int item)
{
    start->data=item;

}
void erase(int  n)
{


int count=0;
struct node *temp=start,*t;
if(n==1)
    start=start->next;
else{

while(count<n)
{count++;
t=temp;
temp=temp->next;
}
t->next=temp->next;
free(temp);
}
}
int value_at_end(int pos)
{
    int t,n;


t=size();
n=t-pos+1;
t=value_at(n-1);
return t;
}


int front(){
return(start->data);
}
int back()
{
    return(tail->data);
}

