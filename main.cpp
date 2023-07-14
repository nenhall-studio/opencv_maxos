#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    std::string image_path = "/Users/meitu/Pictures/OpenCV专用/opencv_front.png";
    cv::Mat image = cv::imread(image_path, cv::IMREAD_COLOR);

    if (image.empty())
    {
        std::cerr << "Could not read the image: " << image_path << std::endl;
        return 1;
    }

    cv::namedWindow("new", 1);

    cv::imshow("Display window", image);
    int k = cv::waitKey(0);

    return 0;
}
