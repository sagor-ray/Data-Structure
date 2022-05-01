#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int *ptr;
    ptr =(int*) calloc(5 , sizeof(int));
    if(ptr == NULL)
    {
        cout<<"Memory allocation is failed."<<endl;
    }
    else
    {
        cout<<"Memory allocation is successful"<<endl;
    }
    cout<<*ptr;
}

