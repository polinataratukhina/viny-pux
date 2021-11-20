#include "TXlib.h"
int main ()
{
txCreateWindow(1000,800);
txSetFillColor(RGB(102,179,219));
txSetColor(RGB(102,179,219));
txRectangle(0,0,1000,800);

txSetFillColor(RGB(85,251,55));
txRectangle(0,600,1000,800);

txSetFillColor(RGB(142,83,32));
txSetColor(RGB(142,83,32));
txCircle(175,300,100);
txCircle(175,150,75);
txCircle(130,80,25);
txCircle(220,80,25);
txSetFillColor(RGB(102,53,23));
txSetColor(RGB(102,53,23));
txCircle(175,160,35);
txSetFillColor(RGB(0,0,0));
txCircle(175,150,10);
txSetColor(RGB(0,0,0));
txLine(175,160,185,180);
txLine(175,160,165,180);
txCircle(150,115,5);
txCircle(200,115,5);
txSetFillColor(RGB(142,83,32));
txSetColor(RGB(142,83,32));
txEllipse(100,350,170,500);
txEllipse(270,350,200,500);
txEllipse(250,270,350,200);
txEllipse(100,250,40,150);

txSetFillColor(RGB(38,164,157));
txSetColor(RGB(38,164,157));
txCircle(350,100,100);






return 0;
}
