#include<iostream>
#define PI 3.14159
using namespace std;
int main(){
	float radius, area,circum;
	cout<<"\n\n find the area and circumference of the circle:\n";
	cout<<"___________________________________________________\n";
	cout<<"input the radius(1\2 of diameter)of circle";
	cin>>radius;
	
	circum= 2*PI*radius;
	area= PI*(radius*radius);
	cout<<"area of circle"<<area;
	cout<<"circumference of circle"<<circum;
	 
	 return 0;
}
