#include<iostream>
using namespace std;

class Per
{
    protected:
    int mark[30],per;

    public:
            void calPer(int mark[])
            {
                int sum=0;
                for(int i=0;i<5;i++)
                {
                    sum=sum+mark[i];
                }
                per=sum/5;
            }

};

class CSE : public Per
{
    private:
    char name[30];
    int id;
    char adds[30];
    char year[20];

    public:
            CSE(char name[],int id,char adds[],char year[])
            {
                strcpy(this->name,name);
                this->id=id;
                strcpy(this->name,name);
                strcpy(this->name,name);
            }
            void showCSEPer()
            {

            }
};

class ENTC 
{
    private:
    char name[30];
    int id;
    char adds[30];
    char year[20];

    public:
            ENTC(char name[],int id,char adds[],char year[])
            {
                strcpy(this->name,name);
                this->id=id;
                strcpy(this->name,name);
                strcpy(this->name,name);
            }

            void showENTCPer()
            {
                
            }
};

int main()
{
    int mark[30];
    // cse
    char name[30];
    int id;
    char adds[30];
    char year[20];
    cout<<"enter the mark:\n";
    for(int i=0;i<5;i++)
    {
        cin>>mark[i];
    }

    // Per class 
    Per p;
    p.calPer();

    // CSE class
    CSE cse(name,id,adds,year);
    cse.showCSEPer();
}