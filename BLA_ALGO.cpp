#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
	int gd=DETECT,gm;

   int x1,y1,x2,y2,dx,dy,p;
	initgraph(&gd,&gm,(char*)"");	

    cout<<"Enter values of x1 and y1";
    cin>>x1>>y1;
    cout<<"Enter the values of x2 and y2";
    cin>>x2>>y2;
    dx=x2-x1;
    dy=y2-y1;
    p=2*dy-dx;
    //putting the first pixel
    putpixel(x1,y1,5);
    for(int i=0;i<dx;i++){
    	if(p<0){
    		x1=x1+1;
    		p=p+2*dy;
		}
		else{
			x1=x1+1;
			y1=y1+1;
			p=p+2*dy-2*dx;
		}
		putpixel(x1,y1,3);
		delay(30);
	}
	getch();
	closegraph();
}
