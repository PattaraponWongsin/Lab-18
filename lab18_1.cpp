#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double R1_x2 = R1.x + R1.w;
    double R1_y2 = R1.y - R1.h;

    
    double R2_x2 = R2.x + R2.w;
    double R2_y2 = R2.y - R2.h;

    
    double overlap_w = min(R1_x2, R2_x2) - max(R1.x, R2.x);
    double overlap_h = min(R1.y, R2.y) - max(R1_y2, R2_y2);

    double overlap_area = max(0.0, overlap_w) * max(0.0, overlap_h);
    
    return overlap_area;




}
