// linkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


/*Създайте имплементация на структурата на Node за Linked list.

Напишете следните функции:

pushFront() - done
pushBack() - done
pushAt(int index) - done
popFront() - done
popBack() - done
popAt(int index) - done
find(T data) - done
reduce() - функцията трие всички повтарящи се елементи
reverse()
checkForLoop()
*/

template <typename T>
struct Node {
    T data;
    Node* next;

    Node(const T& data_, Node<T>* obj = nullptr) {
        this->data = data_;
        this->next = obj;
    }

};

template<typename T>
Node<T>* pushFront(Node<T>& obj, const T data_) {
    Node<T>* added = new Node<T>(data_, obj);
    return added;
}

template<typename T>
void pushBack(Node<T>& obj, const T data_) {
    Node<T>* added = new Node<T>(data_);
    Node<T>* current = obj;

    while (current->next) {
        current = current->next;
    }
    current->next = added;
}

template <typename T>
void pushAt(Node<T>& obj, const T data_, size_t index) {
    if (index == 0)
    {
        exit(1);
    }
    if (index == 1)
    {
        obj = pushFront(obj, data_);
        return;
    }
    Node<T>* added = new Node<T>(data_, nullptr);
    Node<T>* crr = obj;

    for (index; index > 0; --index) {
        crr = crr->next;
        if (!crr)
        {
            exit(1);
        }
    }

    Node<T>* temp = crr->next;
    crr->next = added;
    added->next = temp;
}

template <class T>
void popFront(Node<T>& obj) {
    Node<T> temp = obj;
    obj = obj->next;
    delete[] temp;
}

template <class T>
void popBack(Node<T>& obj) {
    Node<T>* current = obj;
    while (current->next->next) {
        current = current->next;
    }
    delete[] current->next;
    current->next = nullptr;
}

template <class T>
void popAt(Node<T>& obj, size_t index) {
    if (index == 0) {
        exit(1);
    }
    if (index == 1) {
        popFront();
    }

    Node<T>* crr = obj;

    for (index; index > 0; --index) {
        crr = crr->next;
        if (!crr)
        {
            exit(1);
        }
    }
    Node<T> temp = current->next->next;
    delete[] current->next;
    current->next = temp;
}

template<class T>
Node<T>*& find(Node<T>*& obj, T data) {
    Note<T>* curr = obj;
    while (curr) {
        if (curr->data == data) {
            return curr;
        }
        curr = curr->next;
    }
    std::cout << "Invalid!";
    return obj;

}


template<class T>
bool checkForLoop(Node<T>* obj) {

    Node<T>* fastIter = obj;
    Node<T>* slowIter = obj;

    do {
        if (fastIter->next == nullptr) // if (fastIter->next)
        {
            return false;
        }

        fastIter = fastIter->next->next;
        slowIter = slowIter->next;

        if (fastIter == slowIter) {
            return true;
        }

    } while (fastIter && slowIter);
    return false;
}

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

