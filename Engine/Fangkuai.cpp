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
		chidaocisu++;
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
	static bool zengzhang = 1;
	if (zengzhang)
	{
		color.SetR( color.GetR() + 1 );
		color.SetG( color.GetG() + 2 );
		color.SetB( color.GetB() + 2 );
		if (color.GetR() >= 253)
			zengzhang = 0;
	}
	else
	{
		color.SetR(color.GetR() - 1);
		color.SetG(color.GetG() - 2);
		color.SetB(color.GetB() - 2);
		if (color.GetR() <= 127)
			zengzhang = 1;
	}
}

void fangkuai::huizhi_fangkuai(Graphics & gfx) const
{
	gfx.Jifenban(pos.x, pos.y, face.x, face.y,color);
}
