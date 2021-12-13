#include<bits/stdc++.h>
#include<graphics.h>

using namespace std;

int main(){
	int gd=DETECT,gm;

   int x1,y1,x2,y2,x3,y3;
   int xa,ya,xb,yb,xc,yc;

   double sinValue,cosValue,ang; 
    
	initgraph(&gd,&gm,(char*)"");	

      x1=300; //line points
      y1=350;
      x2=300;
      y2=300;
      x3=250;
      y3=250;
      
       //Drawing the triangle with intersecting line segments
    line(x1,y1,x2,y2);
    line(x2,y2,x3,y3);
    line(x3,y3,x1,y1);
    cout<<"Enter your rotation angle";
    cin>>ang;
    
    //calculating sin and cos values 
    //We will need these in formula
    cosValue = cos(ang * 3.14 /180);
    sinValue = sin(ang * 3.14 /180);
     
    //after rotation x1,y1
    //Taking the floor values
    xa = floor(x1 * cosValue + y1 * sinValue);
    ya = floor(-x1 * sinValue + y1 * cosValue);
 
    //after rotation x2,y2
    xb = floor(x2 * cosValue + y2 * sinValue);
    yb = floor(-x2 * sinValue + y2 * cosValue);
    
    //after rotation x3,y3
    xc = floor(x3 * cosValue + y3 * sinValue);
    yc = floor(-x3 * sinValue + y3 * cosValue);
    
    //After updating points , This will draw a rotated line
    line(xa,ya,xb,yb);
    line(xb,yb,xc,yc);
    line(xc,yc,xa,ya);
    getch();
    closegraph();
}
