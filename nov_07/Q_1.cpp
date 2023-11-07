// Create a class named 'Programming'. While creating an object of the class, if nothing is
// passed to it, then the message "I love programming languages" should be printed. If some
// String is passed to it, then in place of "programming languages" the name of that String
// variable should be printed.
// For example, while creating object if we pass "Java", then "I love Java" should be printed.
#include<iostream>
#include<string.h>
using namespace std;
class Programming
{
    public:
            Programming(char str[])
            {
                if(strcmp(str,'0')==0)
                {
                    cout<<"I love programming languages";
                }
                else
                {
                    cout<<"I love "<<str;
                }   
            }
};

int main()
{
    char str[20];
    cout<<"enter the stirng\n";
    cin>>str;

    Programming P(str);
    return 0;
}