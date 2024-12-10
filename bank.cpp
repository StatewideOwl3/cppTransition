#include <iostream>

//deposit money, take out money, show balance.
//deposit money to acc ok.

void show_balance(double balance){
    std::cout << "Balance is: $" << balance << '\n';
}

double deposit(){
    std::cout << "Enter amount to deposit: ";
    double amount;
    std::cin >> amount;
    return amount;
}

double withdraw(){
    std::cout << "Enter Money to withdraw: ";
    double amount;
    std::cin >> amount;
    return amount;
}


int main(){
    int choice;
    double balance=0;

    std::cout << "************BANK************\n";

    while(1){
        std::cout << "1. show balance\t2. deposit money\t3. withdraw money\t4. exit\n";
        std::cout << "enter your choice: ";
        std::cin >> choice;

        switch(choice){
            case 1:{
                show_balance(balance);
                break;
            }
            case 2:{
                balance+=deposit();
                break;
            }
            case 3:{
                double amount = withdraw();
                balance-=amount;
                std::cout << "Withdraw successful!\n";
                break;
            }
            case 4:{
                std::cout << "BYE BYE!\n";
                return 0;
            }
        }
    }

    return 0;
}