//
//  Header.h
//  uDator_LAB5_T5
//
//  Created by Carl Björk on 2018-12-11.
//  Copyright © 2018 Carl Björk. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <string>

using namespace std;

class Creature{
public:
    
    Creature() {}
    Creature(string name);
    virtual void DoAction()=0;
    virtual void DrawOnScreen()=0;
    
protected:
    string CreatureName;
};

class Player: public Creature {
public:
    
    Player(string name);
    void DoAction() override;
    void DrawOnScreen() override;
    
};

class Monster: public Creature {
public:
    
    Monster() {}
    Monster(string name);
    void DoAction();
    void DrawOnScreen();
    
};

class WildPig: public Monster {
public:
    
    WildPig(string name);
    void DoAction();
    void DrawOnScreen();
    
};

class Dragon: public Monster {
public:
    
    Dragon(string name);
    void DoAction();
    void DrawOnScreen();
    
};

#endif /* Header_h */
