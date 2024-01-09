#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

//Function 1: This function makes the computer choose a random number between 1-3
int random(){
	srand (time(NULL));
    int X;
    X=rand()%3+1;
    return X;
}

//Function 2: This function asks for the user if he/she/they will choose rock, paper or scissor
string input(){
    string User;
    cout<<"\nPlease enter [rock, paper, scissor]:";
    cin>>User;
    while (User!="rock" && User!="paper"&&User!="scissor"){
    	cout<<"You entered an invalid response.\n";
    	cout<<"Please enter [rock, paper, scissor]:";
    	cin>>User;
	}
    return User;
}

//Funtion 3: This function converts the computer's chosen number into rock, paper or scissor
string compchoice(int R){
	string S;
	switch(R){
        case 1:
            S="rock";
            break;
        case 2:
            S="paper";
            break;
        case 3:
            S="scissor";
            break;
    }
    return S;
}

//Function 4: This function displays the computer's choice
void DisplayCompChoice(string D){
    cout<<"Computer's Choice:"<<D;
}

//Function 5: This function compares the user's and computer's choice to see who wins
bool compare(string Q, string W){
    if(Q=="rock"){
        if(W=="paper"){
            cout<<"\nPaper wraps Rock, you lose";
        }
        else if(W=="scissor"){
            cout<<"\nRock destroys Scissor, you win";
        }
    }
    else if(Q=="paper"){
        if(W=="rock"){
           cout<<"\nPaper wraps Rock, you win";
        }
        else if(W=="scissor"){
            cout<<"\nScissor cuts paper, you lose";
        }
    }
    else{
        if(W=="rock"){
            cout<<"\nRock destroys Scissor, you lose";
        }
        else if(W=="paper"){
            cout<<"\nScissor cuts paper, you win";
        }
    }
}

int main()
{
	cout<<"PLAY ROCK, PAPER AND SCISSOR WITH A COMPUTER\n";
	//Declaration of variables
	int comp;
    string user, CompChoice;
    
//This goto funtion is used when if the user and the computer choice is the same
Again:
	
	//Where we call for funtions 1-4
    user=input();
    comp=random();
    CompChoice=compchoice(comp);
    DisplayCompChoice(CompChoice);
    
    //This is for checking whether the user's and computer's choice is the same
    while(user==CompChoice){
		cout<<"\nYou and the computer chose the same, play again.\n";
		goto Again;
	}
	
	//Where we call for function 5
    compare(user, CompChoice);
    
    return 0;
}