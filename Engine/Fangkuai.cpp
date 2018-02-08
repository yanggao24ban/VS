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
		chidaocisu++;//����ʱ�򣬳Ե�����+1
	}
}

void fangkuai::chongzhi()
{
	if (chidiao)//������Ե���
	{
		pos.x = fitX(rand);//���λ��
		pos.y = fitY(rand);
		chidiao = 0;//�Ե���Ϊ0
	}
}

void fangkuai::faguang()
{
	static bool zengzhang = 1;//1ʱ����ֵ����
	if (zengzhang)
	{
		color.SetR( color.GetR() + 1 );
		color.SetG( color.GetG() + 2 );
		color.SetB( color.GetB() + 2 );
		if (color.GetR() >= 253)//��r>253ʱ��
			zengzhang = 0;//��Ϊ0,��ʼ����
	}
	else
	{
		color.SetR(color.GetR() - 1);
		color.SetG(color.GetG() - 2);
		color.SetB(color.GetB() - 2);
		if (color.GetR() <= 127)//��r<=127ʱ
			zengzhang = 1;//��Ϊ1����ʼ����
	}
}

void fangkuai::huizhi_fangkuai(Graphics & gfx) const//���Ʒ���
{
	gfx.Jifenban(pos.x, pos.y, face.x, face.y,color);
}
