#include<bits/stdc++.h>
#include<graphics.h>
using namespace std;

int main(){
	int gd=DETECT,gm;

   int x1,y1,x2,y2,x3,y3;
   int kx,ky;  
	initgraph(&gd,&gm,(char*)"");	

      x1=60; //line points
      y1=90;
      x2=60;
      y2=60;
      x3=36;
      y3=42;
       //Drawing the triangle with intersecting line segments
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    cout<<"Enter your scaling factors for x and y";
    cin>>kx>>ky;
    //Scaling Formula

    line(x1*kx,y1*ky,x2*kx,y2*ky);
    line(x2*kx,y2*ky,x3*kx,y3*ky);
    line(x3*kx,y3*ky,x1*kx,y1*ky);
    getch();
    closegraph();
}
