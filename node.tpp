#include "node.h"

template<typename T>
Node<T>::Node() : next(nullptr), item(0) {}

template<typename T>
Node<T>::Node(const T &anItem) : item(anItem), next(nullptr) {}

template<typename T>
Node<T>::Node(const T &anItem, Node<T> *nextNodePtr) :
        item(anItem), next(nextNodePtr) {}

template<typename T>
Node<T>::~Node() {
    next = nullptr;
}

template<typename T>
void Node<T>::setItem(const T &anItem) {
    item = anItem;
}

template<typename T>
void Node<T>::setNext(Node<T> *nextNodePtr) {
    next = nextNodePtr;
}

template<typename T>
T Node<T>::getItem() const {
    return item;
}

template<typename T>
Node<T> *Node<T>::getNext() const {
    return next;
}