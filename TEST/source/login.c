#include <stdio.h>
#include <graphics.h>
#include "login.h"
#include	"mouse.h" 
#include "hz.h"
#include <string.h>

void login(){
	int lx=120,ly=90,rx=520,ry=400;
	char user_name[21],pass_word[21];
	
	cleardevice();
	
	setbkcolor(WHITE);
	setviewport(0,0,640,480,1);	
	setcolor(LIGHTGRAY);
	rectangle(lx-5,ly-5,rx+5,ry+5);
	setfillstyle(1,LIGHTGRAY);
	bar(lx,ly,rx,ry);
	puthz(10,10,"备忘录",48,60,DARKGRAY);
	setlinestyle(0,0,3);
    setcolor(DARKGRAY);
	line(10,61,185,61);
	line(154,140,154,164);
	line(154,270,154,294);
	setlinestyle(0,0,1);
	setfillstyle(1,WHITE);
	bar(197,167,443,197);
	bar(197,297,443,327);
	setfillstyle(1,DARKGRAY);
	pieslice(rx,ry,90,180,60);
	pieslice(640,0,180,270,100);
	setcolor(WHITE);
	settextstyle(0,0,1);
	outtextxy(470,375,"log in");
	settextstyle(1,0,5);
	outtextxy(560,10,"Exit");
	puthz(160,140,"用户名",24,24,DARKGRAY);
	puthz(160,270,"密码",24,24,DARKGRAY);
	setcolor(LIGHTGRAY);
	rectangle(200,170,440,194);
	rectangle(200,300,440,324);
	
	//以上为绘图部分 
	mouseinit();
	press=0;
	while(1){
		newmouse(&MouseX,&MouseY,&press);
		delay(10); 
		if(mousescan(200,170,440,194)){//用户名输入框 
			MouseS=2;
			if(press==1){
				line(204,172,204,192);
				setfillstyle(1,WHITE);
				bar(201,302,205,322);
				//input(user_name);
			}
		}
		else if(mousescan(200,300,440,324)){//密码输入框 
			MouseS=2;
			if(press==1){
				line(204,302,204,322);
				setfillstyle(1,WHITE);
				bar(201,172,205,192);
			}
		}
		else if(mousescan(460,360,560,420)){ //登录界面的log in按钮 
			MouseS=1;
			setcolor(LIGHTGRAY);
			settextstyle(0,0,1);
			outtextxy(470,375,"log in");
		}
		else if(mousescan(550,0,640,60)){//登录界面的“exit”按钮 
			MouseS=1;
			setcolor(LIGHTGRAY);
			settextstyle(1,0,5);
			outtextxy(560,10,"Exit");		
			if(press==1){
				exit(1);
			}
		}
		else{
			MouseS=0;
			setcolor(WHITE);
			settextstyle(0,0,1);
			outtextxy(470,375,"log in");
			settextstyle(1,0,5);
			outtextxy(560,10,"Exit");
			if (press==1){
				setfillstyle(1,WHITE);
				bar(201,302,205,322);
				bar(201,172,205,192);
			}
		}
	}
	press=0;
	clrmous(MouseX,MouseY);
}
