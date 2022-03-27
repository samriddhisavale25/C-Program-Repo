#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"c://TurboC3//BGI");
	for(i=0;i<=4;i++)
	{
		setcolor(i);
		circle(100,100,20*i);
	}
	getch();
}