#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::displayMenu(int count) const{

}

int Menu::valuePrompt() {
    int value;
    cout << "Enter your value: ";
    while (!(cin >> value)) {
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Invalid input, please try again." << endl;
        cout << "Enter your value: ";
    }
    return value;
}

int Menu::choicePrompt(int amountChoices) {
    int choice;
    while (!(cin >> choice) || choice > amountChoices) {
        cin.clear();
        cin.ignore(80, '\n');
        cout << "Please enter a valid choice: ";
    };
    return choice;
}



