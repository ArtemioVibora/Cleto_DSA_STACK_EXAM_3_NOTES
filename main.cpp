#include <iostream>
#include "Menu.h"
#include <malloc.h>

using namespace std;

struct Node {
    int value;
    Node* next;

};

bool isEmpty(Node* top) {
    return top == NULL;
}

void push(Node** top, int value) {
    Node *p = (Node*) malloc(sizeof(Node));
    p->value = value;
    p->next = *top;
    *top = p;
}

int pop(Node** top) {
    if (isEmpty(*top)) {
        return -1;
    }

    Node *p = *top;
    int value = (*top)->value;
    *top = (*top)->next;
    free(p);

    return value;
}

int peek(Node* top) {
    if (isEmpty(top)) {
        return -1;
    }
    int value = top->value;
    return value;
}

void runProgram() {
    Node* top = NULL;
    Menu menu;

    int choice;
    int value;


    bool running = true;

    while (running) {
        menu.displayMenu();
        choice = menu.choicePrompt();
        switch (choice) {
            case 1:
                value = menu.valuePrompt();
                push(&top, value);
                break;
            case 2:
                value = pop(&top);
                if (value == -1) cout << "List is empty" << endl;
                else cout << "The value popped: " << value << endl;
                break;
            case 3:
                value = peek(top);
                if (value == -1) cout << "List is empty" << endl;
                else cout << "The value peeked: " << value << endl;
                break;
            case 4:
                running = false;
                break;
            default:
                cout << "Invalid choice" << endl;
                break;
        }
    }
}

int main() {
    runProgram();
}
