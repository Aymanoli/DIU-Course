#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

int main()
{
    struct node *head=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    //struct node *p = head;
    head = (struct node *)malloc(sizeof(struct node));
    //p = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 45;
    head->next = second;

    second->data = 95;
    second->next = third;

    third->data = 25;
    third->next = NULL;

    while(head!=NULL){
        printf("%d->", head->data);
        head=head->next;
    }
}

