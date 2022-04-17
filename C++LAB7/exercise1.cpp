//
//  exercise1.cpp
//  C++LAB7
//
//  Created by CHYEN on 2022/4/17.
//

#include <iostream>
#include <cstring>

struct stringy{
    char* str;
    int ct;
};

void set(stringy &stry, char cr[]);
void show(stringy &stry, int n = 1);
void show(char cr[], int n = 1);

int main(){
    stringy beany;
    char testing[] = "Reality isn't what it used to be. ";
    set(beany, testing);
    
    show(beany);
    show(beany, 2);
    
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing, 3);
    show("Done!");
    
    return 0;
}

void set(stringy &stry, char cr[]){
    stry.str = cr;
    stry.ct = sizeof(cr)/sizeof(cr[0]);
}

void show(stringy &stry, int n){
    for (int i = 0; i<n; i++) {
        std::cout<<stry.str<<std::endl;
    }
}

void show(char cr[], int n){
    for (int i = 0; i<n; i++) {
        std::cout<<cr<<std::endl;
    }
}
