#include<iostream>
#include<string.h>
using namespace std;

class Vehicle
{
    protected:
    //private:
    char vModel[50];
    long int Eno;
    float Vspeed;
    float fuelC;
    float fuelConsume;
    float fNeed;
    float dis;
    public:
            Vehicle(char vModel[],long int Eno,float Vspeed,float fuelC,float fuelConsume)
            {
                strcpy(this-> vModel,vModel);
                this-> Eno=Eno;
                this-> Vspeed=Vspeed;
                this-> fuelC=fuelC;
                this-> fuelConsume=fuelConsume;
            }
            // vehicle model name
            void setvModel(char vModel[])
            {
                strcpy(this-> vModel,vModel);
            }
            char * getvModel()
            {
                return vModel;
            }

            //Registration number
            void setEno(long int Eno)
            {
                this-> Eno=Eno;
            }
            long int getEno()
            {
                return Eno;
            }

            //vehicle speed:
            void setVspeed(float Vspeed)
            {
                this-> Vspeed=Vspeed;
            }
            float getVspeed()
            {
                return Vspeed;
            }

            //vehicle fuel capacity
            void setfuelC(float fuelC)
            {
                this-> fuelC=fuelC;
            }
            float getfuelC()
            {
                return fuelC;
            }

            //vehicle fule consumption
            void setfuelConsume(float fuelConsume)
            {
                this-> fuelConsume=fuelConsume;
            }
            float getfuelConsume()
            {
                return fuelConsume;
            }

            // calculate fuel need
            float fuelNeeded(int dis)
            {
                fNeed=dis/getfuelConsume();
                return fNeed;
                //cout<<"fule need for "<<dis<<"\t"<<fNeed;
            }

            // distance
            int distanceCovered(int T)
            {
                dis=getVspeed()*T;
                return dis;
            }

            void display()
            {
                cout<<"\nvehicle model name:\n";
                cout<<getvModel();
                cout<<"\nvehicle Registration number:\n";
                cout<<getEno();
                cout<<"\nthe vehicle speed:\n";
                cout<<getVspeed();
                cout<<"\nthe vehicle fuel capacity:\n";
                cout<<getfuelC();
                cout<<"\nthe vehicle fule consumption:\n";
                cout<<getfuelConsume();
            }

};

class Truck :public Vehicle
{
    private:
    float CargoW;
    public:
            Truck(float CargoW)
            {
                this->CargoW=CargoW;
            }
};

int main()
{
    char vModel[50];
    long int Eno;
    float Vspeed;
    float fuelC;
    float fuelConsume;

    cout<<"enter the details of vehicle\n";
    cout<<"enter the vehicle model name:\n";
    cin>>vModel;
    cout<<"enter the vehicle Registration number:\n";
    cin>>Eno;
    cout<<"enter the vehicle speed:\n";
    cin>>Vspeed;
    cout<<"enter the vehicle fuel capacity:\n";
    cin>>fuelC;
    cout<<"enter the vehicle fule consumption:\n";
    cin>>fuelConsume;
    Vehicle v(vModel,Eno,Vspeed,fuelC,fuelConsume);

    v.setvModel(vModel);
    v.setEno(Eno);
    v.setVspeed(Vspeed);
    v.setfuelC(fuelC);
    v.setfuelConsume(fuelConsume);

    // calculate fuel need
    int dis;
    cout<<"enter the distance for calculate the amount of fule:\n";
    cin>>dis;
    float n=v.fuelNeeded(dis);
    cout<<"fuel need for "<<dis<<"km "<<n<<" liter" ;

    // distance
    int T;
    cout<<"\nenter the time in hr for calculat the distance\n";
    cin>>T;
    cout<<"\nIn the "<<T<<"hr thay cover "<<v.distanceCovered(T)<<"km distance.\n";

    v.display();

    // second class
    float wl;
    cout<<"\nenter the cargo weight limit\n";
    cin>>wl;
    
    return 0;
}