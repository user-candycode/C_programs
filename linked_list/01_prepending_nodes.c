#include <stdio.h>
#include<stdlib.h>


typedef struct node{
    int number;
    struct node *next;
}node1;

int main(int argc,/*string argv[]*/ char *argv[])
{
    node1 *list = NULL;
    
    // Entering a data into list i.e creating a linked list
    for (int i=1;i<argc; i++){
        // printf("%s\n",argv[i]);
        
        int number = atoi(argv[i]);
        
        // getting a new mwmory from heap
        node1 *n = malloc(sizeof(node1));
        if (n==NULL){
            // free heap memory thus far
            return 1;
        }
        
        // A new node created
        n->number = number;
        n->next = NULL;
        
        // next of new node points to old list resulting a compleately new list having new node as first node and rest attached after to it
        n->next = list;
        
        // the variable holding old list is removed and reassigned to point to this new begining node only.
        list = n;
    }
    
    // Printing a list
    node1 *temp=list;
    while(temp!=NULL){
        printf("%d ",temp->number);
        temp=temp->next;
    }
    return 0;
}
