#include<stdio.h>
#include<graphics.h>


int main(){
	int p1=VGA,p2=VGAHI;
	initgraph(&p1,&p2,"C:\\BORLANDC\\BGI");		//��ʼ��ͼ��ϵͳ 
	login();	//���ص�¼���� 
	getchar();
	closegraph();		//�ر�ͼ��ϵͳ 
	return 0;
}
