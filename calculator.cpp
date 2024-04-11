#include<iostream>
#include<conio.h>
#include<windows.h>
#include<math.h>
using namespace std;

char key[21];
int call = 1;
int count;
int ind = 0;
int i;
double ans = 0;
char op;
int x;
int last = 0;

void structure()
{

    string arr[30][24];
    fill_n(&arr[0][0],24*30,"..");

    for(int i=0;i<27;i++)
    {
        int m = 0;
        for(int j=0;j<24;j++)
        {
            if(i==2 && j!=0 && j!=23)
                cout<<"  ";
            else if(i==3 && j!=0 && j!=23) 
            {
                if(count != 0)
                {
                    if(j == 23-count+m)
                    {
                        cout<<key[m]<<" ";
                        m++;  
                    }
                        
                    else
                        cout<<"  ";
                }
                else
                    cout<<"  ";
            }

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
            {
                if(j!=3)
                    cout<<"  ";
                else
                    cout<<" 4";
            }
            else if(i==13 && (j==8 || j==9 || j==10 || j==11))
                cout<<"  ";
            else if(i==14 && (j==8 || j==9 || j==10 || j==11))
            {
                if(j!=9)
                    cout<<"  ";
                else
                    cout<<" 5";
            }
            else if(i==13 && (j==14 || j==15 || j==16 || j==17))
                cout<<"  ";
            else if(i==14 && (j==14 || j==15 || j==16 || j==17))
            {
                if(j!=15)
                    cout<<"  ";
                else
                    cout<<" 6";
            }
            else if(i==13 && (j==20 || j==21))
                cout<<"  ";
            else if(i==14 && (j==20 || j==21))
            {
                if(j!=20)
                    cout<<"  ";
                else
                    cout<<" -";
            }


            else if(i==18 && (j==2 || j==3 || j==4 || j==5))
                cout<<"  ";
            else if(i==19 && (j==2 || j==3 || j==4 || j==5))
            {
                if(j!=3)
                    cout<<"  ";
                else
                    cout<<" 7";
            }
            else if(i==18 && (j==8 || j==9 || j==10 || j==11))
                cout<<"  ";
            else if(i==19 && (j==8 || j==9 || j==10 || j==11))
            {
                if(j!=9)
                    cout<<"  ";
                else
                    cout<<" 8";
            }
            else if(i==18 && (j==14 || j==15 || j==16 || j==17))
                cout<<"  ";
            else if(i==19 && (j==14 || j==15 || j==16 || j==17))
            {
                if(j!=15)
                    cout<<"  ";
                else
                    cout<<" 9";
            }
            else if(i==18 && (j==20 || j==21))
                cout<<"  ";
            else if(i==19 && (j==20 || j==21))
            {
                if(j!=20)
                    cout<<"  ";
                else
                    cout<<" *";
            }


            else if(i==23 && (j==2 || j==3 || j==4 || j==5))
                cout<<"  ";
            else if(i==24 && (j==2 || j==3 || j==4 || j==5))
            {
                if(j!=3)
                    cout<<"  ";
                else
                    cout<<"<-";
            }
            else if(i==23 && (j==8 || j==9 || j==10 || j==11))
                cout<<"  ";
            else if(i==24 && (j==8 || j==9 || j==10 || j==11))
            {
                if(j!=9)
                    cout<<"  ";
                else
                    cout<<" 0";
            }
            else if(i==23 && (j==14 || j==15 || j==16 || j==17))
                cout<<"  ";
            else if(i==24 && (j==14 || j==15 || j==16 || j==17))
            {
                if(j!=15)
                    cout<<"  ";
                else
                    cout<<" .";
            }
            else if(i==23 && (j==20 || j==21))
                cout<<"  ";
            else if(i==24 && (j==20 || j==21))
            {
                if(j!=20)
                    cout<<"  ";
                else
                    cout<<" /";
            }

            else
                cout<<arr[i][j];
        }
        cout<<endl;
    }
}


void display()
{
    if(!kbhit())
    {
        char input = getch();
        
        switch(input)
        {
            case 'x':
            {
                call = 0;
                break;
            }
            case '+':
            {
                key[ind] = input;
                ind++;
                count++;
                op = '+';
                i++;
                break;
            }
            case '-':
            {
                key[ind] = input;
                ind++;
                count++;
                op = '-';
                i++;
                break;
            }
            case '*':
            {
                key[ind] = input;
                ind++;
                count++;
                op = '*';
                i++;
                break;
            }
            case '/':
            {
                key[ind] = input;
                ind++;
                count++;
                op = '/';
                i++;
                break;
            }
            case 13:
            {
                cout<<ans;
                call = 0;
                break;
            }
            default:
            {
                if(isdigit(input))
                {
                    key[ind] = input;
                    //last = input-48;
                    ind++;
                    count++;
                    if(i!= 0)
                    {
                        if(op == '+')
                        {
                            ans = ans + (input-48);
                            i--;
                            x = 0;
                        }
                        else if(op == '-')
                        {
                            x = 0;
                            ans = ans - (input-48);
                            i--;
                        }
                        else if(op == '*')
                        {
                            x = 0;
                            ans = ans * (input-48);
                            i--;
                        }
                        else 
                        {
                            x = 0;
                            ans = ans / (input-48);
                            i--;
                        }
                        
                    }
                    else
                    {
                        if(ans == 0)
                            ans = input-48;
                        else
                        {
                            x++;
                            if(op == '+')
                            {
                                ans = ans - last;
                                ans = ans + ((10*last)+(input-48));
                            }
                            else if(op == '-')
                            {
                                ans = ans + last;
                                ans = ans - ((10*last)+(input-48));
                            }
                            else if(op == '*')
                            {
                                ans = ans/last;
                                ans = ans * ((10*last)+(input-48));
                            }
                            else
                            {
                                ans = ans*last;
                                ans = ans / ((10*last)+(input-48));
                            }
                            
                        }
                        
                    }
                    if(x>0)
                    {
                        last = (last*10) + (input-48);
                    }
                    else 
                        last = input-48;
                    break;
                }
                
            }
        }
    }
}

void menu()
{
    while(call != 0)
    {
        structure();
        display();
    }
}

int main()
{
    fill(key,key+12,'a');
    call = 1;
    menu();
    cout<<endl<<"Exiting"<<endl;
    system("pause");

    return 0;
}