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
	wanjia();//玩家属性
	void jiance_biankuang();//判断玩家移动范围
	void movePlayA(const Keyboard& kbd);//控制玩家移动
	void movePlayB(const Keyboard& kbd);//控制玩家移动
	void jifen(const bianbian& bianbian);//如果吃bianbian的ID（chiID），等于我的ID，则得分

	void huizhiPlayA(Graphics& gfx) const;//绘制玩家图案
	void huizhiPlayB(Graphics& gfx) const;//绘制玩家图案
	void huizhiJifenbanA(Graphics& gfx) const;//绘制玩家图案
	void huizhiJifenbanB(Graphics& gfx) const;//绘制玩家图案
	
	Vec2 getpos() const { return pos + face * 0.5; }//获取玩家位置
	int getPlayId() const { return id; }//得到玩家ID
	int getJifen() const { return score; }//得到积分
	
	static constexpr Vec2 face = { 20,20 };//静态 恒定，所有玩家一个脸
private:
	std::random_device seed;//随机种子
	std::mt19937 rand;//随机
	std::uniform_int_distribution<int> fitX;//fitX
	std::uniform_int_distribution<int> fitY;//fitY

	Vec2 pos ;//玩家位置
	Vec2 v = { 2,2 };//玩家移动速度
	int score = 0;//玩家初始得分
	int id;//玩家ID
};



