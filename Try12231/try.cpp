//C++ Primer Plus 课后习题 p63 3.7 
// by itAir
// Try to use Google C++ programing style
// dir2/foo2.h（优先位置，详情如下）
//C 系统文件
//        C++系统文件
//        其他库头文件
//        本项目内头文件
#include "try.h"
#include <iostream>
using namespace std;

void main(){
	cout<< "C++_Primer_Plus"<<endl;
	cout<<"    by itAir"<<endl;        
	cout<<"Hello World!"<<endl;
	cout<<"_________________________________"<<endl<<endl;        

	//1
// 	int height;
// 	const int inchesprefoor=12;
// 	cout<< " Enter your bodyheight by inches: _______\b\b\b\b\b";
// 	cin>> height;
// 	int hf,hi;
// 	hf = height / inchesprefoor;
// 	hi = height % inchesprefoor;
//   cout<< "\n Your height is "<< hf <<" feet and "<< hi <<" inches. "<<endl;
// 	cout<<"_________________________________"<<endl<<endl;   
	//

	//2
 	int stature,weight;

 	const int inchesprefoor=12;
 	cout<< " Enter your stature by inches: _______\b\b\b\b\b";
 	cin>> stature;
	cout<< " Enter your bodyweight by pounds: _______\b\b\b\b\b";
	cin>>weight;

	const double metersperinch = 0.0254;
	const double poundsperkg = 2.2;
 	int hf,hi; 	
	double kg,bmi,meter;
	hf = stature / inchesprefoor;
	hi = stature % inchesprefoor;
	meter = stature * metersperinch;
	kg = weight / poundsperkg;
	bmi = kg / ( meter * meter);
	cout<<" Your body statics are "<<meter<<"m and "<<kg<<" kg"<<endl;
	cout<< " Your BMI is: "<<bmi<<endl;
	cout<<"_________________________________"<<endl<<endl;   
	//计算转换；

	system("pause");

}