// Q.2 Suppose you have a Piggie Bank with an initial amount of $50 and you have to add some more amount to it. 
// 	Create a class 'AddAmount' with a data member named 'amount' with an initial value of $50. Now make two constructors 
// 	of this class as follows:
// 1 - without any parameter - no amount will be added to the Piggie Bank
// 2 - having a parameter which is the amount that will be added to the Piggie Bank
// Create an object of the 'AddAmount' class and display the final amount in the Piggie Bank.

#include<iostream>
using namespace std;
class AddAmount
{
    int amo;
    public:
            AddAmount()
            {
                amo=50;
            }
            AddAmount(int add)
            {
                amo=50+add;  // suppose hear amo=amo+add thst time arror is occerse
            }
            void display()
            {
                cout<<"Amount of piggie bank is:\n"<<amo;
            }
};
int main()
{
    AddAmount A;
    AddAmount A1(20);
    A1.display();
    return 0;
}