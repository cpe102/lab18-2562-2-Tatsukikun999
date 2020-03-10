//Modify function overlap() form lab18_1.cpp by using pointers as input arguments.
#include<iostream>
#include<cmath>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *,Rect *);

int main(){
	Rect R1,R2;
    Rect *a =&R1;
    Rect *b =&R2;
	cout << "Please input Rect 1 (x y w h): ";
	cin>>a->x>>a->y>>a->w>>a->h;
	cout << "Please input Rect 2 (x y w h): ";
	cin>>b->x>>b->y>>b->w>>b->h;
	cout << "Overlap area = "<< overlap(&R1,&R2);
	
	return 0;
}
double findarea(Rect R){
	return R.w*R.h;
}


double overlap(Rect *a,Rect *b){
	Rect R3;
    Rect *c = &R3;
	double e;
		c->w = min(a->x+a->w,b->x+b->w)-max(a->x,b->x);
		c->h = min(a->y,b->y)-max(a->y-a->h,b->y-b->h);
		e = findarea(R3);
		if (e>=0){
			return e;
		}else return 0;
	

	
}
