// Q.3 WAP to Create a class name as PalindromeApp with a two parameterised constructor and 
// two function void checkIntArray( ) and void checkCharArray( ).
// PalindromeApp(int [ ])
// {
// // this constructor can accept the integer array.
// }
// PalindromeApp(char [ ])
// {
// // this constructor can accept the charcter array.
// }
// void checkIntArray( ) 
// {
// //this function can use the array is palindrome or not.
// }
// void checkCharArray()
// {
// //this function can use the string is palindrome or not.
// }

#include<iostream>
#include<string.h>
using namespace std;
class PalindromeApp
{
    int *arr;
    char str[20];
    int flag;
    public:
            PalindromeApp(int arr[])
            {
                this->arr=arr;
                flag=1;
            }
            PalindromeApp(char str[])
            {
                strcpy(this->str,str);
            }
            void checkIntArray()
            {
                int end=4;
                for(int i=0;i<5;i++)
                {
                    if(arr[i]!=arr[end])
                    {
                        flag=0;
                        break;
                    }
                    end--;
                }
                if(flag)
                {
                    cout<<"is palindrome array\n";
                }
                else
                {
                    cout<<"is not palindrome array:\n";
                }
            }
            void checkCharArray()
            {
                int end=strlen(str)-1;
                for(int i=0;str[i]!='\0';i++)
                {
                    if(str[i]!=str[end])
                    {
                        flag=0;
                        break;
                    }
                    end--;
                }
                if(flag)
                {
                    cout<<"is palindrome string array\n";
                }
                else
                {
                    cout<<"is not palindrome string array:\n";
                }
            }
};
int main()
{
    int arr[20];
    char str[20];
    cout<<"enter the array element \n";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the char array:\n";
    cin>>str;
    PalindromeApp P(arr),P1(str);
    P.checkIntArray();
    P1.checkCharArray();
    return 0;
}