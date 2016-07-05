//
//  main.cpp
//  assignment3
//
//  Created by Lucicle on 7/5/16.
//  Copyright © 2016 Lucicle. All rights reserved.
//

#include <iostream>
#include <list>
using namespace std;

void insertion_sort(list<int> &num) {
    int i, j, key;
    
    bool insertionNeeded = false;
    
    for (j = 1; j < num.size(); j++) {
        key = num[j];
        insertionNeeded = false;
        for (i = j - 1; i >= 0; i--){
            if (key < num[i]) {
                num[i + 1] = num[i]; // larger values move right
                insertionNeeded = true;
            }
            else
                break;
        }
        if (insertionNeeded)
            num[i + 1] = key;    //Put key into its proper location
    }
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
