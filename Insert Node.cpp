#include <iostream>
#include <stdlib.h>
using namespace std;
struct node* createLinkedList(int arr[], int n);
struct node* insertNodeAtBeginning(struct node* head, int value);
struct node* insertNodeAtEnd(struct node* head, int value);
struct node* insertNodeAtMeddle(struct node* head, int value, int position);
void printList(struct node* head);
struct node
{
    int data;
    struct node *link;
};

int main()
{
    int arr[] = {1,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    struct node* head = createLinkedList(arr,n);
    printList(head);
    head = insertNodeAtBeginning(head,0);
    printList(head);
    head = insertNodeAtEnd(head,6);
    printList(head);
    insertNodeAtMeddle(head,3,3);

    return 0;
}

struct node* createLinkedList(int arr[], int n)
{
    struct node *temp = NULL, *current = NULL, *head = NULL;
    for(int i = 0; i<n; i++)
    {
        temp =(struct node*) malloc(sizeof(struct node));
        temp->data = arr[i];
        temp->link = NULL;

        if(head == NULL)
        {
            head = temp;
            current = temp;
        }
        else
        {
            current->link = temp;
            current = current->link;
        }
    }
    return head;
}

struct node* insertNodeAtBeginning(struct node* head, int value)
{
    struct node *newHead,*temp;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->data = value;
    temp->link = head;
    newHead = temp;
    return newHead;
}

struct node* insertNodeAtEnd(struct node* head, int value)
{
    struct node *temp, *current=head;
    temp = (struct node*) malloc(sizeof(struct node));
    temp->data = value;
    temp->link = NULL;
    while(current->link != NULL)
    {
        current = current->link;
    }
    current->link = temp;

    return head;
}

struct node* insertNodeAtMeddle(struct node* head, int value, int position)
{
    struct node* temp = head;
    int counter = 0;
    while(temp != NULL)
    {
        counter++;
        if(counter == position)
        {
            struct node* newNode = (struct node*) malloc(sizeof(struct node));
            newNode->data = value;
            newNode->link = temp->link;
            temp->link = newNode;
        }
        temp = temp->link;
    }
    printList(head);
}

void printList(struct node* head)
{
    struct node *current = head;
    while(current != NULL)
    {
        cout<<current->data<<" ";
        current = current->link;
    }
    cout<<"NULL\n";
}
