#include <ctime>
#include <iostream>
#include <stdlib.h>

int main(){
    srand(time(NULL));
    //random number guessing game
    int random = rand()%6 + 1;

    std::cout << "*******GUESSING GAME*******\n";
    std::cout << "Guess between 1 and 6! You have 3 tries.\nEnter your guess: ";
    int guess;
    //std::cin >> guess;

    int flag = 1;
    int attempts = 3;
    do{
        std::cin >> guess;
        if (guess==random){
            std::cout << "Your guess is Correct!\n";
            return 0;
        }
        else {
            attempts--;
            if (attempts>0){
                std::cout << "Try again " <<  attempts << " attempts left\n";
            }
            else{
                std::cout << "You are out of tries. The number was " << random << " BYEEE\n";
                return 0;
            }
        }
    }while(attempts>0);
    return 0;
}