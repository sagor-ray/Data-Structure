#include <iostream>
using namespace std;
int main()
{
    char ch =  'a';
    char *ptr ;
    ptr = &ch;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<&ptr;
}
