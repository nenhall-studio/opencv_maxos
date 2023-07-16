#include <iostream>
#include <opencv2/opencv.hpp>
#include "Quick.hpp"

using namespace cv;
using namespace std;

int main()
{
    std::string image_path = "/Users/meitu/Pictures/皇亲国戚/DSC_8470.png";
    // Mat image = imread(image_path, IMREAD_GRAYSCALE);
    Mat image = imread(image_path);
    if (image.empty())
    {
        std::cerr << "Could not read the image: " << std::endl;
        return 0;
    }

    Quick demo = Quick();
    demo.show(image);

    return 0;
}
