#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;
class Occeurence
{
    int even=0,odd=0;
    public:
    void countFrequency(int arr[])
    {
        even=0,odd=0;
        for(int i=0;i<5;i++)
        {
            if(arr[i]%2==0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout<<"even number is\n"<<even<<"\n"<<"odd number is\n"<<odd<<"\n";

    }
    void countFrequency(char ch[], int l)
    {
        even=0;
        odd=0;
        for(int i=0;i<l;i++)
        {
            if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
            {
                even++;
            }
            else{
                odd++;
            }
        }
        cout<<"vowel is \n"<<even<<"\n"<<"consonent is \n"<<odd<<"\n";
    }
    void countFrequency(char ch[])
    {
        int i=0,alp=0,dig=0,sp=0;
        while(ch[i]!='\0')
        {
            if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z')
            {
                alp++;
            }
            else if(ch[i]>='1' && ch[i]<='9')
            {
                dig++;
            }
            else
            {
                sp++;
            }
        }
        cout<<"aplphabet is \n"<<alp<<"\n"<<"digit is \n"<<dig<<"\n"<<"special symbol\n"<<sp;
    }
};
int main()
{
    Occeurence O;
    int arr[20];
    char ch[20];
    cout<<"enter the array element :\n";
    for(int i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    
    _flushall();
    cout<<"enter the string \n";
    gets(ch);
    int l=strlen(ch);
    O.countFrequency(arr);
    O.countFrequency(ch,l);
    O.countFrequency(ch);

    return 0;
}