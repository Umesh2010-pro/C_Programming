#include<stdio.h>
#include<stdlib.h>

//------DEFINING A STRUCTURE-------------------------------

struct node 
{
    int data;
    struct node *next;
};


struct node *head = NULL;

//------CREATING A SINGLE LINKED LIST---------------------------------

void create()
{
    struct node *temp, *newnode;
    int n, i;

    printf("Enter number of nodes to create : \n");
    scanf("%d", &n);
    
    for(i=1; i<=n; i++)
    {
        newnode = malloc(sizeof(struct node));

        printf("Enter value into the new node : ");
        scanf("%d", &(newnode -> data));

        newnode -> next = NULL;
        
        if(head == NULL)
            head = newnode;
        else
            temp -> next = newnode;

        temp = newnode;
    }
}

//--------INSERTING A NODE AT THE BEGINNING OF SINGLE THE LINKED LIST---------------

void insert_beg()
{
    struct node *newnode;

    newnode = malloc(sizeof(struct node));
    printf("\nEnter value into newly inserting node : ");
    scanf("%d", &(newnode -> data));
    
    newnode -> next = head;
    head = newnode;
}

//------DISPLAYING THE LINKED LIST------------------------------

void display()
{
    struct node *temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp -> next;
    }

    printf("NULL\n");
}

//-----------MAIN METHOD-------------------------------

int main()
{
    int ch;

    while(1) {

    printf("-------SINGLE LINKED LIST MENU-------\n");
    printf("1. Create (Only once allowed)\n2. Insert at beginning of linked list\n3. Display\n4. Exit\nEnter your choice : ");
    scanf("%d", &ch);
    
    //----------USER INPUT MENU SWITCH CASE----------------

    switch(ch)
    {
        case 1:
            create();
            break;
        case 2:
            insert_beg();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice !");
            break;
    }
    }

    return 0;
}