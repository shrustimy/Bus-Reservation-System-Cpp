#include<iostream>
using namespace std;
#define N 100
string driver[N],from[N],to[N];
int arrive[N],depart[N],i=0,num[N];

void install()
{
        cout<<"Enter Bus Number: ";
        cin>>num[i];
        cout<<endl;
        cout<<"Enter Driver's Name: ";
        cin>>driver[i];
        cout<<endl;
        cout<<"Arrival Time: ";
        cin>>arrive[i];
        cout<<endl;
        cout<<"Departure: ";
        cin>>depart[i];
        cout<<endl;
        cout<<"From: ";
        cin>>from[i];
        cout<<"To: ";
        cin>>to[i];
        i++;
}

void buses_available()
{
        for(int j=0;j<i;j++)
        {
                cout<<"*****************************************************************************************************"<<endl;
                cout<<"Bus Number: "<<num[j]<<endl;
                cout<<"Driver's Name: "<<driver[j]<<endl;
                cout<<"Arrival Time: "<<arrive[j]<<endl;
                cout<<"Departure Time: "<<depart[j]<<endl;
                cout<<"From: "<<from[j]<<endl;
                cout<<"To: "<<to[j]<<endl;
                cout<<"*****************************************************************************************************"<<endl;
        }
}

void reservation()
{
        
}

void show(){

}

 
int main()
{
    while(1)
    {
        cout<<"1. Install"<<endl;
        cout<<"2. Reservation"<<endl;
        cout<<"3. Show"<<endl;
        cout<<"4. Buses Available"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice"<<endl;
        int choice;
        cin>>choice;
        switch(choice)
        {
            case 1: install();
                    break;
            case 2: reservation();
                    break;
            case 3: show();
                    break;
            case 4: buses_available();
                    break;
            case 5: return 0;
                    break;
            default: cout<<"Invalid choice"<<endl;
                     break; 
        }
    
    }
}