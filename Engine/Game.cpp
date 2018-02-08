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

	if(gamestart && !gameend )//�����Ϸ��ʼ�ˣ����������ݴ���
		UpdateModel();
	
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()//
{
	a.movePlayA(wnd.kbd);//���A�ƶ�
	a.jiance_biankuang();//���A�ı߿���
	fangkuai.faguang();//���鷢��
	fangkuai.panduan(a);//�ж�����Ƿ���������
	fangkuai.chongzhi();//�������������ʱ�����÷���λ��
	for (int i = 0; i < num; i++)
	{
		if (!b[i].getchidiao())//�ж������bianbian�Ƿ���ײ
		{
			b[i].move();//bianbian�ƶ�
			b[i].fantancaiqie();//bianbian��������
			b[i].panduan(a);//bianbian�ж�
			a.jifen(fangkuai);//��һ��֣����飩
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

	/*for (int i = 0; i < num; i++)
	{
		if (b[i].getchidiao())
			gameend = 1;
	}*/
	if (b[0].getbianbianNum() != num)//��bianbian��ǰ����������������ʱ��
		gameend = 1;//��Ϸ����

	if (gameend)//�����Ϸ����
		huizhigameover(Graphics::center.x - gameoverfenbian.x / 2, Graphics::center.y - gameoverfenbian.y / 2);//����gameover

	/*****�ж���Ϸ��ʼ*****/
	if( ! gamestart)//�����Ϸ��ʼ
		huizhifenmian(Graphics::center.x - biaotifenbian.x / 2, Graphics::center.y - biaotifenbian.y / 2);//���Ʊ���
	else
	{
		for (int i = 0; i < num; i++)
		{
				b[i].huizhi_bianbian(gfx);//����ײ��ʱ�����bianbian
		}

		a.huizhiJifenbanA(gfx);//�������A�Ʒְ�
		a.huizhiPlayA(gfx);//�������A
		fangkuai.huizhi_fangkuai(gfx);
	}
}


