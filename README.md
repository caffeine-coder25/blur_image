A C++ project to blur or smooth images using Homogeneous Blur.

INTRODUCTION:

This packet can be used to blur or smooth images. This project is based on C++ and OpenCV library. 

ABOUT:

Homogeneous Blur is the simplest method of smoothing an image. In this technique, each pixel value is calculated as the average value of the neighbourhood of the pixel defined by the kernel. Kernels used in the homogeneous blur is called normalized box filter. 

You may define any size for this kernel according to your requirement. But it is preferable to define square kernels with a size of odd width and height. In the following project, I have used 99 x 99 normalized box filters.

You have to choose the right size of the kernel to define the neighbourhood of each pixel. If it is too large, small features of the image may be disappeared and the image will look blurred. If it is too small, you cannot eliminate noises in the image.

In simple words, I have used 99 x 99 normalized box filters, you can control the intensity of the blur with the size of the kernel, increase to increase the intensity of blur and decrease to decrease the intensity of the blur.


REQUIREMENTS:
1. System should have OpenCV installed.
2. System should have GCC installed.
3. Any IDE (preferably Xcode or Visual Studio as setup of OpenCV will be easier in these)
4. Developer must give the correct path of the image that has to be blurred.


CONCLUSION:
The output shows the original image and the blurred image.
Thanks & Happy Coding :)
