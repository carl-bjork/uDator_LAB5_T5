//
//  Header.h
//  uDator_LAB5_T5
//
//  Created by Carl Björk on 2018-12-11.
//  Copyright © 2018 Carl Björk. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include<string>

class Creature{
    public:
        Creature(string);
        virtual void DoAction()=0;
        virtual void DrawOnScreen()=0;
    protected:
        string CreatureName;
};

#endif /* Header_h */
