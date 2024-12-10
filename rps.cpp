#include <iostream>
#include <stdlib.h>
#include <ctime>

void print_main_menue();

char computer_play();

int decide_winner(char p1, char p2);

void print_winner(int id);
//P1 IS ALWAYS COMPUTER, P2 IS ALWAYS USER in this code structure

int main(){
    int flag=1;
    int op_code;
    char p1;
    do{
        print_main_menue();
        char p2;
        do{
            p1 = computer_play();
            std::cin >> p2;
            if (decide_winner(p1,p2)==0){
                std::cout << "Computer and Player both played " << p1 << "\nPlay again: ";
            }
        }while(decide_winner(p1,p2)==0);

        std::cout << "Computer: " << p1 << '\t' << "User: " << p2 << '\n';
        print_winner(decide_winner(p1,p2));

        std::cout << "would you like to play again? 1/0: ";
        std::cin >> flag;

    }while(flag);
    return 0;
}

void print_main_menue(){
    std::cout << "-------------ROCK PAPER SCISSORS GAME-------------\n";
    std::cout << "Enter 'r', 'p' or 's' for your play: ";
}

char computer_play(){
    srand(time(NULL));
    int play = rand()%3;
    if (play==0)
      return 'r';
    else if (play==1)
      return 'p';
    else
      return 's';
}

int decide_winner(char p1, char p2){
    if (p1==p2)
      return 0;
    if ((p1=='r' && p2=='p') || (p1=='p'&& p2=='s') || (p1=='s' && p2=='r')){
        return 2;
    }
    else
      return 1;
}

void print_winner(int id){
    if (id==1)
        std::cout << "Computer won :(\n";
    else if (id==2)
        std::cout << "User wON :)\n";
}