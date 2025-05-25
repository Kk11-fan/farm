#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <vector>
#include <string>
#include "FarmObject.h"
using namespace std;

class Player{
    private:
        float balance;
        vector<FarmObject*> inventory;

    public:
        Player(float b = 50.0f) : balance(b){}

        float getBalance(){
            return balance;
        }

        void adjustBalance(float amount){
            balance += amount;
        }

        void addToInventory(FarmObject* item){
            inventory.push_back(item);
        }

        void showInventory(){
            cout << "--- Inventory ---" << endl;
            if (inventory.empty()){
                cout << "Empty" << endl;
            }
            for (size_t i = 0; i < inventory.size(); ++i){
                cout << i + 1 << ". ";
                inventory[i]->display();
            }
        }

        void updateInventory(Time& t){
            for (size_t i = 0; i < inventory.size(); ++i){
                inventory[i]->update(t);
            }
        }

        ~Player(){
            for (size_t i = 0; i < inventory.size(); ++i){
                delete inventory[i];
            }
        }
};

#endif
