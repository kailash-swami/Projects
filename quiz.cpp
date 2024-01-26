#include<iostream>

using namespace std;

int ch;

int quiz()
{

    string question;
    string options;
    char ans;
    char guess;
    int q;
    int Total = 0;
    for(q=1;q<=5;q++)
    {
        switch(q)
        {
            case 1: question = "What is the capital of Rajasthan?";
                    options = "(A) Jaipur   (B) Jodhpur   (C) Kota   (D) Bikaner";
                    ans = 'A';
                    break;
            case 2: question = "What is the capital of Haryana?";
                    options = "(A) Sonipat   (B) Panipat   (C) Chandigarh   (D) Gurugram";
                    ans = 'C';
                    break;
            case 3: question = "What is the capital of Uttar Pradesh?";
                    options = "(A) Ghaziabad   (B) Kashi   (C) Lucknow   (D) Agra";
                    ans = 'C';
                    break;
            case 4: question = "What is the capital of Gujarat?";
                    options = "(A) Ahemdabad   (B) Gandhinagar   (C) Surat   (D) Amreli";
                    ans = 'B';
                    break;
            case 5: question = "What is the capital of Maharashtra?";
                    options = "(A) Pune   (B) Nagpur   (C) Nashik   (D) Mumbai";
                    ans = 'D';
                    break;
        }

        cout<<"Q"<<q<<" "<<question<<endl<<options<<endl;
        cin>>guess;

        if(toupper(guess) == ans)
        {
            cout<<"Correct Answer!!"<<endl;
            Total = Total+1;
        }
        else
            cout<<"Wrong Answer!!"<<endl;

        cout<<endl;
    }
    cout<<endl;
    cout<<"End of Quiz"<<endl<<endl;
    cout<<"Your score is "<<Total<<'/'<<'5'<<endl<<endl;
    cout<<"Press 1 to restart the quiz:"<<endl;
    cout<<"Press any other key to quit"<<endl;
    cin>>ch;
    cout<<endl;
    if(ch == 1)
        return quiz();
    else
        cout<<"Visit Again"<<endl;
    
    return 0;

}


int main()
{

    int ch;
    int total;
    cout<<endl;
    cout<<"----------Welcome to the Quiz----------"<<endl;
    cout<<endl;
    cout<<"Press 1 to start the Quiz:"<<endl;
    cout<<"Press 2 to close:"<<endl;
    cin>>ch;
    cout<<endl;


    if(ch == 1)
    {
        total = quiz();
    
        
    }
    else{
        cout<<"Quiz Aborted!!!"<<endl<<"Visit Again"<<endl;
        cout<<endl;
    }
        
    

    system("pause");
    
}