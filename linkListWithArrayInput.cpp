#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

struct Node* createLinkList(int ar[], int n)
{
    struct Node *temp = NULL, *head = NULL, *current = NULL;
     for(int i=0; i<n; i++)
     {
         temp =(struct Node*) malloc(sizeof(struct Node));
         temp ->data = ar[i];
         temp ->link = NULL;

         if(head == NULL)
         {
             head = temp;
             current = temp;
         }
         else{
            current ->link = temp;
            current = current ->link;
         }
     }
     return head;
}

int Search(struct Node *head, int x)
{
    int index=1;
    while(head != NULL)
    {
        if(head ->data == x)
        {
            cout<<"Value exist and the index is: "<<index;
        }
        index++;
        head = head ->link;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the array element number: ";
    cin>>n;
    int arr[n];
    cout<<"\nEnter the "<<n<<" elements: ";
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    struct Node *head;
    head = createLinkList(arr,n);

    cout<<"The following linked list is : ";
    while(head != NULL)
    {
        cout<<head ->data<<" ";
        head = head ->link;
    }
    cout<<"NULL\n\n";

    head = createLinkList(arr,n);
    int x;
    cout<<"Enter the number which are you want to search: ";
    cin>>x;
    Search(head,x);

   return 0;
}




