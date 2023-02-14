#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    int data;
    struct node *next;
}node;

node *createLinkedList(int n);
void displayList(node *head);


int main ()
{
    int n;
    node *HEAD = NULL;
    printf("\n How many nodes: ");
    scanf("%d", &n);
    HEAD = createLinkedList(n);
    displayList (HEAD);
}

node *createLinkedList(int n)

{
    int i;
    node *head=NULL;
    node *temp=NULL;
    node *p=NULL;

    for(i=0;i<n;i++){
        //let us create individual isolated node
        temp = (node*)malloc(sizeof(node));
        printf("\nEnter the data for node number %d: ",i+1);
        scanf("%d",&(temp->data));
        temp->next = NULL;

        if(head==NULL) //if list is currently empty, then make temp as first node
        {
            head = temp;
        }
        else{
            p = head;
            while(p->next !=NULL)
                p = p->next;
            p->next = temp;
        }
    }
    return head;
}

void displayList(node *head)
{
    node *p=head;
    while(p!=NULL)
    {
        printf("%d-> ",p->data);
        p = p->next;
    }
}
