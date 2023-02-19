#include<stdio.h> 
#include<graphics.h>
#include<stdlib.h>
#include "draw.h"

void drawshanxing(int x, int y,int type,int r,int color){
	void *b1,*b2,*b3;
	unsigned s1,s2,s3;
	setcolor(color);
	switch(type){	//ѡ���ķ�֮һԲ���� �������� 
		case 1:
			s1=imagesize(x-r,y-r,x,y);
			s2=imagesize(x-r,y,x,y+r);
			s3=imagesize(x,y,x+r,y+r);	//��ȡ���ಿ���ڴ��С 
			b1=malloc(s1);
			b2=malloc(s2);
			b3=malloc(s3);		//���ݴ�С����ռ� 
			getimage(x-r,y-r,x,y,b1);
			getimage(x-r,y,x,y+r,b2);
			getimage(x,y,x+r,y+r,b3);		//�����ಿ�ִ��� 
			circle(x,y,r);		//������Բ 
			putimage(x-r,y-r,b1,COPY_PUT);
			putimage(x-r,y,b2,COPY_PUT);
			putimage(x,y,b3,COPY_PUT);		//�ָ����ಿ��ԭ״ 
			free(b1);
			free(b2);
			free(b3);		//�ͷ��ڴ� 
			break;		//����ע��ͬ�� 
		case 2:
			s1=imagesize(x,y-r,x+r,y);
			s2=imagesize(x-r,y,x,y+r);
			s3=imagesize(x,y,x+r,y+r);
			b1=malloc(s1);
			b2=malloc(s2);
			b3=malloc(s3);
			getimage(x,y-r,x+r,y,b1);
			getimage(x-r,y,x,y+r,b2);
			getimage(x,y,x+r,y+r,b3);
			circle(x,y,r);
			putimage(x,y-r,b1,COPY_PUT);
			putimage(x-r,y,b2,COPY_PUT);
			putimage(x,y,b3,COPY_PUT);
			free(b1);
			free(b2);
			free(b3);
			break;
		case 3:
			s1=imagesize(x-r,y-r,x,y);
			s2=imagesize(x,y-r,x+r,y);
			s3=imagesize(x,y,x+r,y+r);
			b1=malloc(s1);
			b2=malloc(s2);
			b3=malloc(s3);
			getimage(x-r,y-r,x,y,b1);
			getimage(x,y-r,x+r,y,b2);
			getimage(x,y,x+r,y+r,b3);
			circle(x,y,r);
			putimage(x-r,y-r,b1,COPY_PUT);
			putimage(x,y-r,b2,COPY_PUT);
			putimage(x,y,b3,COPY_PUT);
			free(b1);
			free(b2);
			free(b3);
			break;
		case 4:
			s1=imagesize(x-r,y-r,x,y);
			s2=imagesize(x-r,y,x,y+r);
			s3=imagesize(x,y-r,x+r,y);
			b1=malloc(s1);
			b2=malloc(s2);
			b3=malloc(s3);
			getimage(x-r,y-r,x,y,b1);
			getimage(x-r,y,x,y+r,b2);
			getimage(x,y-r,x+r,y,b3);
			circle(x,y,r);
			putimage(x-r,y-r,b1,COPY_PUT);
			putimage(x-r,y,b2,COPY_PUT);
			putimage(x,y-r,b3,COPY_PUT);
			free(b1);
			free(b2);
			free(b3);
			break;
	}
	line(x,y-r,x,y);	
	line(x-r,y,x,y); 	//�������α߽�
	setfillstyle(1,color);
	floodfill(x,y,color); 
}


