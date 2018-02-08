#pragma once
#include "Vec2.h"
#include "Graphics.h"
#include "Class.h"
#include <random>


class fangkuai
{
public:
	fangkuai();
	void panduan(wanjia& a);
	void chongzhi();//����״̬
	void faguang();
	void huizhi_fangkuai(Graphics& gfx) const;

	static constexpr Vec2 face = { 15,15 };

private:
	std::random_device seed;//�������
	std::mt19937 rand;//���
	std::uniform_int_distribution<int> fitX;
	std::uniform_int_distribution<int> fitY;
	std::uniform_int_distribution<int> fitV_x;
	std::uniform_int_distribution<int> fitV_y;
	
	Vec2 pos;
	Color color = { 127,0,0 };
	float a = 1;
	bool chidiao = 0;

};
