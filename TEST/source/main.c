#include<stdio.h>
#include<graphics.h>


int main(){
	int p1=VGA,p2=VGAHI;
	initgraph(&p1,&p2,"C:\\BORLANDC\\BGI");		//初始化图形系统 
	login();	//加载登录界面 
	getchar();
	closegraph();		//关闭图形系统 
	return 0;
}
