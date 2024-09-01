#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

string getResult(char yourchoice, char compchoice){
    if(yourchoice == compchoice){
        cout<<"It's Tie! Try again!";
    }
    else if((yourchoice == 'S' and compchoice == 'W')or
            (yourchoice == 'W' and compchoice == 'G')or
            (yourchoice == 'G' and compchoice == 'S'))
        cout<<"Congrats! You Won!";
    else
        cout<<"Oops! Try again!";
}

string choiceToString(char choice){
    if(choice == 'S')   return "Snake";
    else if(choice == 'W')   return "Water";
    else if(choice == 'G')   return "Gun";
}

int main(){
    char yourchoice, compchoice;
    char choice[] = {'S', 'W', 'G'};

    srand(time(0));

    cout<<"***Welcome to Snake, Water, and Gun game***"<<endl;
    cout<<"Enter 'S' for Snake, 'W' for Water, and 'G' for Gun : ";
    cin>>yourchoice;

    compchoice = choice[rand()%3];

    cout<<"You chose : "<<yourchoice<<endl;
    cout<<"Computer chose : "<<compchoice<<endl;

    string result = getResult(yourchoice, compchoice);
}