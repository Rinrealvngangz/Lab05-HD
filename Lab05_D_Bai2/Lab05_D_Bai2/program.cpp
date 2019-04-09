#include<iostream>
#include<conio.h>
#include <time.h>
#include <stdlib.h>
#include< math.h>
using namespace std;
#include"thuvien.h"
#include"menu.h"


void chaychuongtrinh();

int main()
{
	
	chaychuongtrinh();
	return 0;
}

void chaychuongtrinh()

{
	int menu;
	int  somenu;
	somenu = 7;
	int n = 0;
	DaySo a;
	do
	{
		menu = chonmenu(somenu);
		xulimenu(menu, a, n);
	} while (menu > 0);
	

	_getch();
}