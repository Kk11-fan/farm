#ifndef STORE_H
#define STORE_H
#include <iostream>
#include "Wheat.h"
#include "Corn.h"
#include "Player.h"

using namespace std;

class Store{
    public:
        void showMenu(){
        cout << "\n--- Store Menu ---" << endl;
        cout << "1. Buy Wheat ($10)" << endl;
        cout << "2. Buy Corn ($15)" << endl;
        cout << "3. Exit Store" << endl;
    }

    void buy(int choice, Player& player){
        switch (choice){
            case 1:
                if (player.getBalance() >= 10){
                    player.adjustBalance(-10);
                    player.addToInventory(new Wheat());
                    cout << "You bought Wheat!" << endl;
                } else {
                    cout << "Not enough money." << endl;
                }
                break;
            case 2:
                if (player.getBalance() >= 15){
                    player.adjustBalance(-15);
                    player.addToInventory(new Corn());
                    cout << "You bought Corn!" << endl;
                } else {
                    cout << "Not enough money." << endl;
                }
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    }
};

#endif
