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
    int key;
    list<int>::iterator i;
    
    bool insertionNeeded = false;
    
    for (list<int>::iterator j = num.begin(); j != num.end(); j++) {
        key = *j;
        insertionNeeded = false;
        for (i = j-- ; i != num.begin(); i--){
            if (key < *i) {
                *i++ = *i; // larger values move right
                insertionNeeded = true;
            }
            else
                break;
        }
        if (insertionNeeded)
            *i++ = key;    //Put key into its proper location
    }
    
}


int main()
{
    list<int> new_list(10000);
    insertion_sort(new_list);
    //The performance is slower because we are using pointers and that overhead slows down the complier
    return 0;
}
