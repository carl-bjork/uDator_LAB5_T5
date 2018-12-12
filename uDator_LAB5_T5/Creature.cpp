#include "Header.h"
#include <iostream>
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
    
    cout << "is attacking Anton";
}
void Monster::DoAction(){
    
    cout << "is probing stuff!!";
}
void WildPig::DoAction(){
    
    cout << "is programming c++, his biggest weakness.";
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


