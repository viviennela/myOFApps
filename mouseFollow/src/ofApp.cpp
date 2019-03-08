#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofBackground(0);
    
}

//--------------------------------------------------------------
void ofApp::update(){

//    easing the position toward the mouse
//    position.x = mouseX * 0.5 + position.x * 0.5;  // averaging/mean
    
//    Long way:
//    position.x = mouseX * 0.01 + position.x * 0.99;  // 99 % the original value - make a point move toward another
//    position.y = mouseY * 0.01 + position.y * 0.99;  // must equal 100
    
    position.interpolate(ofPoint(mouseX, mouseY), 0.01);
    
    
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){

    ofDrawCircle(position, 30);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
