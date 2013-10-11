#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){
    ofBackground(110, 110, 100);
    ofSetCircleResolution(100);
    ofSetVerticalSync(true);
}

//--------------------------------------------------------------
void testApp::update(){

}

//--------------------------------------------------------------
void testApp::draw(){
    //dimensional array----------
    ofSeedRandom(0);
    for(int i=0; i<100; i++){
        for(int j=0; j<100; j++){
            ofSetColor(3*i, 3*j, 50, 5+i+j);
            ofCircle(20*i, 20*j, 9);
            ofSetColor(ofRandom(0,255), ofRandom(0,255), ofRandom(0,255), ofRandom(0,50));
            ofCircle(20*i, 20*j, 9);
        }
    }
    
    //Line-------
    ofSetColor(225, 225, 225, 50);
    ofSetLineWidth(1);
    ofLine(10, 10, 300, 200);
    ofEnableSmoothing();
    ofSetLineWidth(2);
    ofLine(300, 200, 490, 10);
    for(int i=0; i<20; i++){
        ofLine(300, 200, i*10+500, 10);
    }
    
    //Circle------
    ofSetColor(0, 0, 0, 50);
    ofCircle(300, 200, 190);
    ofCircle(300, 200, 100);
    for(int i=0; i<6; i++){
        ofCircle(i*100+300, i*100+200, 5);
    }
    
    //Rect--------
    ofSetColor(225, 225, 225, 30);
    ofRect(490, 10, 200, 190);
    ofNoFill();
    ofSetLineWidth(3);
    ofRect(200, 100, 200, 200);
    ofFill();
}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}
