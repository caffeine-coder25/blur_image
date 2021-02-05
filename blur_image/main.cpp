//
//  main.cpp
//  blur_image
//
//  Created by shubham  saxena  on 05/02/21.
//

#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
    Mat image = imread("/Users/caffeine_coder25/Desktop/just_code_it/coders_packet_internship/blur_image/rose.jpg");

    if (image.empty())
    {
        cout << "Could not open or find the image" << endl;
        cin.get();
        return -1;
    }

    Mat image_blurred_with_99x99_kernel;
    blur(image, image_blurred_with_99x99_kernel, Size(99, 99));

    String window_name = "The Rose";
    String window_name_blurred_with_99x99_kernel = "The Rose Blurred with 99 x 99 Kernel";

    namedWindow(window_name);
    namedWindow(window_name_blurred_with_99x99_kernel);

    imshow(window_name, image);
    imshow(window_name_blurred_with_99x99_kernel, image_blurred_with_99x99_kernel);

    waitKey(0);

    destroyAllWindows();
    
    return 0;
}
