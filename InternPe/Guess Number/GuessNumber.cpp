#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
    //function for generating random number
    srand(time(0));

    int systemnumber= rand()%100 + 1;
    int guess;
    int tries=0;
    cout<<"Welcome in the world of Guessing game!"<<endl;
    cout<<"System choose a number randomly. Try to guess it!"<<endl;

    do
    {
        cout<<"Enter the guess number by user :";
        cin>>guess;

        tries++;

        if(guess<systemnumber)
        {
            cout<< "Too low! Guess higher number."<<endl;
        }
        else if(guess>systemnumber)
        {
            cout<< "Too high! Guess lower number."<<endl;
        }
        else
        {
            cout<<"Congratulations ! You guess the number in "<<tries<<endl;
        }
    }
    while(guess!=systemnumber);
    
    return 0;
    
}