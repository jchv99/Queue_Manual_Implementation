//
//  node.h
//  Queue
//
//  Created by Joel Chavez on 9/24/19.
//  Copyright © 2019 Joel Chavez. All rights reserved.
//


#ifndef node_h
#define node_h

template <class T>
class node{
public:
    node(T data);
    node(T data, node<T> *next);
    T getData();
    node<T>* getNext();
    void setData(T data);
    void setNext(node<T> *next);
private:
    T data;
    node<T> *next;
};

template <class T>
node<T>::node(T data){
    this->data=data;
    this->next=nullptr;
}

template <class T>
node<T>::node(T data, node<T> *next){
    this->data=data;
    this->next=next;
}

template <class T>
T node<T>:: getData(){
    return data;
}

template <class T>
node<T>* node<T>:: getNext(){
    return next;
}

template <class T>
void node<T>:: setData(T data){
    this->data=data;
}

template <class T>
void node<T>::setNext(node<T>* next){
    this->next = next;
}

#endif /* node_h */
