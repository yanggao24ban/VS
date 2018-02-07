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
	//bianbian位置
	//便便图案
	//便便移动
	//便便碰到边框反弹
	//便便被玩家碰撞后消失
	bianbian();//构造函数 默认的构造函数没有参数 每次生成新bianbian都会执行
	void move();//bianbina移动
	void fantancaiqie();//bianbian的反弹与边框
	void huizhi_bianbian(Graphics& gfx) const;//绘制bianbian
	void panduan(wanjia& a);//判断玩家时候与bianbian碰撞
	bool getchidiao() const { return chidiao; }//判断玩家是否吃掉bianbian
	int getchiID() const { return chiID; }//得到吃掉bianbian玩家的ID
	int getbianbianNum() const { return bianbianNum; }//返回当前存活的 便便的总数
	
	static constexpr Vec2 face = { 24,24 };//静态 恒定，所有玩家一个脸
	static constexpr Vec2 bianbian_youxia = { 799 - 24,599 - 24 };//便便在最右下的尺寸

private:
	std::random_device seed;//随机种子
	std::mt19937 rand;//随机
	std::uniform_int_distribution<int> fitX;
	std::uniform_int_distribution<int> fitY;
	std::uniform_int_distribution<int> fitV_x;
	std::uniform_int_distribution<int> fitV_y;

	Vec2 pos ;
	Vec2 v  ;
	bool chidiao = 0;
	int chiID = -1;
	static int bianbianNum;//全员一致，而且是变量
};


