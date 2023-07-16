#include "Quick.hpp"

Quick::Quick()
{
}

Quick::~Quick()
{
}

void Quick::show(cv::Mat &image)
{
    namedWindow("priview", WINDOW_NORMAL);
    Size size = Size(640, 360);
    resizeWindow("priview", size);
    // imshow("preview", image);

    // colorSpace(image);
    // create(image);
    pixel_manipulation(image);

    waitKey(0);
    destroyAllWindows();
}

void Quick::pixel_manipulation(Mat &image)
{
}

void Quick::create(Mat &image)
{
    // clone
    Mat clone_image, copy_image;
    clone_image = image.clone();
    image.copyTo(copy_image);

    imshow("clone_img", clone_image);

    // 创建 8 位无符号的单通道图片
    // Mat zero_image = Mat::zeros(Size(8, 8),CV_8UC1);

    // 每个像素点的第一通道的颜色值赋值为 1，如有多个通道也是只赋值第一通道
    Mat zero_image = Mat::ones(Size(8, 8), CV_8UC3);

    // 会把每个像素点第一个通道颜色值改为 127
    zero_image = 127;

    // 会把每个像素点第1~3通道颜色值改为 127（下面设置了BGR三个通道的，实际这个图片只有一个通道，会有问题）
    zero_image = Scalar(127, 127, 127);

    imshow("create", zero_image);

    std::cout << zero_image << std::endl;
    cout << "width:" << zero_image.cols << ", height:" << zero_image.rows << ", channels:" << zero_image.channels() << endl;

    /**
     [  0,   0,   0,   0,   0,   0,   0,   0;
        0,   0,   0,   0,   0,   0,   0,   0;
        0,   0,   0,   0,   0,   0,   0,   0;
        0,   0,   0,   0,   0,   0,   0,   0;
        0,   0,   0,   0,   0,   0,   0,   0;
        0,   0,   0,   0,   0,   0,   0,   0;
        0,   0,   0,   0,   0,   0,   0,   0;
        0,   0,   0,   0,   0,   0,   0,   0 ]
    */
}

void Quick::colorSpace(Mat &image)
{
    Mat gray, hsv;
    cvtColor(image, hsv, COLOR_RGB2HSV);
    cvtColor(image, gray, COLOR_RGB2GRAY);
    imshow("hvs", hsv);
    imshow("gray", gray);

    write_image("write_hsv.png", hsv);
    write_image("write_gray.png", gray);
}

void Quick::write_image(string name, Mat &image)
{
    string path = "/Users/meitu/Pictures/OpenCV专用/";
    path.append(name);
    imwrite(path, image);
}
