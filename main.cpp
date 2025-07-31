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

int main() {

}
