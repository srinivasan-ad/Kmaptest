#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    struct node *current = (struct node *)malloc(sizeof(struct node));
    head->data = 45;
    head->link = current;
    printf("value of data is %d", head->data);
    current->data = 5;
    current->link = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    head->link->link = current;
    current->data = 10;
    current->link = NULL;
    printf("value of data is %d", head->link->data);
    printf("value of data is %d", current->data);
}
