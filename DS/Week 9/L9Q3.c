#include <stdio.h>
#include <stdlib.h>

typedef struct node *Nodeptr;

struct node
{
    char data;
    Nodeptr next;
};

Nodeptr getnode()
{
    Nodeptr temp;
    temp = (Nodeptr)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("List Full");
        return NULL;
    }
    return temp;
}

int isEmpty(Nodeptr list)
{
   if(list==NULL)
    {
        return 1;
    }
   return 0;
}


Nodeptr InsertLast(Nodeptr first,int item)
{
    Nodeptr temp,rear;
    temp=getnode();
    temp->data = item;
    rear=first;
    temp->next = first;
    if(isEmpty(first))
    {
        temp->next=temp;
        return temp;
    }
    else
    {
        while(rear->next!=first)
        {
            rear=rear->next;
        }
        rear->next=temp;
        return first;
    }
}

void Display(Nodeptr first)
{
    Nodeptr temp;
    if(isEmpty(first))
    {
        printf("\nList is Empty\n");
    }
    else
    {
        temp=first;
        while(temp->next!=first)
        {
            printf("%c\t",temp->data);
            temp=temp->next;
        }
        printf("%c\n",temp->data);
    }
}
Nodeptr sortlist(Nodeptr first)
{
    Nodeptr temp=first,rear;
    char x;
    if(isEmpty(temp))
    {
        return NULL;
    }
    else
    {
        do
        {
            rear=temp->next;
            while(rear!=temp)
            {
                if(temp->data < rear->data)
                {
                    x=temp->data;
                    temp->data=rear->data;
                    rear->data=x;
                }
                rear=rear->next;
            }
            temp=temp->next;
        }while(temp->next!=first);
    }
    return temp;
}

void main()
{
    Nodeptr first=NULL,second=NULL,temp,final=NULL;
    first=InsertLast(first,'d');
    first=InsertLast(first,'e');
    first=InsertLast(first,'f');
    second=InsertLast(second,'a');
    second=InsertLast(second,'b');
    second=InsertLast(second,'c');
    printf("LIST 1 : \n");
    Display(first);
    printf("LIST 2 : \n");
    Display(second);
    temp=first;
    while(temp->next!=first)
    {
        final=InsertLast(final,temp->data);
        temp=temp->next;
    }
    final=InsertLast(final,temp->data);
    temp=second;
    while(temp->next!=second)
    {
        final=InsertLast(final,temp->data);
        temp=temp->next;
    }
    final=InsertLast(final,temp->data);
    final=sortlist(final);
    printf("Final List : \n");
    Display(final);
}