#include <iostream>
using namespace std;
int a;

void kaishi()
{
	system("color 0F");
	cout << "                                          V1.0.00    " << endl;
	cout << "                                                   " << endl;
	cout << "              _____________________                " << endl;
	cout << "              |                   |                " << endl;
	cout << "              |   逃亡C++编程社   |                " << endl;
	cout << "              |___________________|                " << endl;
	cout << "                    闫执出品                       " << endl;
	cout << "                                                   " << endl;
	cout << "                   ①.开始游戏                      " << endl;
	cout << "                 ②.查看成就图鉴                    " << endl;
	cout << "                   ③.投诉闫执                      " << endl;
	cout << "                   ④.结束游戏                      " << endl;
}

void jj_zhouji()
{
	system("color 0C");
	cout << "———————————————————————" << endl;
	cout << "                                              " << endl;
	cout << "         _____________________                " << endl;
	cout << "         |                   |                " << endl;
	cout << "         |     游戏失败！    |                " << endl;
	cout << "         |___________________|                " << endl;
	cout << "                                              " << endl;
	cout << "          你被孙老师肘击而亡...               " << endl;
	cout << "                                              " << endl;
	cout << "———————————————————————" << endl;
	cout << "                              重开吧，老弟" << endl;
}

void jj_xiuru()
{
	system("color 0C");
	cout << "———————————————————————" << endl;
	cout << "                                              " << endl;
	cout << "         _____________________                " << endl;
	cout << "         |                   |                " << endl;
	cout << "         |     游戏失败！    |                " << endl;
	cout << "         |___________________|                " << endl;
	cout << "                                              " << endl;
	cout << "         你被孙老师狠狠地羞辱了...            " << endl;
	cout << "                                              " << endl;
	cout << "———————————————————————" << endl;
	cout << "                               重开吧，老弟" << endl;
}
void jj_lanpin()
{
	system("color 1F");
	cout << "———————————————————————" << endl;
	cout << "                                              " << endl;
	cout << "   :(                                         " << endl;
	cout << "                                              " << endl;
	cout << "   你的电脑遇到了某些问题，需要重新启动。     " << endl;
	cout << "   我们只收集某些错误信息，然后为你重新启动。 " << endl;
	cout << "   (完成 0%)                                  " << endl;
	cout << "                                              " << endl;
	cout << "                                              " << endl;
	cout << "———————————————————————" << endl;
	cout << "                               重开吧，老弟" << endl;
}
void jj_yy()
{
	system("color 0C");
	cout << "———————————————————————" << endl;
	cout << "                                              " << endl;
	cout << "         _____________________                " << endl;
	cout << "         |                   |                " << endl;
	cout << "         |     游戏失败！      |                " << endl;
	cout << "         |___________________|                " << endl;
	cout << "                                              " << endl;
	cout << "            你因玉米症而亡...                 " << endl;
	cout << "                                              " << endl;
	cout << "———————————————————————" << endl;
	cout << "                               重开吧，老弟" << endl;
}
void jj_tl()

{
	system("color 0A");

	cout << "———————————————————————" << endl;
	cout << "                                              " << endl;
	cout << "         _____________________                " << endl;
	cout << "         |                   |                " << endl;
	cout << "         |     游戏胜利！    |                " << endl;
	cout << "         |___________________|                " << endl;
	cout << "                                              " << endl;
	cout << "            离开了C++编程社！                 " << endl;
	cout << "                                              " << endl;
	cout << "———————————————————————" << endl;
	cout << "                               闫执出品......" << endl;
}
void cj_lanpin()
{
	cout << "   __________________________________              " << endl;
	cout << "   |                                |              " << endl;
	cout << "   | [获得成就] : 田青林的礼物      |              " << endl;
	cout << "   |________________________________|              " << endl;
}
void cj_xiaochou()
{
	cout << "   __________________________________              " << endl;
	cout << "   |                                |              " << endl;
	cout << "   | [获得成就] : Joker！           |              " << endl;
	cout << "   |________________________________|              " << endl;
}
void cj_xq()
{
	cout << "   __________________________________              " << endl;
	cout << "   |                                |              " << endl;
	cout << "   | [获得成就] : 田之嫌弃          |              " << endl;
	cout << "   |________________________________|              " << endl;
}
void cj_zj()
{
	cout << "   __________________________________              " << endl;
	cout << "   |                                |              " << endl;
	cout << "   | [获得成就] : 我这一肘60吨      |              " << endl;
	cout << "   |________________________________|              " << endl;
}
void cj_xr()
{
	cout << "   __________________________________         " << endl;
	cout << "   |                                |              " << endl;
	cout << "   | [获得成就] : 我要狠狠地羞辱你！|              " << endl;
	cout << "   |________________________________|              " << endl;
}
void cj_my()
{
	cout << "   __________________________________         " << endl;
	cout << "   |                                |              " << endl;
	cout << "   | [获得成就] : 没用的东西！      |              " << endl;
	cout << "   |________________________________|              " << endl;
}
void cj_tlzy()
{
	cout << "   __________________________________         " << endl;
	cout << "   |                                |              " << endl;
	cout << "   | [获得成就] : 天籁之音          |              " << endl;
	cout << "   |________________________________|              " << endl;
}
void zx_3()
{
	cout << "[系统] 孙老师走远了，你要？" << endl
		 << "1.游戏启动！  2.老老实实写代码 " << endl;
	cin >> a;
	system("cls");
	if (a == 1)
	{
		cout << "[孙老师] 你被系统骗了！我没走远！" << endl;
		cj_xiaochou();
		jj_zhouji();
	}
	else
	{
		cout << "[系统] 闫执走到了你的面前..." << endl
			 << "[闫执] 我唱歌好听吗？" << endl
			 << "1.好听！  2.难听死了！ " << endl;
		cin >> a;
		system("cls");
		if (a == 1)
		{
			cout << "[闫执] 好听就多听吧！哈哈哈哈哈 " << endl
				 << "[闫执] ~ ~ ~（高歌一曲）" << endl;
			cj_tlzy();
			jj_yy();
		}
		else
		{
			cout << "[系统] 闫执被气走了..." << endl
				 << "[系统] 孙老师下达了命令：现在是8:40，在9点前做完函数题单。随后拍门而出，你要？" << endl
				 << "1.游戏启动！  2.老老实实写代码 " << endl;
			cin >> a;
			system("cls");
			if (a == 1)
			{
				cout << "[孙老师] 你被系统骗了！我没拍门而出！" << endl;
				cj_xiaochou();

				jj_zhouji();
			}
			else
			{
				cout << "[系统] 北京时间 21:00" << endl;
				cout << "[孙老师] 好，保存，关电脑，走！" << endl;
				system("pause");
				system("cls");
				jj_tl();
			}
		}
	}
}
void zx_2()
{
	cout << "[孙老师] 来来来，我问你，不清楚循环次数用什么？" << endl
		 << "1.用for  2.用while   3.不道啊 " << endl;
	cin >> a;
	system("cls");
	if (a == 2)
	{
		cout << "[孙老师] 我再问你，空函数是啥？" << endl
			 << "1.int  2.bool   3.void " << endl;
		cin >> a;
		system("cls");
		if (a == 3)
		{
			zx_3();
		}
		else
		{
			cout << "[孙老师] 学啥呢，半天你干了点啥？啊？" << endl;
			cj_my();
			jj_zhouji();
		}
	}
	else
	{
		cout << "[孙老师] 学啥呢，半天你干了点啥？啊？" << endl;
		cj_my();
		jj_zhouji();
	}
}
void zx_1()
{
	cout << "[系统] 你编译时发现了一个名为 “好东西 ”的程序，你要运行它吗" << endl
		 << "1.运行  2.不管 " << endl;
	cin >> a;
	system("cls");
	if (a == 1)
	{
		cj_lanpin();
		jj_lanpin();
	}
	else
	{
		cout << "[系统] 你做了一会题，这时，郭诗远来到了你旁边，询问一个函数体怎么使用，你要？" << endl
			 << "1.这题我会啊，热情回答  2.置之不理 " << endl;
		cin >> a;
		system("cls");
		if (a == 1)
		{
			cout << "[郭诗远] 谁问你啊，我问你身边的田青林呢！" << endl;
			cj_xiaochou();
			jj_yy();
		}

		else
		{
			cout << "[系统] 你做了一会题，你发现了一个不懂的东西，你要询问田青林吗？" << endl
				 << "1.不耻下问   2.我要独立！" << endl;
			cin >> a;
			system("cls");
			if (a == 1)
			{
				cout << "[田青林] 傻了吧！别问我这蠢问题！" << endl;
				cj_xq();
				jj_yy();
			}
			else
			{
				zx_2();
			}
		}
	}
}

// —————————————————————————————
int main()
{

	kaishi();

	cin >> a;
	system("cls");
	if (a == 1)
	{

		cout << "[系统] 你来到了教室，你准备?" << endl
			 << "1.先做题   2.游戏启动" << endl;

		cin >> a;
		system("cls");
		if (a == 1)
			zx_1();
		else
		{
			cout << "[系统] 你玩了一会游戏，发现同学都在做题，你准备?" << endl
				 << "1.还是做题吧   2.继续快乐的游戏" << endl;
			cin >> a;
			system("cls");
			if (a == 1)
			{
				zx_1();
			}
			else
			{
				cout << "[系统] 你玩着游戏，感到脊背发凉，阵阵寒意逼近......" << endl;
				system("pause");
				system("cls");
				cout << "[孙老师] 我让你做题，你干嘛呢！" << endl
					 << "1.狡辩一下   2.承认错误";
				cin >> a;
				system("cls");
				if (a == 1)
				{
					cout << "[孙老师] 还敢狡辩？，当我看不见吗？" << endl;
					cj_zj();
					jj_zhouji();
					return 0;
				}
				else
				{
					cout << "[孙老师] 你要玩游戏滚蛋！去网吧去！我给你10块钱！" << endl;
					cj_xr();
					jj_xiuru();
					return 0;
				}
			}
		}

		return 0;
	}
	else if (a == 2)
	{
		system("color 0E");
		cj_lanpin();
		cj_xiaochou();
		cj_xq();
		cj_zj();
		cj_xr();
		cj_my();
		cout << "请再次运行...";
	}
	else if (a == 3)
	{
		system("color 0C");
		cout << "请输入你的意见...   " << endl;
		cin >> a;
		cout << "闫执听不见！" << endl;
	}

	return 0;
}
