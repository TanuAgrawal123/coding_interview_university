#include<stdio.h>
#include<stdlib.h>
struct node {
struct node *next;
int data;


};
struct node *front=NULL;
struct node *tail=NULL;
void enqueue(int item);
int dequeue();
int empty();
void display();
int main()
{
int ch, item;
while(1)
{
printf("enter choice\n 1.insertion \n 2.deletion\n 3.exit\n 4. display\n");

scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter item to be inserted");
scanf("%d",&item);

enqueue(item);
break;
case 2:
item=dequeue();
if(item!=-1)
printf("deleted item is : %d \n",item);
else{
    printf("empty queue");

}
break;
case 3:
exit(0);
case 4:
    printf("item in the queue\n");
    display();

break;
default:
printf("wrong choice\n");


}
}
}
void enqueue(int item)
{
struct node *n;
n=(struct node*)malloc(sizeof(struct node));
n->data=item;
n->next=NULL;
if(tail==NULL)
front=tail=n;
else{
tail->next=n;
tail=n;

}

}
int dequeue()
{ int item=-1;
struct node *n;
if(empty())
printf("queue is emty\n");

else{
item=front->data;
n=front;
front=front->next;
free(n);
}
return item;




}
int empty()
{int t=0;
if(front==NULL)
t=1;
return t;

}
void display()
{
  struct node *n;
  n=front;
  while(n!=tail)
  {
      printf("%d  ",n->data);
n=n->next;

  }
  printf("%d\n",tail->data);

}
