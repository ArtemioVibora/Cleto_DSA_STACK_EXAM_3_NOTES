#include "Menu.h"
#include <iostream>

using namespace std;

void Menu::displayMenu() const{
    cout << "====================================" << endl;
    cout << "              Le Stack              " << endl;
    cout << "====================================" << endl;
    cout << "<1> Push" << endl;
    cout << "<2> Pop" << endl;
    cout << "<3> Peek" << endl;
    cout << "<4> Clear" << endl;
    cout << "------------------------------------" << endl;
    cout << ">>>> " << endl;
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



