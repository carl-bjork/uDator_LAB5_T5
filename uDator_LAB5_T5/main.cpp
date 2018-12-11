//
//  main.cpp
//  uDator_LAB5_T5
//
//  Created by Carl Björk on 2018-12-11.
//  Copyright © 2018 Carl Björk. All rights reserved.
//

#include <iostream>
#include "Header.h"
#include <string>

using namespace std;

int main(){
    
    Player hero("Kick_Ass");
    Monster mon("UFO");
    WildPig pig("I'm_Hungry");
    Dragon drag("I'm_the_Boss");
    Creature* object[4];
    object[0]=&hero;
    object[1]=&mon;
    object[2]=&pig;
    object[3]=&drag;
    object[0]->DrawOnScreen();
    object[1]->DrawOnScreen();
    object[2]->DrawOnScreen();
    object[3]->DrawOnScreen();
    return 0;
    
}
