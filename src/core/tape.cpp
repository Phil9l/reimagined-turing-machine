#include "tape.hpp"

Node* Tape::create_node() const {
    Node* node = new Node;
    node->value = 0;
    node->prev = nullptr;
    node->next = nullptr;
    return node;
}

Tape::Tape() {
    head = create_node();
    current = head;    
}

Tape::~Tape() {
    while (head) {
        current = head;
        head = head->next;
        delete current;
    }
}

char Tape::get_current() const {
    return current->value;
}

void Tape::write(char value) {
    current->value = value;
}

void Tape::move_right() {
    if (current->next == nullptr) {
        Node* node = create_node();
        node->prev = current;
    }
    current = current->next;
}

void Tape::move_left() {
    if (current->prev == nullptr) {
        Node* node = create_node();
        node->next = current;
    }
    current = current->prev;
}

