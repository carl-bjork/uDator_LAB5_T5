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

Creature::Creature(string name) {
    
    CreatureName = name;
}
Player::Player(string name){
    
    CreatureName = name; 
}
Monster::Monster(string name) {
    
    CreatureName = name;
}
WildPig::WildPig(string name) {
    
    CreatureName = name;
}
Dragon::Dragon(string name) {
    
    CreatureName = name;
}


void Player::DoAction(){
    
    cout << "is attacking!!";
}
void Monster::DoAction(){
    
    cout << "is doing monster stuff!!";
}
void WildPig::DoAction(){
    
    cout << "is running!!!";
}
void Dragon::DoAction(){
    
    cout << "is breathing fire!!";
}
void Player::DrawOnScreen(){
    
    cout << "Player <" << CreatureName << "> ";
    DoAction();
    cout << endl;
}
void Monster::DrawOnScreen(){
    
    cout << "Monster <" << CreatureName << "> ";
    DoAction();
    cout << endl;
}
void WildPig::DrawOnScreen(){
    
    cout << "WildPig <" << CreatureName << "> ";
    DoAction();
    cout << endl;
}
void Dragon::DrawOnScreen(){
    
    cout << "Dragon <" << CreatureName << "> ";
    DoAction();
    cout << endl;
}



int main(){
    
    Player hero("Kick_Ass");
    Monster mon("UFO");
    WildPig pig("Herman");
    Dragon drag("Anton");
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
