#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int main()
{

    //declaration

    struct node *head = NULL;
    struct node *temp, *newnode;
    int n, i;

    printf("Enter number of students : ");
    scanf("%d", &n);

    if (n < 3)
        printf("Minimum of 3 students of allowed \n");
    else {

    for(i = 1; i <= n; i++)
    {

        //dynamic memory allocation and initializing

        newnode = malloc(sizeof(struct node));

        printf("Enter marks of Student %d : \n", i);
        scanf("%d", &(newnode -> data));
        newnode -> next = NULL;
        
        if(head == NULL)
            head = newnode;
        else
            temp -> next = newnode;

        temp = newnode;
    }
        }
    //display

    printf("Linked List : \n");
    temp = head;
    
    while(temp != NULL)          //traversal logic
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }

    printf("NULL");
    
    return 0;
}