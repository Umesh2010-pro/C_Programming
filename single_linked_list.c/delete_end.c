#include<stdio.h>
#include<stdlib.h>

//------DEFINING A STRUCTURE---------
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

//-----CREATING A SINGLE LINKED LIST----------
void create()
{
    struct node *newnode, *temp;
    int n, i;

    printf("Enter number of nodes in the single linked list: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        newnode = malloc(sizeof(struct node));

        if(newnode == NULL)
        {
            printf("\nMemory allocation is unsuccessful");
            return;
        }

        printf("\nEnter data into the node %d : ", i);
        scanf("%d", &(newnode -> data));

        newnode -> next = NULL;

        if(head == NULL)
            head = newnode;
        else
            temp -> next = newnode;
        
        temp = newnode;
    }
}

//-------DELETING A NODE AT ENDING OF THE SINGLE LINKED LIST-------------------
void delete_end()
{
    struct node *temp = head;

    if (head == NULL)
    {
        printf("\nList is empty !");
        return;
    }
    
    if(head -> next == NULL)
    {
        free(head);
        head = NULL;
        return;
    }
    
    while(temp->next->next != NULL)
        temp = temp -> next;
    
    free(temp -> next);
    temp -> next = NULL;
    
}

//-----------DISPLAYING THE SINGLE LINKED LIST------------------
void display()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> next;
    }
    printf("NULL");

}

//---------MAIN METHOD------------------
int main()
{
    int ch;

    while(1)
    {
        printf("-------SINGLE LINKED LIST MENU--------\n1. Create (Only once)\n2. Delete at end of list\n3. Display\n4. Exit\nEnter your choice : ");
        scanf("%d", &ch);

        //-----SWITCH CASE MENU OF SINGLE LINKED LIST-----------
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            delete_end();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice");
            break;
        }

    }

    return 0;
}