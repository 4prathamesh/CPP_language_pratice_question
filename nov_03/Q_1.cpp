// Q.1 WAP to Create a class name as MergeArray with a parameterised constructor and 
// two function void performMeger( ) and void sortDesc( ).
// MergeArray(int [ ] , int [ ])
// {
// // this constructor can accept the array.
// }
// void performMeger( ) 
// {
// //this function can use merge two array.
// }
// void sortDesc()
// {
// //Sort merge array in descending order.
// }

#include<iostream>

using namespace std;

int len=3;

class MergeArray
{
    int *a1,*a2,a3[6];

    public:
        MergeArray(int arr1[],int arr2[])
        {
            a1=arr1;
            a2=arr2;

        }
        void performMeger()
        {
            for(int i=0;i<3;i++)
            {
                a3[i]=a1[i];
                a3[len]=a2[i];
                len++;
            }
            cout<<"meger array\n";
            for(int i=0;i<6;i++)
            {
                cout<<a3[i];
            }
        }
        void sortDesc()
        {
            for(int i=0;i<6;i++)
            {
                for(int j=i+1;j<6;j++)
                {
                    if(a3[i]<a3[j])
                    {
                        int temp=a3[i];
                        a3[i]=a3[j];
                        a3[j]=temp;
                    }
                }
            }
            cout<<"\narray in descending order\n";
            for(int i=0;i<6;i++)
            {
                cout<<a3[i];
            }
        }
};

int main()
{
    int arr1[3],arr2[3];
    cout<<"enter the first array element :\n";
    for(int i=0;i<3;i++)
    {
        cin>>arr1[i];
    }
    cout<<"enter the second array element:\n";
    for(int i=0;i<3;i++)
    {
        cin>>arr2[i];
    }

    MergeArray M(arr1,arr2);
    M.performMeger();
    M.sortDesc();
    return 0;
}