//
//  Top.cpp
//  Label
//
//  Created by MAEDAHAJIME on 2015/02/01.
//
//

#include "Top.h"

USING_NS_CC;

Scene* Top::createScene()
{
    // 'scene' is an autorelease object
    auto scene = Scene::create();
    
    // 'layer' is an autorelease object
    auto layer = Top::create();
    
    // add layer as a child to scene
    scene->addChild(layer);
    
    // return the scene
    return scene;
}


// 「INIT」初期化
bool Top::init()
{
    if ( !Layer::init() )
    {
        return false;
    }
    
        //画面サイズを取得
        Size winSize = Director::getInstance()->getVisibleSize();
        
        // ラベルを作成し、初期化する。
        // Label::createWithSystemFont("文字列", "フォントの種類", 文字サイズ, 基準エリア);
        auto label1 = Label::createWithSystemFont("Hello World", "HiraKakuProN-W6", 100);
    
        // ラベルの色:ホワイト
        label1->setColor(Color3B::WHITE);
        
        //画面の中央に表示
        label1->setPosition(Point(winSize.width/2, winSize.height/2));
    
        // Layerにラベルを追加
        this->addChild(label1);
    
    return true;
}
