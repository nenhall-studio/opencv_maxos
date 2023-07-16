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
    imshow("preview", image);

    // colorSpace(image);
    // create(image);
    // operation_pixel(image);
    operation_operator(image);

    waitKey(0);
    destroyAllWindows();
}

// 像素操作 2
void Quick::operation_operator(Mat &image)
{
    Mat dst;
    // dst = image + Scalar(50, 50, 50);
    // dst = image - Scalar(50, 50, 50);
    // dst = image / Scalar(2, 2, 2);

    // 乘需要使用 opencv 专用的方法
    Mat m = Mat::zeros(image.size(), image.type());
    m = Scalar(2, 2, 2);
    multiply(image, m, dst);
    add(image, m, dst);
    subtract(image, m, dst);
    divide(image, m, dst);

    // 方式二： 自己使用 for 循环进行修改，但更建议使用上面的 opencv 提供的运算方法
    /**
    dst = Mat::zeros(image.size(), image.type());
    int width = image.cols;
    int height = image.rows;
    int channels = image.channels();
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            if (channels == 3)
            {
                Vec3b p1 = image.at<Vec3b>(row, col);
                Vec3b p2 = m.at<Vec3b>(row, col);
                // saturate_cast 是为了防止溢出，这个 saturate_cast 方法内部会自动处理溢出
                dst.at<Vec3b>(row, col)[0] = saturate_cast<uchar>(p1[0] + p2[0]);
                dst.at<Vec3b>(row, col)[1] = saturate_cast<uchar>(p1[1] + p2[1]);
                dst.at<Vec3b>(row, col)[2] = saturate_cast<uchar>(p1[2] + p2[2]);
            }
        }
    }
    */
    imshow("operation2", dst);
}

// 像素操作 1
void Quick::operation_pixel(Mat &c_image)
{
    Mat image = c_image.clone();
    int width = image.cols;
    int height = image.rows;
    int channels = image.channels();

    /**
    for (int row = 0; row < height; row++)
    {
        for (int col = 0; col < width; col++)
        {
            // 灰度图像
            if (channels == 1)
            {
                int pv = image.at<uchar>(row, col);
                image.at<uchar>(row, col) = 255 - pv;
            }
            if (channels == 3)
            {
                Vec3b bgr = image.at<Vec3b>(row, col);
                image.at<Vec3b>(row, col)[0] = 255 - bgr[0];
                image.at<Vec3b>(row, col)[1] = 255 - bgr[1];
                image.at<Vec3b>(row, col)[2] = 255 - bgr[2];
            }
        }
    }
    */

    // 方式二：使用指针
    for (int row = 0; row < height; row++)
    {
        uchar *current_row = image.ptr<uchar>(row);
        for (int col = 0; col < width; col++)
        {
            // 灰度图像
            if (channels == 1)
            {
                int pv = *current_row;
                *current_row++ = 255 - pv;
            }
            if (channels == 3)
            {
                *current_row++ = 255 - *current_row;
                *current_row++ = 255 - *current_row;
                *current_row++ = 255 - *current_row;
            }
        }
    }
    imshow("pixel.preview", image);
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

    // 会把每个像素点第一个通道颜色值改为 127, 这里其实利用了 C++ 的运算符重载
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
