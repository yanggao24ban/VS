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
	
	jiancekaishi(wnd.kbd);//判断是否按下回车键

	if(gamestart && !gameend )//如果游戏开始了，则运算数据处理
		UpdateModel();
	
	ComposeFrame();
	gfx.EndFrame();
}

void Game::UpdateModel()//
{
	a.movePlayA(wnd.kbd);//玩家A移动
	a.jiance_biankuang();//玩家A的边框检测
	fangkuai.faguang();//方块发光
	fangkuai.panduan(a);//判断玩家是否碰到方块
	fangkuai.chongzhi();//当玩家碰到方块时候，重置方块位置
	for (int i = 0; i < num; i++)
	{
		if (!b[i].getchidiao())//判断玩家与bianbian是否碰撞
		{
			b[i].move();//bianbian移动
			b[i].fantancaiqie();//bianbian反弹裁切
			b[i].panduan(a);//bianbian判断
			a.jifen(fangkuai);//玩家积分（方块）
		}
	}
}



void Game::ComposeFrame()
{
	/******判断游戏结束*****/
	/*bool alldie = 1;//全消失
	for (int i = 0; i < num; i++)
	{
		alldie = alldie && b[i].getchidiao();//两者都为1，输出才为1
		gameend = alldie;//当bianbian都消失了，游戏结束
	}*/

	/*for (int i = 0; i < num; i++)
	{
		if (b[i].getchidiao())
			gameend = 1;
	}*/
	if (b[0].getbianbianNum() != num)//当bianbian当前数量不等于总数量时候
		gameend = 1;//游戏结束

	if (gameend)//如果游戏结束
		huizhigameover(Graphics::center.x - gameoverfenbian.x / 2, Graphics::center.y - gameoverfenbian.y / 2);//绘制gameover

	/*****判断游戏开始*****/
	if( ! gamestart)//如果游戏开始
		huizhifenmian(Graphics::center.x - biaotifenbian.x / 2, Graphics::center.y - biaotifenbian.y / 2);//绘制标题
	else
	{
		for (int i = 0; i < num; i++)
		{
				b[i].huizhi_bianbian(gfx);//不碰撞的时候绘制bianbian
		}

		a.huizhiJifenbanA(gfx);//绘制玩家A计分板
		a.huizhiPlayA(gfx);//绘制玩家A
		fangkuai.huizhi_fangkuai(gfx);
	}
}


