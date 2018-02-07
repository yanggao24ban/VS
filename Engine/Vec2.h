#pragma once
struct Vec2
{
	int x = 0;
	int y = 0;
	Vec2 operator+= (const Vec2& b);//��Ա���� ����+=����� �����ñ�ʾֻ��
	Vec2 operator-= (const Vec2& b);//��Ա���� ����+=����� �����ñ�ʾֻ��
	friend Vec2 operator+ (const Vec2& a,const Vec2& b);//��Ա���� ����+=����� �����ñ�ʾֻ��,�Ӻ����߶�Ҫ�ģ�Ҫ����Ա����
	friend Vec2 operator- (const Vec2& a,const Vec2& b);//��Ա���� ����+=����� �����ñ�ʾֻ��
	friend Vec2 operator* (const Vec2& a, float b);
	void clamp(const Vec2& min, const Vec2& max);
};