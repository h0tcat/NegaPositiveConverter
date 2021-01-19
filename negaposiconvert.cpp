#include <iostream>
#include <opencv2/core/core.hpp>
#include <opencv2/opencv.hpp>

int main(int argc,char** argv){
	if(argc!=2){
		std::cout << "Usage:negaposiconvert image_path" << std::endl;	
	
	}else{
		cv::Mat image;
		cv::Mat result;
		
		image=cv::imread(argv[1]);
		cv::bitwise_not(image,result);
		cv::imshow("ネガポジ反転",result);
		cv::waitKey(0);
	}
	return 0;
}
