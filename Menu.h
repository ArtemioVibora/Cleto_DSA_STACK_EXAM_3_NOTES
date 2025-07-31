// Thought I would make something like Java

#ifndef MENU_H
#define MENU_H



class Menu {
public:
    void displayMenu(int count) const;
    int valuePrompt();
    int choicePrompt(int amountChoices);
};


#endif //MENU_H
