#include <iostream>
#include "Time.h"
#include "Player.h"
#include "Store.h"
using namespace std;

int main(){
    Time time;
    Player player;
    Store store;

    bool running = true;
    while (running){
        cout << "\n=== Adelaide Valley Farm ==="<< endl;
        cout << "Day: "<<time.getDay()<< " | Balance: $"<< player.getBalance()<< endl;
        cout << "1. View Inventory"<< endl;
        cout << "2. Go to Store"<< endl;
        cout << "3. Advance to Next Day"<< endl;
        cout << "4. Exit Game"<< endl;
        cout << "Choose an action: ";

        int choice;
        cin >>choice;

        if (cin.fail()){
            cin.clear();
            cin.ignore(1000, '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        switch(choice){
            case 1:
                player.showInventory();
                break;
            case 2: {
                bool inStore = true;
                while(inStore){
                    store.showMenu();
                    cout<< "Choose an item to buy: ";
                    int itemChoice;
                    cin>> itemChoice;
                    if (itemChoice == 3) {
                        inStore = false;
                    } else {
                        store.buy(itemChoice, player);
                    }
                }
                break;
            }
            case 3:
                time.nextDay();
                player.updateInventory(time);
                cout<<"Day advanced! Crops are growing..."<<endl;
                break;
            case 4:
                running = false;
                cout<<"Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    }

    return 0;
}

