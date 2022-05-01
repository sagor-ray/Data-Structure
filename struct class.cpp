#include <iostream>
#include <stdlib.h>
using namespace std;


struct Class
{
    int salary;
    int age;
    double hight;
};
int main()
{
    struct Class karim, *rahim;
    karim.salary = 150000;
    cout<<karim.salary;
    return 0;
}
