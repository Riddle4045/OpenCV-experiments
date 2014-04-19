#include "opencv2/highgui/highgui.hpp"
#include "iostream"
using namespace std;
using namespace cv;

int main(int argc , char** argv){
		

	VideoCapture cap(0);
	if (!cap.isOpened()){
		
		cout << "Cannot open your camera" << endl;
		return -1;
	}
	//double frameWidth = cap.get(CV_CAP_PROP_FRAME_WIDTH);
	//double frameHeight = cap.get(CV_CAP_PROP_FRAME_HEIGHT);
	//double frameNum = cap.get(CV_CAP_PROP_POS_FRAMES);
	//cout << "Frame is with Height :" << frameHeight << "and width:" <<frameWidth << endl;
	namedWindow("MyVideo",CV_WINDOW_AUTOSIZE);
	int count = 0;		
	while (1) {
		Mat frame;
		cout << "frame num:" << count << endl;
		bool bsuccess = cap.read(frame);
	 	if (!bsuccess) {	
		cout << "Cannot read the frame from the video" << endl;
		break;
		}
		imshow("MyVideo",frame);
		if ( waitKey(30) == 27 ) {	
			cout << "user pressed the escape key to escape" << endl;
			break;			
		}
		count++;
}	
	return 0;
	}
		
