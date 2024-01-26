#include<iostream>

using namespace std;

int main()
{

    string arr[30][24];
    fill_n(&arr[0][0],24*30,"..");

    for(int i=0;i<22;i++)
    {
        for(int j=0;j<24;j++)
        {
            if(i==3 && j!=0 && j!=23)
                cout<<"  ";
            else if(i==2 && j!=0 && j!=23)
                cout<<"  ";

            else if(i==9 && (j==2 || j==3 || j==4 || j==5))
                {
                    if(j!=3)
                        cout<<"  ";
                    else
                        cout<<" 1";
                }
            else if(i==8 && (j==2 || j==3 || j==4 || j==5))
                cout<<"  ";
            else if(i==8 && (j==8 || j==9 || j==10 || j==11))
                cout<<"  ";
            else if(i==9 && (j==8 || j==9 || j==10 || j==11))
                {
                    if(j!=9)
                        cout<<"  ";
                    else
                        cout<<" 2";
                }
            else if(i==8 && (j==14 || j==15 || j==16 || j==17))
                cout<<"  ";
            else if(i==9 && (j==14 || j==15 || j==16 || j==17))
                {
                    if(j!=15)
                        cout<<"  ";
                    else
                        cout<<" 3";
                }
            else if(i==8 && (j==20 || j==21))
                cout<<"  ";
            else if(i==9 && (j==20 || j==21))
                {
                    if(j==20)
                        cout<<" +";
                    else
                        cout<<"  ";
                }
            
            else if(i==13 && (j==2 || j==3 || j==4 || j==5))
                cout<<"  ";
            else if(i==14 && (j==2 || j==3 || j==4 || j==5))
                cout<<"  ";
            else if(i==13 && (j==8 || j==9 || j==10 || j==11))
                cout<<"  ";
            else if(i==14 && (j==8 || j==9 || j==10 || j==11))
                cout<<"  ";
            else if(i==13 && (j==14 || j==15 || j==16 || j==17))
                cout<<"  ";
            else if(i==14 && (j==14 || j==15 || j==16 || j==17))
                cout<<"  ";
            else if(i==13 && (j==20 || j==21))
                cout<<"  ";
            else if(i==14 && (j==20 || j==21))
                cout<<"  ";

            else if(i==18 && (j==2 || j==3 || j==4 || j==5))
                cout<<"  ";
            else if(i==19 && (j==2 || j==3 || j==4 || j==5))
                cout<<"  ";
            else if(i==18 && (j==8 || j==9 || j==10 || j==11))
                cout<<"  ";
            else if(i==19 && (j==8 || j==9 || j==10 || j==11))
                cout<<"  ";
            else if(i==18 && (j==14 || j==15 || j==16 || j==17))
                cout<<"  ";
            else if(i==19 && (j==14 || j==15 || j==16 || j==17))
                cout<<"  ";
            else if(i==18 && (j==20 || j==21))
                cout<<"  ";
            else if(i==19 && (j==20 || j==21))
                cout<<"  ";
            else
                cout<<arr[i][j];
        }
            
        cout<<endl;
    }
    system("pause");

    return 0;
}