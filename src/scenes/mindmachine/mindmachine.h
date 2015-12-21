#pragma once

#include "ofMain.h"
#include "baseScene.h"

class mindmachine : public baseScene {
    
public:
    
    void setup();
    void update();
    void draw();
    
    ofParameter<float> freq;
    
    int last;
    int flip;
};
