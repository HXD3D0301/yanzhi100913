#include<iostream>
#include <windows.h>

using namespace std;

int map[1500][1500],map2[1500][1500],a,map_x,c,d,color=1,sc=1;
char b;
void kaishi()
{
cout<<"                                          V1.0.00    "<<endl;	
cout<<"                                                   "<<endl;	
cout<<"              ______________________                "<<endl;
cout<<"              |                    |                "<<endl;
cout<<"              |    康威生命游戏    |                "<<endl;
cout<<"              |____________________|                "<<endl;	
cout<<"                     闫执出品                       "<<endl;	
cout<<"                                                   "<<endl;
cout<<"                   ①.开始模拟                      "<<endl;
cout<<"                    ②.个性化               "<<endl;
cout<<"                   ③.模拟规则                  "<<endl;	
cout<<"                 ④.选择输出图像                    "<<endl;			
}
void guize()
{
system("cls");
cout<<"                                "<<endl;	
cout<<"   1.当一个活细胞周围有4个及以上活细胞时， "<<endl;	
cout<<"     这个活细胞死亡。（拥挤）    "<<endl;
cout<<"                                       "<<endl;		
cout<<"   2.当一个活细胞周围有2或3个活细胞时，   "<<endl;	
cout<<"     这个活细胞不变。           "<<endl;	
cout<<"                                "<<endl;		
cout<<"   3.当一个活细胞周围活细胞数为1个及以下时，  "<<endl;	
cout<<"     这个活细胞死亡。（寂寞）      "<<endl;
cout<<"                                "<<endl;		
cout<<"   4.当一个死细胞周围有3活细胞时， "<<endl;	
cout<<"     这个死细胞复活。（繁衍）     "<<endl;	
cout<<endl;
cout<<"输入1返回..."<<endl;	
cin>>c;		
}
void scmap()
{
	
system("cls");
	
    for(int i=1;i<=map_x;i++)	
    {
 	    for(int j=1;j<=map_x;j++)
 	    {
 	    if(map[i][j]==1)
        {
            if(sc==1) cout<<"■ ";
            else if(sc==2) cout<<"●";
            else if(sc==3) cout<<"×";
            else if(sc==4) cout<<"★";
            else if(sc==5) cout<<"◆";
        }
	
        else 
        {
            if(sc==1) cout<<"。";
            else if(sc==2) cout<<"○";
            else if(sc==3) cout<<"  ";
            else if(sc==4) cout<<"☆";
	        else if(sc==5) cout<<"◇";
        }
		}
 	 cout<<endl;   

	}		
}

void czmap()
{	
    for(int i=1;i<=map_x;i++)	
    {
 	    for(int j=1;j<=map_x;j++)
 	    {
 	    map[i][j]=rand()%2;
 	     
		}
 	    
	}		
}

void zhence_map()
{	
int i,j;

	for(i=1;i<=map_x;i++)	
    {
 	    for(j=1;j<=map_x;j++)
 	    map2[i][j]=0; 
	}

    for(i=1;i<=map_x;i++)	
    {
 	    for(j=1;j<=map_x;j++)
 	    {
 	     	
 	    if(j!=map_x) map2[i][j]+=map[i][j+1];
 	    if(j!=1) map2[i][j]+=map[i][j-1];
 	    if(j!=1&&i!=1) map2[i][j]+=map[i-1][j-1];
 	    if(i!=1) map2[i][j]+=map[i-1][j];
 	    if(j!=map_x&&i!=1) map2[i][j]+=map[i-1][j+1];
 	    if(j!=1&&i!=map_x) map2[i][j]+=map[i+1][j-1];
 	    if(i!=map_x) map2[i][j]+=map[i+1][j];
 	    if(j!=map_x&&i!=map_x) map2[i][j]+=map[i+1][j+1];
 	
		} 
	}
	
	for(i=1;i<=map_x;i++)	
    {
 	    for(j=1;j<=map_x;j++)
 	    { 
 	    
 	    if(map[i][j]==1)
 	    {
 	    	
 	    if(map2[i][j]>3) map[i][j]=0;	
 	    else 
 	        {
 	        if(map2[i][j]==2) map[i][j]=1;	
 	        else if(map2[i][j]<2) map[i][j]=0;	
		    }	
		}
		else if(map2[i][j]==3) map[i][j]=1;
		 
		}
	}
							
}
void zx_1()
{
system("cls");
cout<<"输入地图大小："<<endl;
cin>>map_x; 
system("cls");
cout<<"请选择地图生成模式："<<endl<<"1.随机生成地图   2.编辑地图"<<endl;	
cin>>a;	
system("cls");
    if(a==1) czmap();	
    else 	
    {
    cout<<"输入地图：（注：直接输入 地图大小*地图大小 的方阵,1代表有生命，0代表无生命）"<<endl;
    for(int i=1;i<=map_x;i++)	
    {
 	    for(int j=1;j<=map_x;j++)
 	    {
 	    cin>>b;
 	    map[i][j]=b-48;
 	    
		}
 	    
	}	
		 		
	}
		
	while(1)
    {
	scmap();
	zhence_map();
	system("pause");
    		
} 

} 
void pdcolor()
{
	if(color==1) system("color 0F");
	if(color==2) system("color 4F");
	if(color==3) system("color 2C");
	if(color==4) system("color 9F");
	if(color==5) system("color 5E");
	if(color==6) system("color 8F");	
 } 
 

int main(){

system("color 0F");


while(a!=1)
{
system("cls");	
kaishi();	
cin>>a;	

if(a==2)
{
system("cls");	
cout<<"1.白字黑底 2.白字红底 3.红字绿底 4.白字蓝底 5.黄字紫底 6.白字灰底"<<endl<<"选择图像风格："<<endl;	
cin>>color;	
pdcolor();	
}
else if(a==3) guize(); 
else if(a==4)
{
system("cls");	
cout<<"1.■□ 2.●○ 3. ×（空） 4.★ ☆5.◆ ◇"<<endl<<"选择输出图像："<<endl;	
cin>>sc;		
	}	
}

zx_1();

return 0;
} 
