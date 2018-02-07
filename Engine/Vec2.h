#pragma once
struct Vec2
{
	int x = 0;
	int y = 0;
	Vec2 operator+= (const Vec2& b);//成员函数 重载+=运算符 常引用表示只读
	Vec2 operator-= (const Vec2& b);//成员函数 重载+=运算符 常引用表示只读
	friend Vec2 operator+ (const Vec2& a,const Vec2& b);//成员函数 重载+=运算符 常引用表示只读,加号两边都要的，要用友员函数
	friend Vec2 operator- (const Vec2& a,const Vec2& b);//成员函数 重载+=运算符 常引用表示只读
	friend Vec2 operator* (const Vec2& a, float b);
	void clamp(const Vec2& min, const Vec2& max);
};