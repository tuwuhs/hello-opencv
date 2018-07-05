
#include "opencv2/opencv.hpp"

#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char* argv[])
{
	cout << "Hello" << endl;
	cout << "OpenCV version: " << CV_VERSION << endl;
	
	Mat yeah = Mat::zeros(10, 10, CV_64FC1);
	cout << yeah << endl;
	
	return 0;
}
