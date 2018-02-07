#include "Class.h"
#include "MainWindow.h"
#include "Bianbian.h"


wanjia::wanjia()
	   :rand(seed()),//��ȡ���
	   fitX(0,Graphics::max.x-face.x),
	   fitY(0, Graphics::max.y - face.y)
{
	pos.x = fitX(rand);//���Xλ�����
	pos.y = fitY(rand);//���Yλ�����
	static int i = 0;//��̬��ѭ����ÿ�δ���һ����i����һ��
	id = i;
	i++;
}

void wanjia::jiance_biankuang()//�������Ƿ񳬳��߽�
{
	pos.clamp(Graphics::min, Graphics::max - wanjia::face);
}

void wanjia::movePlayA(const Keyboard& kbd)//���A�ƶ�
{
	if (kbd.KeyIsPressed(VK_UP))//���������ƶ�
		pos.y -= v.y;
	if (kbd.KeyIsPressed(VK_DOWN))//���������ƶ�
		pos.y += v.y;
	if (kbd.KeyIsPressed(VK_LEFT))//���������ƶ�
		pos.x -= v.x;
	if (kbd.KeyIsPressed(VK_RIGHT))//���������ƶ�
		pos.x += v.x;
}

void wanjia::movePlayB(const Keyboard & kbd)//�������B�ƶ�
{
	if (kbd.KeyIsPressed('W'))
		pos.y -= v.y;
	if (kbd.KeyIsPressed('S'))
		pos.y += v.y;
	if (kbd.KeyIsPressed('A'))
		pos.x -= v.x;
	if (kbd.KeyIsPressed('D'))
		pos.x += v.x;
}

void wanjia::jifen(const bianbian & bianbian)//���bianbian����ID�룬�Լ����ID��ͬ�����һ��
{
	if (bianbian.getchiID() == id)
		score++;
}

void wanjia::huizhiPlayA(Graphics & gfx) const//�������A
{
	gfx.PutPixel(7 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(8 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(9 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(10 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 1 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 1 + pos.y, 0, 0, 0);
	gfx.PutPixel(7 + pos.x, 1 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 1 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 1 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 1 + pos.y, 254, 221, 88);
	gfx.PutPixel(11 + pos.x, 1 + pos.y, 254, 221, 88);
	gfx.PutPixel(12 + pos.x, 1 + pos.y, 254, 221, 88);
	gfx.PutPixel(13 + pos.x, 1 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 1 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 2 + pos.y, 0, 0, 0);
	gfx.PutPixel(4 + pos.x, 2 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(6 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(11 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(12 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(13 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(14 + pos.x, 2 + pos.y, 254, 221, 88);
	gfx.PutPixel(15 + pos.x, 2 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 2 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 3 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(4 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(5 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(6 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(11 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(12 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(13 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(14 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(15 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(16 + pos.x, 3 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 3 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 4 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(4 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(5 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(6 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(11 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(12 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(13 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(14 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(15 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(16 + pos.x, 4 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 4 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(3 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(4 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(6 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(11 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(13 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(16 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 5 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 6 + pos.y, 255, 255, 255);
	gfx.PutPixel(4 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 6 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 6 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 6 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 6 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 6 + pos.y, 255, 255, 255);
	gfx.PutPixel(12 + pos.x, 6 + pos.y, 255, 255, 255);
	gfx.PutPixel(13 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 6 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 6 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 7 + pos.y, 255, 255, 255);
	gfx.PutPixel(3 + pos.x, 7 + pos.y, 255, 255, 255);
	gfx.PutPixel(4 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 7 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 7 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 7 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 7 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 7 + pos.y, 255, 255, 255);
	gfx.PutPixel(12 + pos.x, 7 + pos.y, 255, 255, 255);
	gfx.PutPixel(13 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 7 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 7 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 7 + pos.y, 254, 221, 88);
	gfx.PutPixel(19 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(3 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(4 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(5 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 8 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 8 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 8 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 8 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(12 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(13 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(14 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(15 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 8 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 8 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 8 + pos.y, 254, 221, 88);
	gfx.PutPixel(19 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(2 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(4 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(11 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(13 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(16 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 9 + pos.y, 254, 221, 88);
	gfx.PutPixel(19 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 10 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(2 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(3 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(4 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(5 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(6 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(11 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(12 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(13 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(14 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(15 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(16 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 10 + pos.y, 254, 221, 88);
	gfx.PutPixel(19 + pos.x, 10 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 11 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(2 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(3 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(4 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(5 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(6 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(7 + pos.x, 11 + pos.y, 20, 14, 18);
	gfx.PutPixel(8 + pos.x, 11 + pos.y, 18, 11, 14);
	gfx.PutPixel(9 + pos.x, 11 + pos.y, 18, 12, 14);
	gfx.PutPixel(10 + pos.x, 11 + pos.y, 18, 12, 14);
	gfx.PutPixel(11 + pos.x, 11 + pos.y, 21, 13, 16);
	gfx.PutPixel(12 + pos.x, 11 + pos.y, 24, 11, 15);
	gfx.PutPixel(13 + pos.x, 11 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(15 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(16 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 11 + pos.y, 254, 221, 88);
	gfx.PutPixel(19 + pos.x, 11 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 12 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 12 + pos.y, 254, 221, 88);
	gfx.PutPixel(2 + pos.x, 12 + pos.y, 254, 221, 88);
	gfx.PutPixel(3 + pos.x, 12 + pos.y, 254, 221, 88);
	gfx.PutPixel(4 + pos.x, 12 + pos.y, 254, 221, 88);
	gfx.PutPixel(5 + pos.x, 12 + pos.y, 254, 221, 88);
	gfx.PutPixel(6 + pos.x, 12 + pos.y, 23, 9, 23);
	gfx.PutPixel(7 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(9 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(10 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(11 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(12 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(13 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(14 + pos.x, 12 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 12 + pos.y, 254, 221, 88);
	gfx.PutPixel(16 + pos.x, 12 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 12 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 12 + pos.y, 254, 221, 88);
	gfx.PutPixel(19 + pos.x, 12 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 13 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 13 + pos.y, 254, 221, 88);
	gfx.PutPixel(3 + pos.x, 13 + pos.y, 254, 221, 88);
	gfx.PutPixel(4 + pos.x, 13 + pos.y, 254, 221, 88);
	gfx.PutPixel(5 + pos.x, 13 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(7 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(9 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(10 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(11 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(12 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(13 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(14 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(15 + pos.x, 13 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 13 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 13 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 13 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 14 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 14 + pos.y, 254, 221, 88);
	gfx.PutPixel(3 + pos.x, 14 + pos.y, 254, 221, 88);
	gfx.PutPixel(4 + pos.x, 14 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(6 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(7 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(9 + pos.x, 14 + pos.y, 251, 192, 224);
	gfx.PutPixel(10 + pos.x, 14 + pos.y, 251, 192, 224);
	gfx.PutPixel(11 + pos.x, 14 + pos.y, 251, 192, 224);
	gfx.PutPixel(12 + pos.x, 14 + pos.y, 251, 192, 224);
	gfx.PutPixel(13 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(14 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(15 + pos.x, 14 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 14 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 14 + pos.y, 254, 221, 88);
	gfx.PutPixel(18 + pos.x, 14 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 15 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 15 + pos.y, 254, 221, 88);
	gfx.PutPixel(4 + pos.x, 15 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 15 + pos.y, 135, 26, 68);
	gfx.PutPixel(6 + pos.x, 15 + pos.y, 135, 26, 68);
	gfx.PutPixel(7 + pos.x, 15 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(9 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(10 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(11 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(12 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(13 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(14 + pos.x, 15 + pos.y, 135, 26, 68);
	gfx.PutPixel(15 + pos.x, 15 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 15 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 15 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 16 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 16 + pos.y, 254, 221, 88);
	gfx.PutPixel(4 + pos.x, 16 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 16 + pos.y, 135, 26, 68);
	gfx.PutPixel(6 + pos.x, 16 + pos.y, 135, 26, 68);
	gfx.PutPixel(7 + pos.x, 16 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(9 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(10 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(11 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(12 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(13 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(14 + pos.x, 16 + pos.y, 135, 26, 68);
	gfx.PutPixel(15 + pos.x, 16 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 16 + pos.y, 254, 221, 88);
	gfx.PutPixel(17 + pos.x, 16 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(4 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(7 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(8 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(9 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(10 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(13 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 18 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 18 + pos.y, 0, 0, 0);
	gfx.PutPixel(7 + pos.x, 18 + pos.y, 254, 221, 88);
	gfx.PutPixel(8 + pos.x, 18 + pos.y, 254, 221, 88);
	gfx.PutPixel(9 + pos.x, 18 + pos.y, 254, 221, 88);
	gfx.PutPixel(10 + pos.x, 18 + pos.y, 254, 221, 88);
	gfx.PutPixel(11 + pos.x, 18 + pos.y, 254, 221, 88);
	gfx.PutPixel(12 + pos.x, 18 + pos.y, 254, 221, 88);
	gfx.PutPixel(13 + pos.x, 18 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 18 + pos.y, 0, 0, 0);
	gfx.PutPixel(7 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(8 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(9 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(10 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 19 + pos.y, 0, 0, 0);

}

void wanjia::huizhiPlayB(Graphics & gfx) const//�������B
{
	gfx.PutPixel(7 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(8 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(9 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(10 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 0 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 1 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 1 + pos.y, 0, 0, 0);
	gfx.PutPixel(7 + pos.x, 1 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 1 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 1 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 1 + pos.y,  88,254,221);
	gfx.PutPixel(11 + pos.x, 1 + pos.y,  88,254,221);
	gfx.PutPixel(12 + pos.x, 1 + pos.y,  88,254,221);
	gfx.PutPixel(13 + pos.x, 1 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 1 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 2 + pos.y, 0, 0, 0);
	gfx.PutPixel(4 + pos.x, 2 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(6 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(11 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(12 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(13 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(14 + pos.x, 2 + pos.y,  88,254,221);
	gfx.PutPixel(15 + pos.x, 2 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 2 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 3 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(4 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(5 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(6 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(11 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(12 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(13 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(14 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(15 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(16 + pos.x, 3 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 3 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 4 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(4 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(5 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(6 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(11 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(12 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(13 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(14 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(15 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(16 + pos.x, 4 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 4 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(3 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(4 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(6 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(11 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(13 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(16 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 5 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 5 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 6 + pos.y, 255, 255, 255);
	gfx.PutPixel(4 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 6 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 6 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 6 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 6 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 6 + pos.y, 255, 255, 255);
	gfx.PutPixel(12 + pos.x, 6 + pos.y, 255, 255, 255);
	gfx.PutPixel(13 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 6 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 6 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 6 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 7 + pos.y, 255, 255, 255);
	gfx.PutPixel(3 + pos.x, 7 + pos.y, 255, 255, 255);
	gfx.PutPixel(4 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 7 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 7 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 7 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 7 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 7 + pos.y, 255, 255, 255);
	gfx.PutPixel(12 + pos.x, 7 + pos.y, 255, 255, 255);
	gfx.PutPixel(13 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 7 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 7 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 7 + pos.y,  88,254,221);
	gfx.PutPixel(19 + pos.x, 7 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(3 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(4 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(5 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 8 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 8 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 8 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 8 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(12 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(13 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(14 + pos.x, 8 + pos.y, 255, 255, 255);
	gfx.PutPixel(15 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 8 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 8 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 8 + pos.y,  88,254,221);
	gfx.PutPixel(19 + pos.x, 8 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(2 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(4 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(11 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(13 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(16 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 9 + pos.y,  88,254,221);
	gfx.PutPixel(19 + pos.x, 9 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 10 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(2 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(3 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(4 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(5 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(6 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(11 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(12 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(13 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(14 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(15 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(16 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 10 + pos.y,  88,254,221);
	gfx.PutPixel(19 + pos.x, 10 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 11 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(2 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(3 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(4 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(5 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(6 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(7 + pos.x, 11 + pos.y, 20, 14, 18);
	gfx.PutPixel(8 + pos.x, 11 + pos.y, 18, 11, 14);
	gfx.PutPixel(9 + pos.x, 11 + pos.y, 18, 12, 14);
	gfx.PutPixel(10 + pos.x, 11 + pos.y, 18, 12, 14);
	gfx.PutPixel(11 + pos.x, 11 + pos.y, 21, 13, 16);
	gfx.PutPixel(12 + pos.x, 11 + pos.y, 24, 11, 15);
	gfx.PutPixel(13 + pos.x, 11 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(15 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(16 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 11 + pos.y,  88,254,221);
	gfx.PutPixel(19 + pos.x, 11 + pos.y, 0, 0, 0);
	gfx.PutPixel(0 + pos.x, 12 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 12 + pos.y,  88,254,221);
	gfx.PutPixel(2 + pos.x, 12 + pos.y,  88,254,221);
	gfx.PutPixel(3 + pos.x, 12 + pos.y,  88,254,221);
	gfx.PutPixel(4 + pos.x, 12 + pos.y,  88,254,221);
	gfx.PutPixel(5 + pos.x, 12 + pos.y,  88,254,221);
	gfx.PutPixel(6 + pos.x, 12 + pos.y, 23, 9, 23);
	gfx.PutPixel(7 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(9 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(10 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(11 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(12 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(13 + pos.x, 12 + pos.y, 135, 26, 68);
	gfx.PutPixel(14 + pos.x, 12 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 12 + pos.y,  88,254,221);
	gfx.PutPixel(16 + pos.x, 12 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 12 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 12 + pos.y,  88,254,221);
	gfx.PutPixel(19 + pos.x, 12 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 13 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 13 + pos.y,  88,254,221);
	gfx.PutPixel(3 + pos.x, 13 + pos.y,  88,254,221);
	gfx.PutPixel(4 + pos.x, 13 + pos.y,  88,254,221);
	gfx.PutPixel(5 + pos.x, 13 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(7 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(9 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(10 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(11 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(12 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(13 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(14 + pos.x, 13 + pos.y, 135, 26, 68);
	gfx.PutPixel(15 + pos.x, 13 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 13 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 13 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 13 + pos.y, 0, 0, 0);
	gfx.PutPixel(1 + pos.x, 14 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 14 + pos.y,  88,254,221);
	gfx.PutPixel(3 + pos.x, 14 + pos.y,  88,254,221);
	gfx.PutPixel(4 + pos.x, 14 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(6 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(7 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(9 + pos.x, 14 + pos.y, 251, 192, 224);
	gfx.PutPixel(10 + pos.x, 14 + pos.y, 251, 192, 224);
	gfx.PutPixel(11 + pos.x, 14 + pos.y, 251, 192, 224);
	gfx.PutPixel(12 + pos.x, 14 + pos.y, 251, 192, 224);
	gfx.PutPixel(13 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(14 + pos.x, 14 + pos.y, 135, 26, 68);
	gfx.PutPixel(15 + pos.x, 14 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 14 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 14 + pos.y,  88,254,221);
	gfx.PutPixel(18 + pos.x, 14 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 15 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 15 + pos.y,  88,254,221);
	gfx.PutPixel(4 + pos.x, 15 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 15 + pos.y, 135, 26, 68);
	gfx.PutPixel(6 + pos.x, 15 + pos.y, 135, 26, 68);
	gfx.PutPixel(7 + pos.x, 15 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(9 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(10 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(11 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(12 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(13 + pos.x, 15 + pos.y, 251, 192, 224);
	gfx.PutPixel(14 + pos.x, 15 + pos.y, 135, 26, 68);
	gfx.PutPixel(15 + pos.x, 15 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 15 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 15 + pos.y, 0, 0, 0);
	gfx.PutPixel(2 + pos.x, 16 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 16 + pos.y,  88,254,221);
	gfx.PutPixel(4 + pos.x, 16 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 16 + pos.y, 135, 26, 68);
	gfx.PutPixel(6 + pos.x, 16 + pos.y, 135, 26, 68);
	gfx.PutPixel(7 + pos.x, 16 + pos.y, 135, 26, 68);
	gfx.PutPixel(8 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(9 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(10 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(11 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(12 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(13 + pos.x, 16 + pos.y, 251, 192, 224);
	gfx.PutPixel(14 + pos.x, 16 + pos.y, 135, 26, 68);
	gfx.PutPixel(15 + pos.x, 16 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 16 + pos.y,  88,254,221);
	gfx.PutPixel(17 + pos.x, 16 + pos.y, 0, 0, 0);
	gfx.PutPixel(3 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(4 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(7 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(8 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(9 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(10 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(13 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(15 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(16 + pos.x, 17 + pos.y, 0, 0, 0);
	gfx.PutPixel(5 + pos.x, 18 + pos.y, 0, 0, 0);
	gfx.PutPixel(6 + pos.x, 18 + pos.y, 0, 0, 0);
	gfx.PutPixel(7 + pos.x, 18 + pos.y,  88,254,221);
	gfx.PutPixel(8 + pos.x, 18 + pos.y,  88,254,221);
	gfx.PutPixel(9 + pos.x, 18 + pos.y,  88,254,221);
	gfx.PutPixel(10 + pos.x, 18 + pos.y,  88,254,221);
	gfx.PutPixel(11 + pos.x, 18 + pos.y,  88,254,221);
	gfx.PutPixel(12 + pos.x, 18 + pos.y,  88,254,221);
	gfx.PutPixel(13 + pos.x, 18 + pos.y, 0, 0, 0);
	gfx.PutPixel(14 + pos.x, 18 + pos.y, 0, 0, 0);
	gfx.PutPixel(7 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(8 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(9 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(10 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(11 + pos.x, 19 + pos.y, 0, 0, 0);
	gfx.PutPixel(12 + pos.x, 19 + pos.y, 0, 0, 0);

}

void wanjia::huizhiJifenbanA(Graphics & gfx) const//����A�Ļ��ְ�
{
	for (int i = 0; i < score; i++)
	{
		gfx.Jifenban(5, 597 - i * 4, 10, 3, Colors::Yellow);
	}
}

void wanjia::huizhiJifenbanB(Graphics & gfx) const//����B���ְ�
{
	for (int i = 0; i < score; i++)
	{
		gfx.Jifenban(20, 597 - i * 4, 10, 3, Colors::Cyan);
	}
}