#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int value;
    int row_position;
    int column_position;
    struct Node* next;
};

void create_new_node(struct Node** start, int non_zero_element, int row_index, int column_index)
{
    struct Node* temp, * r;
    temp = *start;
    
    if (temp == NULL)
    {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->value = non_zero_element;
        temp->row_position = row_index;
        temp->column_position = column_index;
        temp->next = NULL;
        *start = temp;
    }
    else
    {
        while (temp->next != NULL)
            temp = temp->next;
        
        r = (struct Node*)malloc(sizeof(struct Node));
        r->value = non_zero_element;
        r->row_position = row_index;
        r->column_position = column_index;
        r->next = NULL;
        temp->next = r;
    }
}

void Print(struct Node* start)
{
    struct Node* temp = start;
    
    printf("row_position: ");
    while (temp != NULL)
    {
        printf("%d ", temp->row_position);
        temp = temp->next;
    }
    printf("\n");
    
    printf("value: ");
    temp = start;
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct Node* start = NULL;
    
 
    create_new_node(&start, 5, 1, 1);
    create_new_node(&start, 10, 1, 2);
    create_new_node(&start, 15, 2, 1);
    create_new_node(&start, 20, 2, 2);
    
    Print(start);
    
    return 0;
}

          
          
          
          
          
          
          
          
          
    
    
    
    
    
    
    
         
   
   
   
    
