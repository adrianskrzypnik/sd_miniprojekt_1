#ifndef FINAL_SINGLYLINKEDLIST_H
#define FINAL_SINGLYLINKEDLIST_H

#include <iostream>

struct Node {
    int data;
    Node* next;
};

class SinglyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    SinglyLinkedList() : head(nullptr), tail(nullptr) {}

    ~SinglyLinkedList() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
    //dodawanie elementow  dowlnej pozycjii
    void insert(int data, int position) {
        Node* newNode = new Node{data, nullptr};
        if (position == 0) {
            newNode->next = head;
            head = newNode;
            if (tail == nullptr) {
                tail = head;
            }
        } else {
            Node* current = head;
            for (int i = 0; i < position - 1 && current != nullptr; ++i) {
                current = current->next;
            }
            if (current != nullptr) {
                newNode->next = current->next;
                current->next = newNode;
                if (newNode->next == nullptr) {
                    tail = newNode;
                }
            } else {
                delete newNode;
            }
        }
    }
    //dodawanie na koncu listy
    void append(int data) {
        Node* newNode = new Node{data, nullptr};
        if (tail != nullptr) {
            tail->next = newNode;
            tail = newNode;
        } else {
            head = tail = newNode;
        }
    }

    void prepend(int data) {
        Node* newNode = new Node{data, nullptr};
        if (head != nullptr) {
            newNode->next = head;
            head = newNode;
        } else {
            head = tail = newNode;
        }
    }

    void remove(int index) {
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            if (head == nullptr) {
                tail = nullptr;
            }
        } else {
            Node* current = head;
            for (int i = 0; i < index - 1 && current != nullptr; ++i) {
                current = current->next;
            }
            if (current != nullptr && current->next != nullptr) {
                Node* temp = current->next;
                current->next = current->next->next;
                delete temp;
                if (current->next == nullptr) {
                    tail = current;
                }
            }
        }
    }

    void removeFirst() {
        if (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
            if (head == nullptr) {
                tail = nullptr;
            }
        }
    }

    void removeLast() {
        if (head != nullptr) {
            if (head == tail) {
                delete head;
                head = tail = nullptr;
            } else {
                Node* current = head;
                while (current->next != tail) {
                    current = current->next;
                }
                delete tail;
                tail = current;
                tail->next = nullptr;
            }
        }
    }

    int search(int data) {
        Node* current = head;
        int position = 0;
        while (current != nullptr) {
            if (current->data == data) {
                return position;
            }
            current = current->next;
            ++position;
        }
        return -1;
    }
    int returnSize() {
        int count = 0;
        Node* current = head;
        while (current != nullptr) {
            ++count;
            current = current->next;
        }
        return count;
    }
    void clear() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
    }
};





#endif //FINAL_SINGLYLINKEDLIST_H
