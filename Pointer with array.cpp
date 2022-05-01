#include <iostream>
using namespace std;

    class pointer {
        public:
       void print()
       {
        int a[5] = {1,2,3,4,5};
        int *ptr;
        ptr = &a[3];
    //cout<<(a[0]+a[1]+a[2]+a[3]+a[4]);
       cout<<*ptr<<endl;
       cout<<*(ptr+1)<<endl;
       }

       int sumOfArrayElement(int *a)
       {
           int sum = 0;
           for(int i=0; i<5; i++)
           {
               sum += *a+i;
           }
               //cout<<endl<<"The summation of the array element is = "<<sum<<endl;
           return sum;
       }
    };

    class pointerWithFunction
    {
    public:
        void Swap(int *n1, int n2)
        {
            int temp;
            temp = *n1;
            *n1 = n2;
            n2 = temp;
            cout<<"\n\nFirst Number = "<<*n1<<" and second number = "<<n2<<endl;
        }
    };

int main()
{
    int a[5] = {1,2,3,4,5};
    pointer obj;
    obj.print();
    cout<<endl<<obj.sumOfArrayElement(a);

    pointerWithFunction ob;
    int num1 = 10, num2 = 5;
    ob.Swap(&num1, num2);
}
