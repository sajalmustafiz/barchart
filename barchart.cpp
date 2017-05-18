#include<graphics.h>
#include<conio.h>
int main()

{
initwindow(1000,1000,"GRAPHICS LAB");
outtextxy(335,80,"Bar Chart");

setcolor(YELLOW);
rectangle(100,100,650,650);

setcolor(WHITE);



line(265,130,265,630);
line(265,130,260,135);
line(265,130,270,135);


line(265,630,260,625);
line(265,630,270,625);


line(150,500,620,500);
line(150,500,155,495);
line(150,500,155,505);



line(620,500,615,495);
line(620,500,615,505);


setfillstyle(SOLID_FILL,RED);
bar(300,200,340,500);

setfillstyle(SOLID_FILL,BLUE);
bar(360,240,400,500);

setfillstyle(SOLID_FILL,MAGENTA);
bar(420,260,460,500);

setfillstyle(SOLID_FILL,GREEN);
bar(480,300,520,500);

setfillstyle(SOLID_FILL,WHITE);
bar(540,340,580,500);




outtextxy(300,660,"Faruq Ahmed Masum");
getch();
closegraph();
return 0;

}

