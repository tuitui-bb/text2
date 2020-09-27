#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
int main()
{
	cv::Mat disp;
	disp.create(Size(1000,1000),CV_8UC3);
	cv::Point pt;
	pt.x = 100;
	pt.y = 100;
	cv::Point pt1;
	cv::Point pt2;
	pt1.x = 20;
	pt2.y = 20;
	cv::Rect rect;
	rect.x = 15;
	rect.y = 15;
	rect.width;
	rect.height;
	rect.width = 10;
	rect.height = 10;
	rectangle(disp, rect, CV_RGB(255, 0, 0), 1, 8, 0);
	circle(disp, pt, 20, CV_RGB(255, 0, 0), 1, 8, 0);
	line(disp, pt1, pt2, CV_RGB(255, 0, 0), 1, 8, 0);
	imshow("src", disp);
	waitKey(0);
}