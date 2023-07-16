#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;

class Quick
{
private:
    /* data */
public:
    Quick();
    ~Quick();

    void show(Mat &image);
    void operation_pixel(Mat &image);
    void operation_operator(Mat &image);
    void create(Mat &image);
    void colorSpace(Mat &image);
    void write_image(string name, Mat &image);
};