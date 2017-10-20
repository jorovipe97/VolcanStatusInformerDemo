#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
	// ip receiver "25.11.116.11"
	ofBackground(40, 100, 40);

	// open an outgoing connection to HOST:PORT
	//sender.setup(HOST, PORT);
	volcanInformer.setup(HOST, PORT);
    imgAsBuffer = ofBufferFromFile("of-logo.png", true);

}

//--------------------------------------------------------------
void ofApp::update()
{

}

//--------------------------------------------------------------
void ofApp::draw()
{
	/*
    if(img.getWidth() > 0)
	{
        ofDrawBitmapString("Image:", 10, 160);
        img.draw(10, 180);
    }

	// display instructions
	string buf;
	buf = "sending osc messages to" + string(HOST) + ofToString(PORT);
	ofDrawBitmapString(buf, 10, 20);
	ofDrawBitmapString("move the mouse to send osc message [/mouse/position <x> <y>]", 10, 50);
	ofDrawBitmapString("click to send osc message [/mouse/button <button> <\"up\"|\"down\">]", 10, 65);
	ofDrawBitmapString("press A to send osc message [/test 1 3.5 hello <time>]", 10, 80);
	ofDrawBitmapString("press I to send a (small) image as a osc blob to [/image]", 10, 95);
	*/
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
	static float val = 0;

	/*if (key == OF_KEY_UP)
	{
		val += 20;
		printf("%f\n", val);
	}
	if (key == OF_KEY_DOWN)
	{
		val -= 20;
		printf("%f\n", val);
	}*/

	// Status 0
	if(key == 'a' || key == 'A')
	{
		volcanInformer.informTransitionStatus();
		/*ofxOscMessage m1;
		m1.setAddress("/tambor/status");
		m1.addIntArg(0);
		sender.sendMessage(m1, false);
		cout << "Sending 0" << endl;*/
	}

	// Status 1
	if (key == 's' || key == 'S')
	{
		volcanInformer.informDormidoStatus();
		/*ofxOscMessage m2;
		m2.setAddress("/tambor/status");
		m2.addIntArg(1);
		sender.sendMessage(m2, false);
		cout << "Sending 1" << endl;*/
	}

    //send an image. (Note: the size of the image depends greatly on your network buffer sizes - if an image is too big the message won't come through )
	// Status 2
    if( key == 'd' || key == 'D')
	{
		volcanInformer.informDespiertoStatus();
		/*ofxOscMessage m3;
		m3.setAddress("/tambor/status");
		m3.addIntArg(2);
		sender.sendMessage(m3, false);
        cout << "Sending 2" << endl;*/
    }

	if (key == 'f' || key == 'F')
	{
		volcanInformer.informNumCorrectKicks(++aciertos);
	}
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
	/*
	ofxOscMessage m;
	m.setAddress("/mouse/position");
	m.addIntArg(x);
	m.addIntArg(y);
	sender.sendMessage(m, false);*/
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	/*ofxOscMessage m;
	m.setAddress("/mouse/button");
	m.addIntArg(button);
	m.addStringArg("down");
	sender.sendMessage(m, false);*/
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

	/*ofxOscMessage m;
	m.setAddress("/mouse/button");
	m.addIntArg(button);
	m.addStringArg("up");
	sender.sendMessage(m, false);*/

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

