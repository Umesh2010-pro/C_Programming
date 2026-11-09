#include<stdio.h>
#include<stdlib.h>

//----DEFINING A STRUCTURE-------------
struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;

//----CREATING A SINGLE LINKED LIST---------
void create()
{
    struct node *newnode, *temp;
    int n, i;
    
    printf("Enter number of nodes to create : \n");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        newnode = malloc(sizeof(struct node));
        
        if(newnode == NULL)
        {
            printf("Memory allocation is unsuccessful \n");
            return ;
        }
        
        printf("Enter data to insert in new node : \n");
        scanf("%d", &(newnode -> data));
        
        newnode -> next = NULL;
        
        if(head == NULL)
            head = newnode;
        else
            temp -> next = newnode;
        
        temp = newnode;
    }
}

//----INSERTING A NEW NODE AT A SPECIFIED POSITION------------------
void insert_pos()
{
    struct node *newnode, *temp;
    int pos, i;
    
    printf("Enter the position of node you want to insert : ");
    scanf("%d", &pos);
    
    if(pos < 1)
    {
        printf("Invalid position\n");
        return;
    
    }
    newnode = malloc(sizeof(struct node));
    
    if(newnode == NULL)
    {
        printf("Memory allocation unsuccessful\n");
        return;
    }
    
    printf("Enter value into newly inserting node : ");
    scanf("%d", &(newnode -> data));
    
    if(pos == 1)
    {
        newnode -> next = head;
        head = newnode;
    }
    else {
        temp = head;

        for(i = 1; i < pos - 1 && temp != NULL ; i++)
            temp = temp -> next;
        
        if(temp == NULL)
        {
            printf("Invalid position\n");
            free(newnode);
            return;
        }
        
        newnode -> next = temp -> next;
        temp -> next = newnode;
    }
}

//----DISPLAYING THE SINGLE LINKED LIST-----------
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

//-------MAIN METHOD-----------------------
int main()
{
    int ch;
    
    while(1)
    {
        printf("-------SINGLE LINKED LIST MENU-------\n1. Create (Only once)\n2. Insert at specific position\n3. Display\n4. Exit\nEnter your choice : ");
        scanf("%d", &ch);

        //-----USER LINKED LIST MENU--------------
        switch (ch)
        {
        case 1:
            create();
            break;
        case 2:
            insert_pos();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid Choice\n");
            break;
        }
    }
    
    return 0;
}
