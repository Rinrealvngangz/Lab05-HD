#include <iostream>
#include < conio.h>
#include <time.h>
#include <stdlib.h>

using namespace std;

#include "thuvien.h"
#include "menu.h"


void chaychuongtrinh();
int main()

{

	chaychuongtrinh();
	return 0;
}
void chaychuongtrinh()
{
	int n = 0;
	int menu;
	int somenu;
	somenu = 8;
	Dayso a;
	
	do
	{
		menu = chonmenu(somenu);
		XuLyMenu(menu, a, n);

	} while (menu > 0);
	_getch();
}