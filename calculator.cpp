#include<iostream>

using namespace std;


int main()
{
    cout<<"---------------CALCULATOR---------------"<<endl<<endl;

    int i,j;

    for(i=0;i<24;i++)
        cout<<"..";
    
    cout<<endl;
    for(i=0;i<35;i++)
    {
        for(j=0;j<24;j++)
        {
            if(i==3)
                cout<<"..";
            else if(j==0)
                cout<<".";
            else if(j==23)
                cout<<"  .";
            else if(i==8 && j==1)
                cout<<" .";
            else 
                cout<<"  ";
        }
        cout<<endl;
        
    }

    for(i=0;i<24;i++)
        cout<<"..";

}