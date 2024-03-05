#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void count_node(struct node *head)
{
    int count = 0;
    struct node *ptr = head;
    while (ptr != NULL)
    {
        count++;
        ptr = ptr->link;
    }
    printf("total number of nodes : %d", count);
}
void print_node(struct node *head)
{
    struct node *ptr = head;
    while (ptr != NULL)
    {

        printf("\ndata of node : %d", ptr->data);
        ptr = ptr->link;
    }
}
void node_at_end(struct node *head, int data)
{
    struct node *ptr = head;
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;
    while (ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = temp;
}
void node_at_beg(struct node **head, int data)
{

    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    ptr->link = NULL;

    ptr->link = *head;
    *head = ptr;
   
}
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *current = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = current;
    current->data = 5;
    current->link = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    head->link->link = current;
    current->data = 10;
    current->link = NULL;
    node_at_beg(&head, 88);
    node_at_end(head, 33);
    count_node(head);
    print_node(head);
}
