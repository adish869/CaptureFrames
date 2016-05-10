
#include "opencv/cv.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <string>

using namespace std;
using namespace cv;

int main(int argc, char* argv[])
{
	if (argc != 3 && argc != 2)
	{
		cout << " Usage: CaptureFrames.exe <video file> <frame number> " << endl;
		cout << " OR\n Usage: CaptureFrames.exe <video file> --> In order to get the number of frames in the video " << endl;
		return -1;
	}

	string videoFname = argv[1];
	cv::Mat frame;
	cv::VideoCapture capture(videoFname);

	if (argc == 2)
	{
		cout << "The numbers of frames in the video is: " << capture.get(CV_CAP_PROP_FRAME_COUNT) << endl;
		return -1;
	}

	if (!capture.isOpened())
	{
		std::cout << "Cannot open video file";
		exit(-1);
	}
	double i = atoi(argv[2]);
	cout << i;

	for (;; ) {
		capture >> frame;
		if (frame.empty())
			break;
		//cout << "current frame number" << capture.get(CV_CAP_PROP_POS_FRAMES) << " i =" << i << "\n";
		//cout << "get" << capture.get(CV_CAP_PROP_POS_MSEC);
		if (capture.get(CV_CAP_PROP_POS_FRAMES) == i)
		{
			cout << "*************** i == CV_CAP_PROP_POS_FRAMES ************\n";
			char filename[80];
			sprintf(filename, "test_%d.png", int(i));
			imwrite(filename, frame);
			break;
		}
		char key = (char)waitKey(30);
	}
}

