#pragma once
#include "Vec2.h"
#include "Keyboard.h"
#include "Graphics.h"
#include "Bianbian.h"
#include <random>

class bianbian;

class wanjia
{
public:
	wanjia();//�������
	void jiance_biankuang();//�ж�����ƶ���Χ
	void movePlayA(const Keyboard& kbd);//��������ƶ�
	void movePlayB(const Keyboard& kbd);//��������ƶ�
	void jifen(const bianbian& bianbian);//�����bianbian��ID��chiID���������ҵ�ID����÷�

	void huizhiPlayA(Graphics& gfx) const;//�������ͼ��
	void huizhiPlayB(Graphics& gfx) const;//�������ͼ��
	void huizhiJifenbanA(Graphics& gfx) const;//�������ͼ��
	void huizhiJifenbanB(Graphics& gfx) const;//�������ͼ��
	
	Vec2 getpos() const { return pos + face * 0.5; }//��ȡ���λ��
	int getPlayId() const { return id; }//�õ����ID
	int getJifen() const { return score; }//�õ�����
	
	static constexpr Vec2 face = { 20,20 };//��̬ �㶨���������һ����
private:
	std::random_device seed;//�������
	std::mt19937 rand;//���
	std::uniform_int_distribution<int> fitX;//fitX
	std::uniform_int_distribution<int> fitY;//fitY

	Vec2 pos ;//���λ��
	Vec2 v = { 2,2 };//����ƶ��ٶ�
	int score = 0;//��ҳ�ʼ�÷�
	int id;//���ID
};



