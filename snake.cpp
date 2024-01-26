#include<iostream>
#include <conio.h>
#include<windows.h>
using namespace std;

bool gameover;
const int height = 30;
const int width = 45;
int x,y,fruitX,fruitY,score;
int tailX[100], tailY[100];
int nTail;
enum eDirection {STOP = 0, LEFT, RIGHT, UP, DOWN};
eDirection dir;
int n;

void input();
void logic();
void setup();
void map();
void menu();

void setup()
{
    gameover = false;
    dir = STOP;
    x = width/2;
    y = height/2;
    fruitX = rand() % width;
    fruitY = rand() % height;
    score = 0;
    n = 0;
}

void map()
{
    system("cls");
    int i,j;
    
    for(i=0;i<width+4;i++)
        cout<<"#";
    cout<<endl;

    for(i=0;i<height;i++)
    {
        for(j=0;j<width+2;j++)
        {
            if(j==0)
                cout<<"#";
            if(i == y && j == x)
            {
                cout<<"O";
            }
            else if(i == fruitY && j == fruitX)
                cout<<"F";
            else
            {
                bool print = false;
                for(int k = 0;k < nTail; k++)
                {
                    if(tailX[k] == j && tailY[k] == i)
                    {
                        cout<<"o";
                        print = true;
                    }
                }
                if(!print)
                    cout<<" ";
            }
            if(j==width+1)
                cout<<"#";
        }
        cout<<endl;
    }

    for(i=0;i<width+4;i++)
        cout<<"#";
    cout<<endl;
    cout<<"Score:"<<score<<endl;
}

void input()
{
    if(kbhit())
    {
        switch(getch())
        {
            case 'w':
                if(dir != DOWN)
                {
                    dir = UP;
                    break;
                }   
            case 'a':
                if(dir != RIGHT)
                {
                    dir = LEFT;
                    break;
                } 
            case 's':
                if(dir != UP)
                {
                    dir = DOWN;
                    break;
                }
            case 'd':
                if(dir != LEFT)
                {
                    dir = RIGHT;
                    break;
                }
        }
    }

}

void logic()
{
    int prevX = tailX[0];
    int prevY = tailY[0];
    int prev2X,prev2Y;
    tailX[0] = x;
    tailY[0] = y;

    for(int i = 1;i < nTail; i++)
    {
        prev2X = tailX[i];
        prev2Y = tailY[i];
        tailX[i] = prevX;
        tailY[i] = prevY;
        prevX = prev2X;
        prevY = prev2Y;
    }

    switch(dir)
    {
    case UP:
        y--;
        break;
    case DOWN:
        y++;
        break;
    case LEFT:
        x--;
        break;
    case RIGHT:
        x++;;
        break;
    default:
        break;
    }

    if( x > width || x  <0 || y > height || y < 0)
        gameover = true;
    for(int i = 0; i < nTail; i++ )
    {
        if(tailX[i] == x && tailY[i] == y)
            gameover = true;
    }
    if( x == fruitX && y == fruitY)
    {
        score += 10;
        n = score/10;
        fruitX = rand() % width;
        fruitY = rand() % height;
        nTail++;
    }
    
}

void menu()
{
    int in;
    setup();
    while(!gameover)
    {
        map();
        input();
        logic();
        Sleep(200);
    }
    cout<<"Game Over!!"<<endl<<endl;
    cout<<"Press 1 to Play again:"<<endl;
    cout<<"Press 2 to Exit:"<<endl;
    cin>>in;
    if(in == 1)
        menu();
    else
        cout<<"Exiting the Game!!"<<endl;
}


int main()
{

    int in;
    cout<<"---------------Welcome to 'The Snake Game'---------------"<<endl;
    cout<<endl<<"Press 1 to Start the Game:"<<endl;
    cout<<"Press 2 to Quit:"<<endl;
    cin>>in;
    if(in == 1)
        menu();
    else
        cout<<"Exiting the game!!"<<endl;
        
    system("pause");
    return 0;
}