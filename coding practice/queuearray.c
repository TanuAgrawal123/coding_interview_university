#include<stdio.h>

void enqueue(int item);
int dequeue();
void display();
int empty();

int full();

int Queue[100],front=-1,rear=-1,size=100;
int main()
{
int ch,item;
while(1)
{
printf("enter choice\n 1. insertion \n 2 deletion \n 3. display\n 4 exit \n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter item to be inserted\n");
scanf("%d",&item);
enqueue(item);
break;
case 2:
item=dequeue();
if(item==1)
printf("queue is empty");
else
printf("deleted item%d\n",item);
break;
case 3:
printf("elements are:\n");
display();
break;
case 4:
exit(0);
default:
printf("wrong choice");




}
}
}
void enqueue(int item)
{
    if(full())
        printf("queue is full\n");
    else
    {if(rear==-1)
    {
        front=rear=0;
        Queue[rear]=item;
    }
    else
    {


        if(rear==size-1)
            rear=0;
            else
                rear=rear+1;

            Queue[rear]=item;


    }
}}
int dequeue()
{int item;

    if(empty())
        printf("queue is empty");
    else
    {item=Queue[front];
        if(front==size-1)
            front=0;
            else
                front=front+1;


    }

}
int full()
{int t=0;
    if((front==0&&rear==size-1)||front==rear+1)
        t=1;
    return t;

}
int empty()
{int t=0;
if(front==rear==-1)
    t=1;
return t;


}
void display()
{int i;
printf("%d %d",front,rear);

    if(empty())
        printf("no item\n");
    else
    {


        if(rear<front)
        {


        for(i=front;i<=size-1;i++)
    {

        printf("%d",Queue[i]);

    }
        for(i=0;i<=rear;i++)
            printf("%d",Queue[i]);
        }
        else if(front==rear)
            printf(Queue[front]);

        else
            {for(i=front;i<=rear;i++)
            printf("%d  ",Queue[i]);
    }}


}
