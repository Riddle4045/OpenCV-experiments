#include "opencv2/highgui/highgui.hpp"
#include "iostream"
using namespace std;
using namespace cv;

int main() {
		Mat img(650,600,CV_16UC3,Scalar(0,255,0));
		if ( img.empty() ) 
			{
				cout << "could not make img" << endl;
				system("pause");
				return -1;
			}
		vector<int> compression_params;
		compression_params.push_back(CV_IMWRITE_JPEG_QUALITY);		
		compression_params.push_back(98);
	 	bool done = imwrite("MyFile.jpg",img);
		if (!done){
		cout << "Some problems in writing the image to file"<<endl;
			system("pause"); //wait for a key press
			return -1;}

	 namedWindow("MyWindow", CV_WINDOW_AUTOSIZE); //create a window with the name "MyWindow"
	imshow("MyWindow", img); //display the image which is stored in the 'img' in the "MyWindow" window
	waitKey(0);  //wait for a keypress
    	 destroyWindow("MyWindow"); //destroy the window with the name, "MyWindow"

return 0;
}
