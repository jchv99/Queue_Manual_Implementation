//
//  queue.h
//  Queue
//
//  Created by Joel Chavez on 9/24/19.
//  Copyright © 2019 Joel Chavez. All rights reserved.
//

#ifndef queue_h
#define queue_h

#include "node.h"

template <class T>
class queue{
    
public:
    queue();
    ~queue();
    void pop();
    void push(T data);
    T front();
    bool empty();
    int size();
    
private:
    node<T> *end;
    int tam;
};

template <class T>
queue<T> :: queue(){
    end = nullptr;
    tam =0;
}

template <class T>
queue<T>::~queue(){
    if(tam>0){
        node<T> *curr = end->getNext();
        end->setNext(nullptr);
        end = curr;
        while(end!= nullptr){
            end = end->getNext();
            delete curr;
            curr = end;
        }
    }
}

template <class T>
bool queue<T>:: empty(){
    return end == nullptr;
}

template <class T>
int queue<T>:: size(){
    return tam;
}

template <class T>
T queue<T>::front(){
    return end->getNext()->getData();
}

template <class T>
void queue<T>::push(T data){
    if(empty()){
        end = new node<T>(data);
        end->setNext(end);
    }else{
        end->setNext(new node<T>(data, end->getNext()));
        end = end->getNext();
    }
    tam++;
}

template <class T>
void queue<T>::pop(){
    node<T> *curr = end->getNext();
    if(tam==1){
        end = nullptr;
    }else{
        end->setNext(curr->getNext());
    }
    delete curr;
    tam--;
}

#endif /* queue_h */
