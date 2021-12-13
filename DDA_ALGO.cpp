#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
	int gd=DETECT,gm;
	
	int x1,y1,x2,y2,h,dx,dy,i;
	float x,y,xin,yin;
	initgraph(&gd,&gm,(char*)"");

	cout<<"Enter x1,y1,x2,y2 respectively";
	cin>>x1>>y1>>x2>>y2;
	dx=x2-x1;
	dy=y2-y1;
	if (abs(dy)>abs(dx)){
		h=abs(dy);
	}
	else{
		h=abs(dx);
	}
	xin=dx/h;
	yin=dy/h;
	putpixel(x,y,5); //the first pixel
	for(int i=0;i<h;i++){
		x1=x1+xin;
		y1=y1+yin;
		putpixel(x1,y1,RED);
		delay(50);
	}
	getch();
	closegraph();
}
