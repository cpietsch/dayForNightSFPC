// you might want to close your eyes and let go

void draw(){
    int microsePerWave = (int)( 1000*1000 / ( [[Brain Frequency]] *2 ));
    int wave = ofGetElapsedTimeMicros() / microsePerWave;
    int lastWave = last / microsePerWave;
    last = ofGetElapsedTimeMicros();
    
    if(wave > lastWave) flip *= -1;
    int alpha = ofMap(flip, -1, 1, 0, 255);
    
    ofBackground(alpha);
}