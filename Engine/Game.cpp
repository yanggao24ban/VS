/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.cpp																			  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#include "MainWindow.h"
#include "Game.h"

Game::Game( MainWindow& wnd )
	:
	wnd( wnd ),
	gfx( wnd )
{
}

void Game::Go()
{
	gfx.BeginFrame();	
	
	jiancekaishi(wnd.kbd);//�ж��Ƿ��»س���

	if(gamestart)//�����Ϸ��ʼ�ˣ����������ݴ���
		UpdateModel();
	
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()//
{
	a.movePlayA(wnd.kbd);//���A�ƶ�
	c.movePlayB(wnd.kbd);//���B�ƶ�
	a.jiance_biankuang();//���A�ı߿���
	c.jiance_biankuang();//���B�ı߿���
	fangkuai.faguang();//���鷢��
	fangkuai.chongzhi();
	fangkuai.panduan(a);
	for (int i = 0; i < num; i++)
	{
		if (!b[i].getchidiao())//�ж������bianbian�Ƿ���ײ
		{
			b[i].move();//bianbian�ƶ�
			b[i].fantancaiqie();//bianbian��������
			b[i].panduan(a);//bianbian�ж�
			if (!b[i].getchidiao())
				b[i].panduan(c);//bianbian�ж�
			a.jifen(b[i]);//���a����
			c.jifen(b[i]);//���c����
		}
	}
}



void Game::ComposeFrame()
{
	/******�ж���Ϸ����*****/
	/*bool alldie = 1;//ȫ��ʧ
	for (int i = 0; i < num; i++)
	{
		alldie = alldie && b[i].getchidiao();//���߶�Ϊ1�������Ϊ1
		gameend = alldie;//��bianbian����ʧ�ˣ���Ϸ����
	}*/

	if (b[0].getbianbianNum() == 0)
		gameend = 1;

	if (gameend)//�����Ϸ����
		huizhigameover(Graphics::center.x - gameoverfenbian.x / 2, Graphics::center.y - gameoverfenbian.y / 2);//����gameover

	/*****�ж���Ϸ��ʼ*****/
	if( ! gamestart)//�����Ϸ��ʼ
		huizhifenmian(Graphics::center.x - biaotifenbian.x / 2, Graphics::center.y - biaotifenbian.y / 2);//���Ʊ���
	else
	{
		for (int i = 0; i < num; i++)
		{
			if (!b[i].getchidiao())//�ж�ʱ�������bianbianʱ����ײ
				b[i].huizhi_bianbian(gfx);//����ײ��ʱ�����bianbian
		}

		a.huizhiJifenbanA(gfx);//�������A�Ʒְ�
		c.huizhiJifenbanB(gfx);//�������B�Ʒְ�5555
		a.huizhiPlayA(gfx);//�������A
		c.huizhiPlayB(gfx);//�������B��������111
		fangkuai.huizhi_fangkuai(gfx);
	}
}


