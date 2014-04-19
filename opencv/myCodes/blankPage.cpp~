#include "opencv2/highgui/highgui.hpp"
#include "iostream"
using namespace std;
using namespace cv;

int main( int argc ,const char** argv){
		
	Mat img(500, 1000, CV_8UC3, Scalar(0,100,200));
	if ( img.empty() ) {
			cout << "could not initialzie img" << endl;
			system("pause");
			return -1;
		}
        //cout << img << endl;
	namedWindow("Ishan'sArt",CV_WINDOW_AUTOSIZE);
	imshow("Ishan'sArt", img);
        waitKey(0);
        destroyWindow("Ishan'sArt");
	return 0;
}

