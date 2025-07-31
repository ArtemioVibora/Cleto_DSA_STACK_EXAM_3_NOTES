#include <iostream>
#include "Menu.h"
#include <malloc.h>

using namespace std;

struct Node {
    int value;
    Node* next;

};

void push(Node** head, int value) {
    Node *p = (Node*) malloc(sizeof(Node));
    p->value = value;
    p->next = *head;
    *head = p;
}

void pop(Node** head) {

}

int main() {

}
