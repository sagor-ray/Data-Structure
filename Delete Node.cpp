#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};
bool found = false;
struct Node *createNode(int ar[], int Size)
{
    struct Node *head = NULL, *temp = NULL, *current = NULL;
    int i;
    for(i=0; i<Size; i++)
    {
        temp =(struct Node *) malloc(sizeof(struct Node));
        temp ->data = ar[i];
        temp ->link = NULL;
        if(head == NULL)
        {
            head  = temp;
            current = temp;
        }
        else
        {
            current ->link = temp;
            current = current ->link;
        }
    }
    return head;
}
void deleteNode(struct Node* head, int value)
{
    cout<<"Enter the value which you want to delete from the list: ";
    cin>>value;
    struct Node *temp = head, *test;
    while(temp->link != NULL)
    {
        if(temp->data == value)
        {
            found = true;

            if(value == head->data)
            {
                head = head ->link;
            }
            else{
                test->link = temp->link;
            }
        }

        test = temp;
        temp= temp->link;

    }
    if(temp->link == NULL && temp->data == value)
    {
        found = true;
        test->link = temp->link;
    }
    if(found == true)
    {
         while(head != NULL)
    {
        cout<<head ->data<<" ";
        head = head ->link;
    }
    cout<<"Null\n";
    }
    else{
        cout<<"Value not found!!!";
    }

}

int main()
{
    struct Node *head;
    int value;
    int arr[5] = {1,3,3,4,5};
    head = createNode(arr,5);
    while(head != NULL)
    {
        cout<<head ->data<<" ";
        head = head ->link;
    }
    cout<<"Null\n";
    head = createNode(arr,5);
    deleteNode(head,value);
    return 0;
}

