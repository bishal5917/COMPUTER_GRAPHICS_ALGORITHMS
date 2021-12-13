#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
	int gd=DETECT,gm;

    int xc,yc,x=0,y;
    int r=100;
    float d;
	initgraph(&gd,&gm,(char*)"");	

    cout<<"Enter the center points of the circle";
    cin>>xc>>yc;
    y=r;
    d=1-r;
    do{
    	//plotting the pixels
    	putpixel(xc+x,yc+y,5);
        putpixel(xc-y,yc-x,5);
        putpixel(xc+y,yc-x,5);
        putpixel(xc-y,yc+x,5);
        putpixel(xc+y,yc+x,5);
        putpixel(xc-x,yc-y,5);
        putpixel(xc+x,yc-y,5);
        putpixel(xc-x,yc+y,5);
    	if(d<0){
    		x=x+1;
    		d=d+2*x+1;
		}
		else{
			x=x+1;
			y=y-1;
			d=d+2*x-2*y+1;
		}
	}while(x<y);

	getch();
	closegraph();
}
