//____/____ WELCOME ALL OF YOU ON COMPUTER SOFT SKILLS CHANNEL _____\______//

//----------------- C++ PROGRAM TO DRAW QUTUB MINAR ----------------------\\
/*________________________________________________________________________*/

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c://tc//bgi");

	rectangle(10,10,610,476);
	rectangle(15,15,605,471);

	setfillstyle(10,10);
	line(255,470,265,355);
	line(350,470,340,355);
	ellipse(303,357,180,360,50,15);
	ellipse(303,347,180,360,50,15);
	floodfill(260,455,15);

	setfillstyle(2,15);
	line(265,355,273,255);
	line(340,355,332,255);
	ellipse(303,247,180,360,40,15);
	ellipse(303,257,180,360,40,15);
	floodfill(270,357,15);

	setfillstyle(10,15);
	line(273,255,280,170);
	line(332,255,325,170);
	ellipse(303,170,180,360,30,13);
	ellipse(303,177,180,360,30,13);
	floodfill(275,255,15);

	setfillstyle(9,4);
	line(280,178,285,120);
	line(325,178,318,120);
	ellipse(302,115,180,360,23,10);
	ellipse(302,120,180,360,23,10);
	floodfill(282,175,15);

	setfillstyle(6,4);
	line(285,120,290,70);
	line(318,120,313,70);
	ellipse(302,75,180,360,17,5);
	ellipse(302,80,180,360,17,5);
	floodfill(286,118,15);

	setfillstyle(7,YELLOW);
	line(290,70,313,70);
	floodfill(291,71,15);

	setcolor(11);
	line(293,68,296,40);
	line(310,68,307,40);
	line(296,40,307,40);
	line(296,40,287,30);
	line(307,40,315,30);
	ellipse(301,30,0,360,13,3);
	line(297,68,297,58);
	line(297,58,304,58);
	line(304,58,304,68);

   setcolor(6);
   outtextxy(50,30,"I AM PROUD");
   setcolor(15);
   outtextxy(65,45,"TO BE");
   setcolor(10);
   outtextxy(50,60,"AN INDIAN");
   outtextxy(435,430,"Created by :- ");
   outtextxy(435,445,"COMPUTER SOFT SKILLS");
   outtextxy(435,460,"(ROHIT)");

getch();
}

/*---------------- I HOPE YOU LIKE THIS PROGRAMMING ---------------------*/

/*____________ LIKE __________ SHARE _________ SUBSCRIBE _________________*/




