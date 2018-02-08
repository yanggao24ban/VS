#include "Fangkuai.h"

fangkuai::fangkuai()
	:
	rand(seed()),
	fitX(0, Graphics::max.x - face.x),
	fitY(0, Graphics::max.y - face.y)
{
	pos.x = fitX(rand);
	pos.y = fitY(rand);
}

void fangkuai::panduan(wanjia & a)
{
	if (a.getpos().x > pos.x - 5 &&
		a.getpos().x < pos.x + face.x + 5 &&
		a.getpos().y > pos.y - 5 &&
		a.getpos().y < pos.y + face.y + 5)
	{
		chidiao = 1;
		chidaocisu++;//碰到时候，吃掉次数+1
	}
}

void fangkuai::chongzhi()
{
	if (chidiao)//如果被吃掉了
	{
		pos.x = fitX(rand);//随机位置
		pos.y = fitY(rand);
		chidiao = 0;//吃掉变为0
	}
}

void fangkuai::faguang()
{
	static bool zengzhang = 1;//1时候，数值增长
	if (zengzhang)
	{
		color.SetR( color.GetR() + 1 );
		color.SetG( color.GetG() + 2 );
		color.SetB( color.GetB() + 2 );
		if (color.GetR() >= 253)//当r>253时候
			zengzhang = 0;//变为0,开始减少
	}
	else
	{
		color.SetR(color.GetR() - 1);
		color.SetG(color.GetG() - 2);
		color.SetB(color.GetB() - 2);
		if (color.GetR() <= 127)//当r<=127时
			zengzhang = 1;//变为1，开始增加
	}
}

void fangkuai::huizhi_fangkuai(Graphics & gfx) const//绘制方块
{
	gfx.Jifenban(pos.x, pos.y, face.x, face.y,color);
}
