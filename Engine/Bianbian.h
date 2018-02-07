#pragma once
#include "Vec2.h"
#include "Keyboard.h"
#include "Graphics.h"
#include "Class.h"
#include <random>

class wanjia;

class bianbian
{
public:
	//bianbianλ��
	//���ͼ��
	//����ƶ�
	//��������߿򷴵�
	//��㱻�����ײ����ʧ
	bianbian();//���캯�� Ĭ�ϵĹ��캯��û�в��� ÿ��������bianbian����ִ��
	void move();//bianbina�ƶ�
	void fantancaiqie();//bianbian�ķ�����߿�
	void huizhi_bianbian(Graphics& gfx) const;//����bianbian
	void panduan(wanjia& a);//�ж����ʱ����bianbian��ײ
	bool getchidiao() const { return chidiao; }//�ж�����Ƿ�Ե�bianbian
	int getchiID() const { return chiID; }//�õ��Ե�bianbian��ҵ�ID
	int getbianbianNum() const { return bianbianNum; }//���ص�ǰ���� ��������
	
	static constexpr Vec2 face = { 24,24 };//��̬ �㶨���������һ����
	static constexpr Vec2 bianbian_youxia = { 799 - 24,599 - 24 };//����������µĳߴ�

private:
	std::random_device seed;//�������
	std::mt19937 rand;//���
	std::uniform_int_distribution<int> fitX;
	std::uniform_int_distribution<int> fitY;
	std::uniform_int_distribution<int> fitV_x;
	std::uniform_int_distribution<int> fitV_y;

	Vec2 pos ;
	Vec2 v  ;
	bool chidiao = 0;
	int chiID = -1;
	static int bianbianNum;//ȫԱһ�£������Ǳ���
};


