#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
    int data;
    struct Node* link;
};
struct Node* head = NULL;
void print()
{
    struct Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<<"\t";
        temp = temp -> link;
    }
}
void insert(int value)
{
    struct Node* temp = (struct Node*) malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> link =NULL;
    if(head == NULL)
    {
        head = temp;
    }
    else
    {
        struct Node* t;
        t = head;
        while (t -> link != NULL)
        {
            t = t -> link;
        }
        t -> link = temp;
    }

}
int main()
{
    insert(3);
    insert(5);
    insert(10);
    print();

    return 0;
}
