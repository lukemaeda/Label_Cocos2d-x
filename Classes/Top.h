//
//  Top.h
//  Label
//
//  Created by MAEDAHAJIME on 2015/02/01.
//
//

#ifndef __Label__Top__
#define __Label__Top__

#include "cocos2d.h"

class Top : public cocos2d::Layer
{
public:
    
    virtual bool init();
    
    static cocos2d::Scene* createScene();
    
    CREATE_FUNC(Top);
};


#endif /* defined(__Label__Top__) */
