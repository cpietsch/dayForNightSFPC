
#include "mindmachine.h"

void mindmachine::setup(){
  
    freq.set("Brain Frequency", 5, 1, 20);
    parameters.add(freq);
    
    flip = 1;
    
    setOriginalArtist("William Grey Walter");
    setAuthor("Christopher Pietsch");
    
    loadCode("scenes/mindmachine/exampleCode.cpp");
}

void mindmachine::update(){
    
}

void mindmachine::draw(){
    int microsePerWave = (int)( 1000*1000 / ( freq *2 ));
    int wave = ofGetElapsedTimeMicros() / microsePerWave;
    int lastWave = last / microsePerWave;
    last = ofGetElapsedTimeMicros();
    
    if(wave > lastWave) flip *= -1;
    int alpha = ofMap(flip, -1, 1, 0, 255);
    
    ofBackground(alpha);
}
