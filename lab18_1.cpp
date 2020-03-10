#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main(){
	Rect R1,R2;
	cout << "Please input Rect 1 (x y w h): ";
	cin>>R1.x>>R1.y>>R1.w>>R1.h;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>R2.x>>R2.y>>R2.w>>R2.h;
	cout << "Overlap area = "<<overlap(R1,R2);
	
	return 0;
}
double findarea(Rect R){
	return R.w*R.h;
}


double overlap(Rect R1,Rect R2){
	double a,b,c,d,e,f;
	Rect R3;
	a = findarea(R1);
	b = findarea(R2);
	//if(R1.x < (R2.x+R2.w) && R1.y > (R2.y-R2.h) && (R1.x+R1.w) > R2.x && (R1.y-R1.h) > R2.y){
		R3.w = min(R1.x+R1.w,R2.x+R2.w)-max(R1.x,R2.x);
		R3.h = min(R1.y,R2.y)-max(R1.y-R1.h,R2.y-R2.h);
		e = findarea(R3);
		if (e>=0){
			return e;
		}else return 0;
	//}else return 0;

	
}
