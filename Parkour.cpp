#undef UNICODE
#undef _UNICODE
#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <conio.h>
#include <fstream>
#include <stdio.h>
using namespace std;
namespace _game
{
   
    const long long ESC=27,
                    Enter=13,
                    Tab=9,
                    Shang=38,
                    Xia=40,
                    Zuo=37,
                    You=39,
                    Kong=' ',
                    z_sb=VK_LBUTTON,
                    y_sb=VK_RBUTTON,
                    Shift=VK_SHIFT,
                    z_Shift=VK_LSHIFT,
                    y_Shift=VK_RSHIFT,
                    Ctrl=VK_CONTROL,
                    z_Ctrl=VK_LCONTROL,
                    y_Ctrl=VK_RCONTROL,
                    Alt=VK_MENU,
                    z_Alt=VK_LMENU,
                    y_Alt=VK_RMENU,
                    A='A',
                    B='B',
                    C='C',
                    D='D',
                    E='E',
                    F='F',
                    G='G',
                    H='H',
                    I='I',
                    J='J',
                    K='K',
                    L='L',
                    M='M',
                    N='N',
                    O='O',
                    P='P',
                    Q='Q',
                    R='R',
                    S='S',
                    T='T',
                    U='U',
                    V='V',
                    W='W',
                    X='X',
                    Y='Y',
                    Z='Z';
   

    struct cdhs
    {
        void out(int n, string name)
        {
            ofstream cd(&name[0]);
            cd << n;
            return;
        }
        void out(long long n, string name)
        {
            ofstream cd(&name[0]);
            cd << n;
            return;
        }
        void out(bool n, string name)
        {
            ofstream cd(&name[0]);
            cd << n;
            return;
        }
        void out(char n, string name)
        {
            ofstream cd(&name[0]);
            cd << n;
            return;
        }
        void out(string n, string name)
        {
            ofstream cd(&name[0]);
            cd << n;
            return;
        }
        void in(int& n, string name)
        {
            ifstream cd(&name[0]);
            cd >> n;
            return;
        }
        void in(long long& n, string name)
        {
            ifstream cd(&name[0]);
            cd >> n;
            return;
        }
        void in(bool& n, string name)
        {
            ifstream cd(&name[0]);
            cd >> n;
            return;
        }
        void in(char& n, string name)
        {
            ifstream cd(&name[0]);
            cd >> n;
            return;
        }
        void in(string& n, string name)
        {
            ifstream cd(&name[0]);
            cd >> n;
            return;
        }
    };
    struct hl
    {
        long long h,l;
    };
   
    bool axj(long long key)
    {
        return (GetKeyState(key)<0)?(true):(false);
    }
    void bout(string n, long long s=50,bool f=0,char key=13)
    {
        for (long long i = 0; i < n.size(); i++)
        {
            if (f&&GetKeyState(key)<0)
            {
                cout<<n.substr(i,n.size());
                return ;
            }
            cout << n[i];
            Sleep(s);
        }
        return;
    }
    void ckbb()
    {
        system("cls");
        cout << "库名：b_game.h\n";
        cout << "类型：拓展库\n";
        cout << "版本号：2.0.1\n";
        return;
    }
    void gs(long long h, long long l, string z)
    {
        for (long long i = 1; i <= h; i++)
            cout << "\n";
        for (long long i = 1; i <= l; i++)
            cout << " ";
        cout << z;
        return;
    }
    hl sbwz(bool x=1,bool n=1)
    {
        HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
        HWND h=GetForegroundWindow();
        CONSOLE_FONT_INFO consoleCurrentFont;
        hl hl;
        POINT p;
        if(x)
        {
            GetCursorPos(&p);
            ScreenToClient(h,&p);
        }
        else
        {
            GetCursorPos(&p);
        }
        if(n)
        {
            GetCurrentConsoleFont(hOutput, FALSE, &consoleCurrentFont);
            p.x/=consoleCurrentFont.dwFontSize.X;
            p.y/=consoleCurrentFont.dwFontSize.Y;
        }
        hl.h=p.y+1;
        hl.l=p.x+1;
        return hl;
    }
    void yanse(int n)
    {
        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), n);
        return;
    }
    void ycbj()
    {
        HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
        DWORD mode;
        GetConsoleMode(hStdin, &mode);
        mode&=~ENABLE_QUICK_EDIT_MODE;
        SetConsoleMode(hStdin, mode);
        return ;
    }
    void ycgb()
    {
        CONSOLE_CURSOR_INFO cursor;
        cursor.bVisible = FALSE;
        cursor.dwSize = sizeof(cursor);
        HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorInfo(handle, &cursor);
        return;
    }
    void ydgb(long long h, long long l)
    {
        COORD pos = {l-1,h-1};
        HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleCursorPosition(hOut, pos);
        return;
    }
}
using namespace _game;
using std::cout;
using std::cin;
const long long dts = 9;
long long wj1x, wj1y, wj2x, wj2y, wj3x, wj3y, wj4x, wj4y, cs = 0, dtbh, sy, runs, cgjd = 1, y_1x, y_1y, y_2x, y_2y, y_3x, y_3y, y_4x, y_4y;
cdhs cddx;
bool f = 1, t1 = 1, t2 = 1, t3 = 1, t4 = 1, cxjs = 1, hyflag = 1;
long long csx[dts + 1] = {
    0,
    18,
    18,
    18,
    14,
    1,
    3,
    1,
    3,
    18
};
long long csy[dts + 1] = {
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    1,
    37,
    1
};
string dtm[dts + 1] = {
    "空地图",
    "新手练习",
    "蹦床天地",
    "空中飞人",
    "生死双道",
    "天空尖刺",
    "天空跳床",
    "小心暗刺",
    "转来转去",
    "9 9 加 6"
    
};
string dt[dts + 1][21] = {
    {
        "                                                                            ",//
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
    },

    {
        "                                                                            =",
        "                                                                            =",
        "                                                                            =",
        "                                                                  $         =",
        "                                                                            =",
        "                                          <   >            ===============  =",
        "              =====    ========     ====================                 =  =",
        "   ======                                                                =  =",
        "                                                                         =  =",
        "                                                                         =  =",
        "                                                                         =  =",
        "                          ==========...========    ========....=====     =  =",
        "                         =                                               =  =",
        "           -----    =====                                                =  =",
        "                                                                         =  =",
        "                                                                         =  =",
        "                                                             ========----=  =",
        "                                                            =               =",
        "                       <     >                ===          =                =",
        " ====     ====^^^^=================--               =======                 =",
        "                                                                            ="
    },    
	{
        "                                                                            ",//
        "   <                                                                        ",
        "   <                                                                        ",
        "   <                                                                        ",
        "   <                                                                        ",
        "   <                                                                        ",
        "   <                                                                        ",
        "   <                           ===                                          ",
        "   <                                                                        ",
        "   <           =                         ---                                ",
        "   <           =                                                            ",
        "   <           =                                                            ",
        "   <           =                                   ----                     ",
        "   <           =                                                            ",
        "   <           =                                                            ",
        "   <           =         ---                                 ---            ",
        "   <           =                                                           $",
        "               =                                                            ",
        "      ---------=^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^",
        "======                                                                      ",
        "                                                                            "
    },
    {
        "                                                                            ",//
        "                                                                            ",
        "                                                                            ",
        "  ==                                                                  ===   ",
        "  =                                                                     =   ",
        "  =                                                                     =   ",
        "  =......                                                  $            =   ",
        "  =                                                     =======         =   ",
        "  =                                                                     = - ",
        "                                                                        =   ",
        " -==                                                              ......=   ",
        "                                                                        =   ",
        "     ==                                                                 =   ",
        "                                                     ===                =-  ",
        "        ==                                                              =   ",
        "                                               ====                     =   ",
        "     ===                                                                =   ",
        "                                            ==                          =   ",
        "  ===                                  ==                                   ",
        " =                               ===...                              ======-",
        "                                                                            ",
    },

    {
        "                                                                            ",//
        "                                                                            ",
        "                                                                            ",
        "                                                                   ==  ===  ",
        "                                                       ===   ===          < ",
        "                                                  ==                      < ",
        "                                                                          < ",
        "                  ==                           ==                         < ",
        "                         ======                                           < ",
        "              ==                       ===   ====                         < ",
        "               ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^  ",
        "         ==                                                                 ",
        "                                                                            ",
        "     ==                                                                     ",
        "                 ===                  ===   =    ^                         $",
        " ========    ===     ===    =   === = == === ====   ====  ===   == == = =====",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
        "                                                                            ",
    },

    {
        "                                                                            ",//
        "                                                                           =",
        "                                                                           =",
        "                                                                           =",
        " =========^^^==============^^^============^===============^^=========     =",
        "                                                                           =",
        "                                  ==========      <>                       =",
        "                      <>                    =            <>         <>     =",
        "   ===========.==================...........=============================..=",
        "        <                                                                  =",
        "        <             ==                                   ==              =",
        "        <            =                                    =                =",
        "...     <           =                                    =                 =",
        "        <          =                                    =                  =",
        "        <         =                                    =                   =",
        "    ....<        =                                    =                    =",
        "        <       =                                    =                     =",
        "        <      =                                    =                      =",
        "              =                                    =                     $ =",
        " ==============                               =====                   ======",
        "                                                                           ="
    },
    {
        "                                                                            ",//
        "   <                                                                       =",
        "   <                                  >                                    =",
        "   <                                  >                                    =",
        "   <              -- ==   ==== =====  ==========                           =",
        "   <               =          =    =           =                           =",
        "   <               =          =    =           = =====================     =",
        "   <               =   ==     =   $=       ==  = =                    ==   =",
        "   <               =   =      =   ==       =   = =                         =",
        "   <               =  ==   ^^^==           =  == =                       ===",
        "   <         --    =   =      =        ^^^^=   = =              ===  ===   =",
        "   <               ==  =      ===============  = =            ==           =",
        "   <               =   =^^                     = =         ==              =",
        "   <               = =========================== =             ===         =",
        "   <               =                             =               =         =",
        "   <               ===============================               =         =",
        "   <   =                                                         ====      =",
        "      ==                                                                ====",
        "=========---============= ==============   ========   =======  ======      =",
        "                                                                           =",
        "                                                                           ="
    },
    {
        "                                                                            ",//
        "                              >                   <      =              =   ",
        "                              >                   <      =              =   ",
        "        =                     >                   <      =        =     =   ",
        " ^^^^    =                    >     ===           <      =        ==    =   ",
        "         <=                   >               = =^       =         ===  =   ",
        "         < =                                 <    <      =   $          =   ",
        "         <  =                  ^^^^^^^^^^^^^^^    <      =            ===   ",
        "      ^^^<   =                                  ^^       =^^^^^^^^==    =   ",
        "         <    =           ========             ^         =============  =   ",
        "         <     =                  ====   === <^                         =   ",
        "         <     ======^^^^^^^^^^^^^  >      ^^            ================   ",
        "         <                           ^^^^                                  ",
        " ^^^^    <         ==                                ==                     ",
        "         <        =                                                         ",
        "         <       =                               ==                         ",
        " ==== ^^^       =                                                           ",
        "               =                             ==                             ",
        "     ==========                     =======                                 ",
        "                                                                            ",
        "                                                                            "
    },
    {
        "                          =                                     <     <     ",//
        "                          =                                     <     <     ",
        "                          =                                     <     <     ",
        "                          =                                     <     <     ",
        "                          =                                     <     <  $  ",
        "                     <    =                            <>       <     <     ",
        "             ======  <    =                            <>       <     <     ",
        "                     <    =                --      --  <>  ^    <     <     ",
        "                     <    =                            <>       <     <     ",
        "                     <    =                            <>       <     <     ",
        "                     <    =                            <>       <     <     ",
        "                 --- <    =       --                   <>    ^  <     <   --",
        "               =     <    =                            <>       <     <     ",
        "              =      <    =                            <>       <     <     ",
        "              =      <    =                            <>       <     <     ",
        "         ^^^^^^      <    =                            <> ^     <     <     ",
        "               ---   <    =  --                        <>                   ",
        "                     <        <                        <>                   ",
        "                     <        <                        <>                   ",
        " ===----.-----------..------------------------------------------------------",
        "                                                                            ",
    }
};
//基础函数
void csh()
{
    f = 1, t1 = 1, t2 = 1, t3 = 1, t4 = 1;
    cs = 0;
    return;
}
void color_lv(){//快捷换颜色函数 
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN);
}
void color_hong(){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_RED);
}
void color_lan(){
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE);
}
void color_bai(){	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE|FOREGROUND_RED);
}
void color_qing(){	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_BLUE);
}
void color_huang(){	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_GREEN|FOREGROUND_RED);
}
void color_zi(){	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_BLUE|FOREGROUND_RED);
}
void color_hui(){	
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),FOREGROUND_INTENSITY);
}
void gb()
{
    CONSOLE_CURSOR_INFO cursor;
    cursor.bVisible = FALSE;
    cursor.dwSize = sizeof(cursor);
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorInfo(handle, &cursor);
    return;
}
void out();
void in();
void lx();
void bd();
void gx();
void yl();

void zym();
void yxym();
void smym();
void szsmym();
void wpsmym();
void yxjqym();
void yxbbsm();

void youxi();
void suij();
void cg();
int main()
{
    system("mode con cols=76 lines=20");
    system("title 简单跑酷");
    cout << "加载中...";
    srand(time(0));
    ////yanse(240);
    ycbj();
    gb();
    hyflag = 1;
    cddx.in(cgjd, "闯关进度.binggan");
    system("cls");
    while (cxjs)
    {
        zym();
        system("cls");
    }
    cddx.out(cgjd, "闯关进度.binggan");
    return 0;
}
void zym()
{
   
    char s;
    system("cls");
	color_qing();
	cout<<dts;
    gs(5, 26, "简单跑酷  [闫执出品]");
  
    gs(2, 0, "");
    color_hui();
    gs(1, 30, "退出");
    gs(2, 30, "开始游戏");
    gs(2, 30, "游戏说明");
    gs(2, 30, "游戏存档");

    while (1)
    {
        long long h = sbwz().h, l = sbwz().l;
        if (h == 9 && 31 <= l && l <= 34)//
        {
            if (axj(z_sb))
            {
                s = '0';
                break;
            }
            else
            {
                ydgb(9, 34);
                cout << "\b\b\b";
                yanse(7);
                color_bai();
                cout << ">退出<";
            }
        }
        else
        {
            ydgb(9, 34);
            cout << "\b\b\b";
            //yanse(240);
            color_hui();
            cout << " 退出 ";
        }
        if (h == 11 && 31 <= l && l <= 38)//
        {
            if (axj(z_sb))
            {
                s = '1';
                break;
            }
            else
            {
                ydgb(11, 38);
                cout << "\b\b\b\b\b\b\b";
				color_bai(); 
                
                cout << ">开始游戏<";
            }
        }
        else
        {
            ydgb(11, 38);
            cout << "\b\b\b\b\b\b\b";
            color_hui();
            cout << " 开始游戏 ";
        }
        if (h == 13 && 31 <= l && l <= 38)//
        {
            if (axj(z_sb))
            {
                s = '2';
                break;
            }
            else
            {
                ydgb(13, 38);
                cout << "\b\b\b\b\b\b\b"; 
				color_bai();              
                cout << ">游戏说明<";
            }
        }
        else
        {
            ydgb(13, 38);
            cout << "\b\b\b\b\b\b\b";
            //yanse(240);
            color_hui();
            cout << " 游戏说明 ";
        }
        if (h == 15 && 31 <= l && l <= 38)
        {
            if (axj(z_sb))
            {
                s = '3';
                break;
            }
            else
            {
                ydgb(15, 38);
                cout << "\b\b\b\b\b\b\b";
                yanse(7);
                color_bai();
                cout << ">游戏存档<";
            }
        }
        else
        {
            ydgb(15, 38);
            cout << "\b\b\b\b\b\b\b";
            //yanse(240);
            color_hui();
            cout << " 游戏存档 ";
        }
    }
    Sleep(150);
    switch (s)
    {
    case '0':


            cxjs = 0;
            MessageBox(0, "再见！\n\n制作：闫执", "系统", MB_OK);
            return;






        break;
    case '1':
        yxym();
        break;
    case '2':
        smym();
        break;
    case '3':
        cddx.out(cgjd, "闯关进度.binggan");

        break;
    }
    return;
}
void yxym()
{
    //yanse(240);
    char s;
    system("cls");
    while (1)
    {
    	color_hui();
        gs(8, 30, "退出");
        gs(2, 30, "单人模式");
        gs(1, 30, "双人模式");
        gs(1, 30, "三人模式");
        gs(1, 30, "四人模式");
        while (1)
        {
            long long h = sbwz().h, l = sbwz().l;
            if (h == 9 && 31 <= l && l <= 34)//
            {
                if (axj(z_sb))
                {
                    s = '0';
                    break;
                }
                else
                {
                    ydgb(9, 38);
                    cout << "\b\b\b\b\b\b\b";
                    yanse(7);
                    color_bai();
                    cout << ">退出<";
                }
            }
            else
            {
                ydgb(9, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 退出 ";
            }
            if (h == 11 && 31 <= l && l <= 38)//
            {
                if (axj(z_sb))
                {
                    s = '1';
                    break;
                }
                else
                {
                    ydgb(11, 38);
                    cout << "\b\b\b\b\b\b\b";
                    color_bai();
                    
                    cout << ">单人模式<";
                }
            }
            else
            {
                ydgb(11, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 单人模式 ";
            }
            if (h == 12 && 31 <= l && l <= 38)//
            {
                if (axj(z_sb))
                {
                    s = '2';
                    break;
                }
                else
                {
                    ydgb(12, 38);
                    cout << "\b\b\b\b\b\b\b";
                    color_bai();
                    cout << ">双人模式<";
                }
            }
            else
            {
                ydgb(12, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 双人模式 ";
            }
            if (h == 13 && 31 <= l && l <= 38)//
            {
                if (axj(z_sb))
                {
                    s = '3';
                    break;
                }
                else
                {
                    ydgb(13, 38);
                    cout << "\b\b\b\b\b\b\b";
                    color_bai();
                    cout << ">三人模式<";
                }
            }
            else
            {
                ydgb(13, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 三人模式 ";
            }
            if (h == 14 && 31 <= l && l <= 38)//
            {
                if (axj(z_sb))
                {
                    s = '4';
                    break;
                }
                else
                {
                    ydgb(14, 38);
                    cout << "\b\b\b\b\b\b\b";
                    color_bai();
                    cout << ">四人模式<";
                }
            }
            else
            {
                ydgb(14, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 四人模式 ";
            }
        }
        Sleep(150);
        switch (s)
        {
        case '0':
            return;
        case '1':
            runs = 1;
            break;
        case '2':
            runs = 2;
            break;
        case '3':
            runs = 3;
            break;
        case '4':
            runs = 4;
            break;
        }
        youxi();
    }
    return;
}
void out()
{
    for (long long i = 1; i <= 19; i++)
    {
        for (long long j = 1; j <= 75; j++)
        {
            if (i == wj1x && j == wj1y)
            {
        
                color_hong();
                cout << "1";
            }
            else
                if (i == wj2x && j == wj2y && runs >= 2)
                {
                    color_qing();
                    cout << "2";
                }
                else
                    if (i==wj3x&&j==wj3y&&runs>= 3)
                    {
                        color_lv();
                        cout << "3";
                    }
                    else
                        if (i==wj4x&&j==wj4y&&runs>= 4)
                        {
                            color_huang();
                            cout << "4";
                        }
                        else
                            if (dt[dtbh][i][j]=='$')
                            {
                                color_huang();
                                cout << "$";
                            }
                            else
                            {
                            if (dt[dtbh][i][j]=='=') color_bai(); //yanse(240);
                    		else if (dt[dtbh][i][j]=='^'||dt[dtbh][i][j]=='>'||dt[dtbh][i][j]=='<'||dt[dtbh][i][j] =='.') color_hong();
                            else if (dt[dtbh][i][j]=='-') color_qing();
                                
                                cout << dt[dtbh][i][j];
                            }
        }
        cout << endl;
    }
    return;
}
void in()
{
    //yanse(240);
    char s;
    if (GetKeyState('P') < 0)
    {
        system("cls");
        for (long long i = 1; i <= 6; i++)
        {
            cout << "\n";
        }
        for (long long i = 1; i <= 30; i++)
            cout << " ";
        cout << "暂停中\n\n";
        for (long long i = 1; i <= 30; i++)
            cout << " ";
        cout << "退出\n";
        for (long long i = 1; i <= 30; i++)
            cout << " ";
        cout << "返回\n";
        while (1)
        {
            long long h = sbwz().h, l = sbwz().l;
            if (h == 9 && 31 <= l && l <= 34)//
            {
                if (axj(z_sb))
                {
                    s = '0';
                    break;
                }
                else
                {
                    ydgb(9, 38);
                    cout << "\b\b\b\b\b\b\b";
                    color_bai();
                    cout << ">退出<";
                }
            }
            else
            {
                ydgb(9, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 退出 ";
            }
            if (h == 10 && 31 <= l && l <= 34)//
            {
                if (axj(z_sb))
                {
                    s = '1';
                    break;
                }
                else
                {
                    ydgb(10, 38);
                    cout << "\b\b\b\b\b\b\b";
                    color_bai();
                    cout << ">返回<";
                }
            }
            else
            {
                ydgb(10, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 返回 ";
            }
        }
        Sleep(150);
        switch (s)
        {
        case '0':
            f = 0;
            sy = 0;
            //yanse(240);
            return;
        case '1':
            //yanse(240);
            system("cls");
            out();
            system("cls");
            out();
            break;
        }
    }
    if (GetKeyState(38) < 0 && (dt[dtbh][wj1x - 1][wj1y] == ' ' || dt[dtbh][wj1x - 1][wj1y] == '$') && wj1x > 1 && t1)
    {
        wj1x--;
        for (long long i = 1; i <= 2; i++)
            if (dt[dtbh][wj1x - 1][wj1y] == ' ' && wj1x > 1)wj1x--;
        t1 = 0;
    }
    if (GetKeyState(37) < 0 && (dt[dtbh][wj1x][wj1y - 1] == ' ' || dt[dtbh][wj1x][wj1y - 1] == '$') && wj1y - 1 > 0)
    {
        wj1y--;
    }
    if (GetKeyState(39) < 0 && (dt[dtbh][wj1x][wj1y + 1] == ' ' || dt[dtbh][wj1x][wj1y + 1] == '$') && wj1y - 1 <= 100)
    {
        wj1y++;
    }
    if (runs >= 2)
    {
        if (GetKeyState('W') < 0 && (dt[dtbh][wj2x - 1][wj2y] == ' ' || dt[dtbh][wj2x - 1][wj2y] == '$') && wj2x > 1 && t2)
        {
            wj2x--;
            for (long long i = 1; i <= 2; i++)
                if (dt[dtbh][wj2x - 1][wj2y] == ' ' && wj2x > 1)wj2x--;
            t2 = 0;
        }
        if (GetKeyState('A') < 0 && (dt[dtbh][wj2x][wj2y - 1] ==' '||dt[dtbh][wj2x][wj2y - 1] == '$') && wj2y - 1 > 0)
        {
            wj2y--;
        }
        if (GetKeyState('D') < 0 && (dt[dtbh][wj2x][wj2y + 1] ==' '||dt[dtbh][wj2x][wj2y + 1] == '$') && wj1y - 1 <= 100)
        {
            wj2y++;
        }
    }
    if (runs >= 3)
    {
        if (GetKeyState('I') < 0 && (dt[dtbh][wj3x - 1][wj3y] == ' ' || dt[dtbh][wj3x - 1][wj3y] == '$') && wj3x > 1 && t3)
        {
            wj3x--;
            for (long long i = 1; i <= 2; i++)
                if (dt[dtbh][wj3x - 1][wj3y] == ' ' && wj3x > 1)wj3x--;
            t3 = 0;
        }
        if (GetKeyState('J') < 0 && (dt[dtbh][wj3x][wj3y - 1] == ' ' || dt[dtbh][wj3x][wj3y - 1] == '$') && wj3y - 1 > 0)
        {
            wj3y--;
        }
        if (GetKeyState('L') < 0 && (dt[dtbh][wj3x][wj3y + 1] == ' ' || dt[dtbh][wj3x][wj3y + 1] == '$') && wj3y - 1 <= 100)
        {
            wj3y++;
        }
    }
    if (runs >= 4)
    {
        if (GetKeyState(101) < 0 && (dt[dtbh][wj4x - 1][wj4y] == ' ' || dt[dtbh][wj4x - 1][wj4y] == '$') && wj4x > 1 && t4)
        {
            wj4x--;
            for (long long i = 1; i <= 2; i++)
                if (dt[dtbh][wj4x - 1][wj4y] == ' ' && wj4x > 1)wj4x--;
            t4 = 0;
        }
        if (GetKeyState(97) < 0 && (dt[dtbh][wj4x][wj4y - 1] == ' ' || dt[dtbh][wj4x][wj4y - 1] == '$') && wj4y - 1 > 0)
        {
            wj4y--;
        }
        if (GetKeyState(99) < 0 && (dt[dtbh][wj4x][wj4y + 1] == ' ' || dt[dtbh][wj4x][wj4y + 1] == '$') && wj4y - 1 <= 100)
        {
            wj4y++;
        }
    }
    return;
}
void lx()
{
    if (dt[dtbh][wj1x + 1][wj1y] == ' ' || dt[dtbh][wj1x + 1][wj1y] == '$')wj1x++;
    else t1 = 1;
    if (dt[dtbh][wj2x + 1][wj2y] == ' ' || dt[dtbh][wj2x + 1][wj2y] == '$')wj2x++;
    else t2 = 1;
    if (dt[dtbh][wj3x + 1][wj3y] == ' ' || dt[dtbh][wj3x + 1][wj3y] == '$')wj3x++;
    else t3 = 1;
    if (dt[dtbh][wj4x + 1][wj4y] == ' ' || dt[dtbh][wj4x + 1][wj4y] == '$')wj4x++;
    else t4 = 1;
    return;
}
void yl()
{
    if (dt[dtbh][wj1x][wj1y] == '$')
    {
        f = 0;
        sy = 1;
    }
    if (dt[dtbh][wj2x][wj2y] == '$')
    {
        f = 0;
        sy = 2;
    }
    if (dt[dtbh][wj3x][wj3y] == '$')
    {
        f = 0;
        sy = 3;
    }
    if (dt[dtbh][wj4x][wj4y] == '$')
    {
        f = 0;
        sy = 4;
    }
    return;
}
void bd()
{
    if (wj1x == 20)
    {
        wj1x = csx[dtbh]; wj1y = csy[dtbh];
    }
    if (wj2x == 20)
    {
        wj2x = csx[dtbh]; wj2y = csy[dtbh];
    }
    if (wj3x == 20)
    {
        wj3x = csx[dtbh]; wj3y = csy[dtbh];
    }
    if (wj4x == 20)
    {
        wj4x = csx[dtbh]; wj4y = csy[dtbh];
    }
    if (dt[dtbh][wj1x + 1][wj1y] == '^'||dt[dtbh][wj1x + 1][wj1y] == '.')
    {
        wj1x = csx[dtbh]; wj1y = csy[dtbh];
    }
    if (dt[dtbh][wj2x + 1][wj2y] == '^'||dt[dtbh][wj2x + 1][wj2y] == '.')
    {
        wj2x = csx[dtbh]; wj2y = csy[dtbh];
    }//
    if (dt[dtbh][wj3x + 1][wj3y] == '^'||dt[dtbh][wj3x + 1][wj3y] == '.')
    {
        wj3x = csx[dtbh]; wj3y = csy[dtbh];
    }
    if (dt[dtbh][wj4x + 1][wj4y] == '^'||dt[dtbh][wj4x + 1][wj4y] == '.')
    {
        wj4x = csx[dtbh]; wj4y = csy[dtbh];
    }//
    if (dt[dtbh][wj1x][wj1y + 1] == '<')
    {
        wj1x = csx[dtbh]; wj1y = csy[dtbh];
    }
    if (dt[dtbh][wj2x][wj2y + 1] == '<')
    {
        wj2x = csx[dtbh]; wj2y = csy[dtbh];
    }//
    if (dt[dtbh][wj3x][wj3y + 1] == '<')
    {
        wj3x = csx[dtbh]; wj3y = csy[dtbh];
    }
    if (dt[dtbh][wj4x][wj4y + 1] == '<')
    {
        wj4x = csx[dtbh]; wj4y = csy[dtbh];
    }//
    if (dt[dtbh][wj1x][wj1y - 1] == '>')
    {
        wj1x = csx[dtbh]; wj1y = csy[dtbh];
    }
    if (dt[dtbh][wj2x][wj2y - 1] == '>')
    {
        wj2x = csx[dtbh]; wj2y = csy[dtbh];
    }//
    if (dt[dtbh][wj3x][wj3y - 1] == '>')
    {
        wj3x = csx[dtbh]; wj3y = csy[dtbh];
    }
    if (dt[dtbh][wj4x][wj4y - 1] == '>')
    {
        wj4x = csx[dtbh]; wj4y = csy[dtbh];
    }//
    if (dt[dtbh][wj1x + 1][wj1y] == '-')
    {
        for (long long i = 1; i <= 10 && wj1x > 1; i++)
        {
            if (dt[dtbh][wj1x - 1][wj1y] == ' ' || dt[dtbh][wj1x - 1][wj1y] == '$')
            {
                wj1x--;
            }
            else
                break;
        }
    }
    if (dt[dtbh][wj2x + 1][wj2y] == '-')
    {
        for (long long i = 1; i <= 10 && wj2x > 1; i++)
        {
            if (dt[dtbh][wj2x - 1][wj2y] == ' ' || dt[dtbh][wj2x - 1][wj2y] == '$')
            {
                wj2x--;
            }
            else
                break;
        }
    }//
    if (dt[dtbh][wj3x + 1][wj3y] == '-')
    {
        for (long long i = 1; i <= 10 && wj3x > 1; i++)
        {
            if (dt[dtbh][wj3x - 1][wj3y] == ' ' || dt[dtbh][wj3x - 1][wj3y] == '$')
            {
                wj3x--;
            }
            else
                break;
        }
    }
    if (dt[dtbh][wj4x + 1][wj4y] == '-')
    {
        for (long long i = 1; i <= 10 && wj4x > 1; i++)
        {
            if (dt[dtbh][wj4x - 1][wj4y] == ' ' || dt[dtbh][wj4x - 1][wj4y] == '$')
            {
                wj4x--;
            }
            else
                break;
        }
    }
    return;
}
void youxi()
{
    //yanse(240);
    system("cls");
    char s;
    while (1)
    {
    	color_hui();
        for (long long i = 1; i <= 8; i++)
            cout << "\n";
        for (long long i = 1; i <= 30; i++)
            cout << " ";
        cout << "退出\n\n";
        for (long long i = 1; i <= 30; i++)
            cout << " ";
        cout << "随机\n\n";
        for (long long i = 1; i <= 30; i++)
            cout << " ";
        cout << "闯关\n";
        while (1)
        {
            long long h = sbwz().h, l = sbwz().l;
            if (h == 9 && 31 <= l && l <= 34)//
            {
                if (axj(z_sb))
                {
                    s = '0';
                    break;
                }
                else
                {
                    ydgb(9, 38);
                    cout << "\b\b\b\b\b\b\b";
                    color_bai();
                    cout << ">退出<";
                }
            }
            else
            {
                ydgb(9, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 退出 ";
            }
            if (h == 11 && 31 <= l && l <= 34)//
            {
                if (axj(z_sb))
                {
                    s = '1';
                    break;
                }
                else
                {
                    ydgb(11, 38);
                    cout << "\b\b\b\b\b\b\b";
                    color_bai();
                    cout << ">随机关卡<";
                }
            }
            else
            {
                ydgb(11, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 随机关卡 ";
            }
            if (h == 13 && 31 <= l && l <= 34)//
            {
                if (axj(z_sb))
                {
                    s = '2';
                    break;
                }
                else
                {
                    ydgb(13, 38);
                    cout << "\b\b\b\b\b\b\b";
                    color_bai();
                    cout << ">闯关模式<";
                }
            }
            else
            {
                ydgb(13, 38);
                cout << "\b\b\b\b\b\b\b";
                //yanse(240);
                color_hui();
                cout << " 闯关模式 ";
            }
        }
        Sleep(150);
        switch (s)
        {
        case '0':
            //yanse(240);
            system("cls");
            return;
        case '1':
            suij();
            break;
        case '2':
            cg();
            break;
        }
        system("cls");
    }
    return;
}
void suij()
{
    char s;
    while (1)
    {
        csh();
        dtbh = rand() % dts + 1;
        wj1x = wj2x = wj3x = wj4x = csx[dtbh];
        wj1y = wj2y = wj3y = wj4y = csy[dtbh];
        system("cls");
        out();
        for (long long i = 1; f; i++)
        {
            gx();
            //yanse(240);
            Sleep(50);
            in();
            yl();
            bd();
            yl();
            if (cs == 1)
                lx();
            yl();
            if (cs == 1)cs = -1;
            cs++;
            if (i == 1)
            {
                system("cls");
                out();
            }
        }
        system("cls");
        if (runs >= 2)
        {
            if (sy == 0)
            {
                system("cls");
                return;
            }
            if (sy == 1)
            {
                yanse(11);
                system("cls");
                cout << "1号玩家拿下本局比赛！";
                cout << "\n点击继续";
                while (!axj(z_sb));
                Sleep(150);
            }
            else
                if (sy == 2)
                {
                    yanse(12);
                    system("cls");
                    cout << "2号玩家喜提冠军奖杯??";
                    cout << "\n点击继续";
                    while (!axj(z_sb));
                    Sleep(150);
                }
                else
                    if (sy == 3)
                    {
                        yanse(14);
                        system("cls");
                        cout << "3号玩家：万中挑一的绝对强者！";
                        cout << "\n点击继续";
                        while (!axj(z_sb));
                        Sleep(150);
                    }
                    else
                        if (sy == 4)
                        {
                            yanse(10);
                            system("cls");
                            cout << "4号玩家！神一样的存在！";
                            cout << "\n点击继续";
                            while (!axj(z_sb));
                            Sleep(150);
                        }
        }
        else
        {
            if (sy == 0)
            {
                system("cls");
                return;
            }
            else
            {
                yanse(11);
                system("cls");
                cout << "你赢了！！！";
                cout << "\n点击继续";
                while (!axj(z_sb));
            }
        }
        //yanse(240);
        system("cls");
        cout << "是否返回？\n";
        cout << "返回\n";
        cout << "继续";
        while (1)
        {
            long long h = sbwz().h, l = sbwz().l;
            if (h == 2 && 1 <= l && l <= 4)
            {
                ydgb(2, 1);
                color_bai(); 
                cout << ">返回<";
                if (axj(z_sb))
                {
                    s = 'y';
                    break;
                }
            }
            else
            {
                ydgb(2, 1);
                //yanse(240);
                color_hui(); 
                cout << " 返回 ";
            }
            if (h == 3 && 1 <= l && l <= 4)
            {
                ydgb(3, 1);
                color_bai(); 
                cout << ">继续<";
                if (axj(z_sb))
                {
                    s = 'n';
                    break;
                }
            }
            else
            {
                ydgb(3, 1);
                //yanse(240);
                color_hui(); 
                cout << " 继续 ";
            }
        }
        Sleep(150);
        if (s == 'y')
        {
            f = 0;
            //yanse(240);
            system("cls");
            return;
        }
        //yanse(240);
        system("cls");
    }
    return;
}
void gx()
{
    if (dt[dts][y_1x][y_1y] != '$')
    {
        //yanse(240);
        ydgb(y_1x, y_1y + 1);
        cout << '\b' << " ";
    }
    if (runs >= 2 && dt[dts][y_2x][y_2y] != '$')
    {
        ydgb(y_2x, y_2y + 1);
        cout << '\b' << " ";
    }
    if (runs >= 3 && dt[dts][y_3x][y_3y] != '$')
    {
        ydgb(y_3x, y_3y + 1);
        cout << '\b' << " ";
    }
    if (runs >= 4 && dt[dts][y_4x][y_4y] != '$')
    {
        ydgb(y_4x, y_4y + 1);
        cout << '\b' << " ";
    }
    if (runs >= 4 && dt[dts][wj4x][wj4y] != '$')
    {
        yanse(10);
        ydgb(wj4x, wj4y + 1);
        if (dt[dts][y_4x][y_4y] != '$')
        {
            cout << '\b';
            cout << "4";
        }
    }
    if (runs >= 3 && dt[dts][wj3x][wj3y] != '$')
    {
        yanse(14);
        ydgb(wj3x, wj3y + 1);
        if (dt[dts][y_3x][y_3y] != '$')
        {
            cout << '\b';
            cout << "3";
        }
    }
    if (runs >= 2 && dt[dts][wj2x][wj2y] != '$')
    {
        yanse(12);
        ydgb(wj2x, wj2y + 1);
        if (dt[dts][y_2x][y_2y] != '$')
        {
            cout << '\b';
            cout << "2";
        }
    }
    if (dt[dts][wj1x][wj1y] != '$')
    {
        yanse(11);
        ydgb(wj1x, wj1y + 1);
        if (dt[dts][y_1x][y_1y] != '$')
        {
            cout << '\b';
            cout << "1";
        }
    }
    y_1x = wj1x, y_1y = wj1y;
    if (runs >= 2)
    {
        y_2x = wj2x, y_2y = wj2y;
    }
    if (runs >= 3)
    {
        y_3x = wj3x, y_3y = wj3y;
    }
    if (runs >= 4)
    {
        y_4x = wj4x, y_4y = wj4y;
    }
    //yanse(240);
    return;
}
void cg()
{
    bool flag = 1;
    char s;
    system("cls");
    while (1)
    {
        csh();
        while (f)
        {
            flag = 1;
            system("cls");
            cout << "退出" << endl;
            for (long long i = 1; i <= dts; i++)
            {
                if (cgjd >= i)
                {
                    cout << dtm[i];
                    if (cgjd == i)
                    {
                        cout << "=";
                    }
                    for (long long j = 1; j <= 15 - dtm[i].size() - (cgjd == i); j++)
                    {
                        cout << " ";
                    }
                }
                else
                {
                    cout << "？？？？";
                    for (long long j = 1; j <= 14 - 7; j++)
                    {
                        cout << " ";
                    }
                }
                if (i % 4 == 0)
                    cout << endl;
            }
            while (flag)
            {
                long long h = sbwz().h, l = sbwz().l;
                long long da[4] = { 1,16,31,46 },
                    db[4] = { 8,23,38,53 };
                if (h == 1 && 1 <= l && l <= 4)
                {
                    ydgb(1, 1);
                    yanse(7);
                    cout << ">退出<";
                    if (axj(z_sb))
                    {
                        //yanse(240);
                        system("cls");
                        return;
                    }
                }
                else
                {
                    ydgb(1, 1);
                    //yanse(240);
                    cout << " 退出 ";
                }
                for (long long i = 0; i < dts; i++)
                {
                    if (h == (i / 4) + 2 && da[i % 4] <= l && l <= db[i % 4])
                    {
                        ydgb((i / 4) + 2, da[i % 4]);
                        yanse(7);
                        if (cgjd < i + 1)
                            cout << "？？？？";
                        else
                            cout << dtm[i + 1];
                        if (axj(z_sb))
                        {
                            s = i + '0' + 1;
                            flag = 0;
                            //yanse(240);
                            system("cls");
                            break;
                        }
                    }
                    else
                    {
                        ydgb((i / 4) + 2, da[i % 4]);
                        //yanse(240);
                        if (cgjd < i + 1)
                            cout << "？？？？";
                        else
                            cout << dtm[i + 1];
                    }
                }
            }
            Sleep(150);
            if (s - '0' > cgjd)
            {
                system("cls");
                cout << "\n你还没有解锁此关卡！\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
                cout << "点击继续";
                while (!axj(z_sb));
                system("cls");
                Sleep(150);
                break;
            }
            system("cls");
            dtbh = s - '0';
            wj1x = wj2x = wj3x = wj4x = csx[dtbh];
            wj1y = wj2y = wj3y = wj4y = csy[dtbh];
            out();
            for (long long i = 1; f; i++)
            {
                gx();
                //yanse(240);
                Sleep(50);
                in();
                yl();
                bd();
                yl();
                if (cs == 1)
                    lx();
                yl();
                if (cs == 1)cs = -1;
                cs++;
                if (i == 1)
                {
                    system("cls");
                    out();
                }
            }
            system("cls");
            if (runs >= 2)
            {
                if (sy == 0)
                {
                    system("cls");
                    return;
                }
                if (sy == 1)
                {
                    yanse(11);
                    system("cls");
                    cout << "恭喜1号玩家登上冠军宝座！";
                    cout << "\n点击继续";
                    while (!axj(z_sb));
                    Sleep(150);
                }
                else
                    if (sy == 2)
                    {
                        yanse(12);
                        system("cls");
                        cout << "2号玩家成为本局MVP！";
                        cout << "\n点击继续";
                        while (!axj(z_sb));
                        Sleep(150);
                    }
                    else
                        if (sy == 3)
                        {
                            yanse(14);
                            system("cls");
                            cout << "3号玩家成功战胜其余玩家！";
                            cout << "\n点击继续";
                            while (!axj(z_sb));
                            Sleep(150);
                        }
                        else
                            if (sy == 4)
                            {
                                yanse(10);
                                system("cls");
                                cout << "4号玩家在本剧中获得“无敌”称号";
                                cout << "\n点击继续";
                                while (!axj(z_sb));
                                Sleep(150);
                            }
            }
            else
            {
                if (sy == 0)
                {
                    system("cls");
                    break;
                }
                else
                {
                    yanse(11);
                    system("cls");
                    cout << "你赢了！！！";
                    cout << "\n点击继续";
                    while (!axj(z_sb));
                    Sleep(150);
                }
            }
            //yanse(240);
            if (cgjd == dtbh)
            {
                cgjd++;
            }
            system("cls");
        }
    }
    return;
}
void smym()
{
    while (1)
    {
        //yanse(240);
        char s;
        system("cls");
        cout << "游戏说明：\n";
        cout << "退出\n";
        cout << "操作说明\n";
        cout << "物品说明\n";
        cout << "游戏技巧\n";
        cout << "版本说明\n";
        while (1)
        {
            long long h = sbwz().h, l = sbwz().l;
            if (h == 2 && 1 <= l && l <= 4)
            {
                color_bai(); 
                ydgb(2, 1);
                cout << ">退出<";
                if (axj(z_sb))
                {
                    s = '0';
                    break;
                }
            }
            else
            {
                //yanse(240);
                color_hui(); 
                ydgb(2, 1);
                cout << " 退出 ";
            }
            if (h == 3 && 1 <= l && l <= 8)
            {
                color_bai(); 
                ydgb(3, 1);
                cout << ">操作说明<";
                if (axj(z_sb))
                {
                    s = '1';
                    break;
                }
            }
            else
            {
                //yanse(240);
                ydgb(3, 1);
                color_hui(); 
                cout << " 操作说明 ";
            }
            if (h == 4 && 1 <= l && l <= 8)
            {
                color_bai(); 
                ydgb(4, 1);
                
                cout << ">物品说明<";
                if (axj(z_sb))
                {
                    s = '2';
                    break;
                }
            }
            else
            {
                //yanse(240);
                ydgb(4, 1);
                color_hui(); 
                cout << " 物品说明 ";
            }
            if (h == 5 && 1 <= l && l <= 8)
            {
                color_bai(); 
                ydgb(5, 1);
                cout << ">游戏技巧<";
                if (axj(z_sb))
                {
                    s = '3';
                    break;
                }
            }
            else
            {
                //yanse(240);
                ydgb(5, 1);
                color_hui(); 
                cout << " 游戏技巧 ";
            }
            if (h == 6 && 1 <= l && l <= 8)
            {
                color_bai(); 
                ydgb(6, 1);
                cout << ">版本说明<";
                if (axj(z_sb))
                {
                    s = '4';
                    break;
                }
            }
            else
            {
                //yanse(240);
                ydgb(6, 1);
                color_hui(); 
                cout << " 版本说明 ";
            }
        }
        Sleep(150);
        //yanse(240);
        switch (s)
        {
        case '0':
            system("cls");
            return;
        case '1':
            szsmym();
            break;
        case '2':
            wpsmym();
            break;
        case '3':
            yxjqym();
            break;
        case '4':
            yxbbsm();
        }
    }
    return;
}
void szsmym()
{
    char s;
    system("cls");
    gs(0, 0, "操作说明：");
    gs(1, 8, "_________"); gs(0, 6, "_________");  
    gs(1, 8, "|       |"); gs(0, 6, "|       |");
    gs(1, 8, "| 玩家1 |"); gs(0, 6, "| 玩家2 |");
    gs(1, 8, "|   ↑  |"); gs(0, 6, "|   W   |");
    gs(1, 8, "| ←  →|"); gs(0, 6, "| A   D |");
    gs(1, 8, "| 移动  |"); gs(0, 6, "| 移动  |");
    gs(1, 8, "|_______|"); gs(0, 6, "|_______|");
    gs(1, 0, "");
    gs(1, 8, "_________"); gs(0, 6, "_________");  
    gs(1, 8, "|       |"); gs(0, 6, "|       |");
    gs(1, 8, "| 玩家3 |"); gs(0, 6, "| 玩家4 |");
    gs(1, 8, "|   I   |"); gs(0, 6, "|   5   |");
    gs(1, 8, "| J   L |"); gs(0, 6, "| 1   3 |");
    gs(1, 8, "| 移动  |"); gs(0, 6, "| 移动  |");
    gs(1, 8, "|_______|"); gs(0, 6, "|_______|");
    gs(1, 0, "");
    gs(1, 4, "功能键：");
    gs(1, 8, "P暂停");
    cout << "\n\n点击继续";
    while (!axj(z_sb));
    Sleep(150);
    system("cls");
    return;
}
void wpsmym()
{
    char s;
    system("cls");
    cout << "1 玩家1\n";
    cout << "2 玩家2\n";
    cout << "3 玩家3\n";
    cout << "4 玩家3\n";
    cout << "= 方块\n";
    cout << "$ 终点\n";
    cout << "- 蹦床\n";
    cout << "^ 上刺\n";
    cout << "< 左刺\n";
    cout << "> 右刺\n";
    cout << "\n点击继续";
    while (!axj(z_sb));
    Sleep(150);
    system("cls");
    return;
}
void yxjqym()
{
    system("cls");
    char s;
    system("cls");
    gs(1, 4, "游戏技巧：");
    gs(1, 8, "1.延迟起跳：");
    gs(1, 12, "如果上方有物品，跳起来会挡住");
    gs(1, 12, "可以先走过去，等上方无遮挡物时按跳键");
    gs(1, 12, "这样就可以跳的远了");
    cout << "\n\n\n\n\n\n\n\n\n\n点击继续";
    while (!axj(z_sb));
    Sleep(150);
    system("cls");
    return;
}
void yxbbsm()
{
    system("cls");
    cout << "游戏名：跑酷\n";
    cout << "游戏版本：10.0\n";
    cout << "游戏作者：闫执\n";
    cout << "\n点击继续";
    while (!axj(z_sb));
    Sleep(150);
    system("cls");
    return;
}
