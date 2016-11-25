#include<iostream>
#include<string>
#include "process.h"
#include "easypr/core/plate_recognize.h"
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace easypr;
using namespace std;
int main(){
	//ģ���ļ�model ��province_mapping��ŵ�һ���ļ������棬�����Ѿ���ȡ�����ŵ�model�ļ���
	//Դ����û�д������ʧ��������������,pathΪ�Լ���model�ļ�·��
	string path = "D:/workspace/git/EasyPR-native/model";
	Process *pr=new Process(path);
	
	Mat src = imread("D:/workspace/git/EasyPR-native/EasyPR/resources/image/test.jpg");
	string plate=pr->process(src);
	cout << plate << endl;
	getchar();
	delete pr;
	return 0;

}