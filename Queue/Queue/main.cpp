//
//  main.cpp
//  Queue
//
//  Created by Joel Chavez on 9/24/19.
//  Copyright © 2019 Joel Chavez. All rights reserved.
//

#include <iostream>

using namespace std;

#include "queue.h"


int main(int argc, const char * argv[]) {
    queue<char> miFila;
    
    miFila.push('a');
    miFila.push('b');
    miFila.push('c');
    cout << "Tamanio: " << miFila.size() << endl;
    cout << "Frente: " << miFila.front() << endl;
    miFila.push('d');
    while(!miFila.empty()){
        cout << miFila.front() << endl;
        miFila.pop();
    }
}
