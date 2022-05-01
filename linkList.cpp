#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

int main()
{
    struct Node *a = NULL, *b = NULL, *c = NULL;
    a = (struct Node*) malloc(sizeof(struct Node));
    b = (struct Node*) malloc(sizeof(struct Node));
    c = (struct Node*) malloc(sizeof(struct Node));
    a ->data = 10;
    b ->data = 20;
    c ->data = 30;

    //create link
    a ->link = b;
    b ->link = c;
    c ->link = NULL;
    //traverse Node
    while(a != NULL)
    {
        cout<< a->data<<endl;
        a = a ->link;
    }
    return 0;
}
