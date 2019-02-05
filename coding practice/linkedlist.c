#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};
struct node *start= NULL;

int size();
void push_front(int n);
int pop_front();
void display();
int empty();
int value_at(int loc);
int main()
{
int ch,n,loc;
while(1)
{


printf("\n Enter the choice\n 1.Display\n 2.size \n 3 check empty \n 4.value at particular location\n 5 pushing at front\n 6 poping at front\n 7 exit\n");
scanf("%d",&ch);


switch (ch)
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
    {start=temp;
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
