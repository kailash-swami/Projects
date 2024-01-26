#include<iostream>

using namespace std;

char p[10];
int count;
int result;
int restart = 0;

void player1();
void player2();
void start();

int condition()
{
    int check = 0;
    if(p[1] == p[2] && p[1] == p[3] && p[1] != '-'){
        check = check+1;
        return check;
    }
    else if(p[1] == p[4] && p[1] == p[7] && p[1] != '-'){
        check = check+1;
        return check;
    }
    else if(p[1] == p[5] && p[1] == p[9] && p[1] != '-'){
        check = check+1;
        return check;
    }
    else if(p[7] == p[5] && p[7] == p[3] && p[7] != '-'){
        check = check+1;
        return check;
    }
    else if(p[7] == p[8] && p[7] == p[9] && p[7] != '-'){
        check = check+1;
        return check;
    }
    else if(p[4] == p[5] && p[4] == p[6] && p[4] != '-'){
        check = check+1;
        return check;
    }
    else if(p[9] == p[6] && p[6] == p[3] && p[9] != '-'){
        check = check+1;
        return check;
    }
    else if(p[2] == p[5] && p[2] == p[8] && p[2] != '-'){
        check = check+1;
        return check;
    }
    else 
        return 0;
}

void player2()
{

    while(count < 9)
    {

        int n;
        cout<<"Player 2 Turn"<<endl;
        cout<<"Enter the Location :"<<endl;
        cin>>n;
        cout<<endl;

        if(p[n] == '-' && n != 0)
        {

            p[n] = 'O';

            cout<<"     |     |     "<<endl<<"  "<<p[1]<<"  |  "<<p[2]<<"  |  "<<p[3]<<"  "<<endl<<"_____|_____|_____"<<endl;
            cout<<"     |     |     "<<endl<<"  "<<p[4]<<"  |  "<<p[5]<<"  |  "<<p[6]<<"  "<<endl<<"_____|_____|_____"<<endl;
            cout<<"     |     |     "<<endl<<"  "<<p[7]<<"  |  "<<p[8]<<"  |  "<<p[9]<<"  "<<endl<<"     |     |     "<<endl;

            count = count+1;
            result = condition();
            if(result == 1)
                break;
            else
                return player1();

        }
        else{
            cout<<"Positon already Filled!!"<<endl<<endl;
            return player2();
        }
        
    }
    if(count < 9)
    {
        cout<<"Player 2 Wins!!"<<endl<<endl;
        cout<<"Press 1 to Play again:"<<endl;
        cout<<"Press any other key to Exit:"<<endl;
        cin>>restart;
        if(restart == 1)
            return start();
        else
            cout<<"Visit Again!!"<<endl;
    }
    else
    {
        cout<<"Game Draw!!"<<endl;
        cout<<"Press 1 to Play again:"<<endl;
        cout<<"Press any other key to Exit:"<<endl;
        cin>>restart;
        if(restart == 1)
            return start();
        else
            cout<<"Visit Again!!"<<endl;
    }
    
}


void player1()
{
    while(count < 9)
    {
        int n;
        cout<<"Player 1 Turn"<<endl;
        cout<<"Enter the Location :"<<endl;
        cin>>n;
        cout<<endl;

        if(p[n] == '-' && n != 0)
        {

            p[n] = 'X';
        
            cout<<"     |     |     "<<endl<<"  "<<p[1]<<"  |  "<<p[2]<<"  |  "<<p[3]<<"  "<<endl<<"_____|_____|_____"<<endl;
            cout<<"     |     |     "<<endl<<"  "<<p[4]<<"  |  "<<p[5]<<"  |  "<<p[6]<<"  "<<endl<<"_____|_____|_____"<<endl;
            cout<<"     |     |     "<<endl<<"  "<<p[7]<<"  |  "<<p[8]<<"  |  "<<p[9]<<"  "<<endl<<"     |     |     "<<endl;

            count = count+1;
            result = condition();
            if(result == 1)
                break;
            else
                return player2();

        }
        else{
            cout<<"Position already Filled!!"<<endl<<endl;
            return player1();
        }
        
    }
    if(count <= 9 && result == 1)
    {
        cout<<"Player 1 Wins!!"<<endl;
        cout<<"Press 1 to Play again:"<<endl;
        cout<<"Press any other key to Exit:"<<endl;
        cin>>restart;
        if(restart == 1)
            return start();
        else{
            cout<<"Visit Again!!"<<endl;
        }
    }
    else
    {
        cout<<"Game Draw!!"<<endl;
        cout<<"Press 1 to Play again:"<<endl;
        cout<<"Press any other key to Exit:"<<endl;
        cin>>restart;
        if(restart == 1)
            return start();
        else{
            cout<<"Visit Again!!"<<endl;
        }
    }
}


void start()
{

    fill(p,p+10,'-');
    count = 0;
    int Player;
    cout<<"Choose Player:"<<endl<<"1. Player 1(X)"<<endl<<"2. Player 2(O)"<<endl;
    cin>>Player;
    
    cout<<"     |     |     "<<endl<<"  "<<p[1]<<"  |  "<<p[2]<<"  |  "<<p[3]<<"  "<<endl<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl<<"  "<<p[4]<<"  |  "<<p[5]<<"  |  "<<p[6]<<"  "<<endl<<"_____|_____|_____"<<endl;
    cout<<"     |     |     "<<endl<<"  "<<p[7]<<"  |  "<<p[8]<<"  |  "<<p[9]<<"  "<<endl<<"     |     |     "<<endl;

    if(Player == 1)
        player1();
    else if(Player == 2)
        player2();
    else
        cout<<"Incorrect Input!!"<<endl;
}


int main()
{
    int input;
    cout<<"---------------Welcome to Tic Tak Toe--------------"<<endl<<endl;
    cout<<"Press 1 to start the Game"<<endl<<"Press 2 to Quit"<<endl;
    cin>>input;

    if(input == 1)
        start();
    else
        cout<<"Quitting the Game!!"<<endl;

    system("pause");

    return 0;
}