#include<iostream>
#include<cstdlib>
#include<ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3
using namespace std;

int main()
{
    //ROCK BEATS SCCISSORS
    //SCISSORS BEATS PAPER
    //PAPER BEATS ROCK
    cout<<"Welcome in the Rock Scissor Paper Game !"<<endl;
    
    //generate the randomm nuumber

    srand((unsigned int) time (NULL));

    int player_Throw=0;
    int system_throw=0;

    bool draw = false;

    do{
        cout<<"Select your throw:" <<endl;
        cout<<"1) Rock" <<endl;
        cout<<"2) Paper" <<endl;
        cout<<"3) Scissors" <<endl;
        cout<<"Selection:";

        cin >> player_Throw;
        cout<<endl;
    

    //rand()  -> 0 ......99999 % 3  remainder 0-2 + 1 -> 1-3

    system_throw = (rand() % 3)+1;

    if(system_throw == ROCK)
    {
        cout << "SYSTEM throws ROCK" <<endl;
    }
    else if(system_throw == PAPER)
    {
        cout << "SYSTEM throws PAPER" <<endl;
    }
    else if(system_throw == SCISSORS)
    {
        cout << "SYSTEM throws SCISSORS" <<endl;
    }

    draw = false;

    if(player_Throw == system_throw)
    {
        draw = true;
        cout<< "Draw! Play Again!" << endl;
    }
    else if ( player_Throw == ROCK && system_throw == SCISSORS)
    {
        cout<<"ROCK beats SCISSORS! YOU WIN" <<endl;
    }
    else if ( player_Throw == ROCK && system_throw == PAPER)
    {
        cout<<"PAPER beats ROCK! YOU LOSE" <<endl;
    }
    else if ( player_Throw == PAPER && system_throw == ROCK)
    {
        cout<<"PAPER beats ROCK! YOU WIN" <<endl;
    }
    else if ( player_Throw == PAPER && system_throw ==SCISSORS)
    {
        cout<<"SCISSORS beats ROCK! YOU LOSE" <<endl;
    }
    else if ( player_Throw == SCISSORS && system_throw == PAPER)
    {
        cout<<"SCISSORS beats PAPER! YOU WIN" <<endl;
    }
    else if ( player_Throw == SCISSORS && system_throw == ROCK)
    {
        cout<<"ROCK beats SCISSORS! YOU LOSE" <<endl;
    } 
    cout<< endl;
}
   

    while(draw);
    return 0;
}