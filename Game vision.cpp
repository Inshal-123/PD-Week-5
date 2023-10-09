#include<iostream>
#include<windows.h>
using namespace std;
	void printMaze();
	char getcharAtxy(short int x, short int y);
	void gotoxy(int x, int y);
	void printEnemy1();
	void eraseEnemy1();
	void printEnemy2();
	void eraseEnemy2();
	void moveEnemy1();
	void moveEnemy2();
	void erasePlayer1();
	void erasePlayer2();
	void printPlayer();
	void movePlayerLeft();
	void movePlayerRight();
	void movePlayerUp();
	void movePlayerDown();
	int eX1 = 2, eY1 = 2;
	int eX2 = 52, eY2 = 2; 
	int pX = 47, pY = 34;
int main()
{
	system("cls");
	printMaze();
	printEnemy1();
	printEnemy2();
	printPlayer();
	while(true)
	{
		if (GetAsyncKeyState(VK_LEFT))
		{
			movePlayerLeft();
		}
		if (GetAsyncKeyState(VK_RIGHT))
		{
			movePlayerRight();
		}
		moveEnemy1();
		moveEnemy2();
		Sleep(200);
		}
}
void gotoxy(int x, int y)
	{
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
   	}
void printMaze()
	{
	cout<<"#################################################################################################################"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ; 
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ; 
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
     	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
     	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#                                                                                                               #"<< endl ;
	cout<<"#################################################################################################################"<< endl ;
	}
void printEnemy1()
	{
	gotoxy(eX1,eY1);
	cout << "(~~~) (~~~)";
	gotoxy(eX1,eY1+1);
	cout << "|=| | | |=|";
	gotoxy(eX1,eY1+2);
	cout << "|=| | | |=|";
	gotoxy(eX1,eY1+3);
	cout << "   \\   /    ";
	gotoxy(eX1,eY1+4);
	cout << "    \\ /    ";
}
void eraseEnemy1()
{
	gotoxy(eX1,eY1);
	cout << "           ";
	gotoxy(eX1,eY1+1);
	cout << "           ";
	gotoxy(eX1,eY1+2);
	cout << "           ";
	gotoxy(eX1,eY1+3);
	cout << "           ";
	gotoxy(eX1,eY1+4);
	cout << "           ";	
} 
void moveEnemy1()
{
	eraseEnemy1();
	eX1 = eX1 + 1;
	if(eX1 == 43)
	{
	eX1 = 2;
	}
	printEnemy1();
}
void printEnemy2()
	{
	gotoxy(eX2,eY2);
	cout << "(~~~) (~~~)";
	gotoxy(eX2,eY2+1);
	cout << "|=| | | |=|";
	gotoxy(eX2,eY2+2);
	cout << "|=| | | |=|";
	gotoxy(eX2,eY2+3);
	cout << "   \\   /    ";
	gotoxy(eX2,eY2+4);
	cout << "    \\ /    ";
}
void eraseEnemy2()
{
	gotoxy(eX2,eY2);
	cout << "           ";
	gotoxy(eX2,eY2+1);
	cout << "           ";
	gotoxy(eX2,eY2+2);
	cout << "           ";
	gotoxy(eX2,eY2+3);
	cout << "           ";
	gotoxy(eX2,eY2+4);
	cout << "           ";	
} 
void moveEnemy2()
{
	eraseEnemy2();
	eX2 = eX2 + 1;
	if(eX2 == 100)
	{
	eX2 = 52;
	}
	printEnemy2();
}
void printPlayer() 
{
	gotoxy(pX,pY);
	cout << "      /\\      ";
	gotoxy(pX, pY+1);
	cout << "   __/~~\\__   ";
	gotoxy(pX, pY+2);
	cout << " /   |  |   \\ ";
	gotoxy(pX, pY+3);
	cout << "=====.  .===== ";
	gotoxy(pX, pY+4);
	cout << "     ||||      ";
}
void erasePlayer1()
{
	gotoxy(pX,pY);
	cout << "               ";
	gotoxy(pX, pY+1);
	cout << "               ";
	gotoxy(pX, pY+2);
	cout << "               ";
	gotoxy(pX, pY+3);
	cout << "               ";
	gotoxy(pX, pY+4);
	cout << "               ";
}
void erasePlayer2()
{
	gotoxy(pX, pY);
	cout<<"                 ";
	gotoxy(pX-1, pY);
	cout << "               ";
	gotoxy(pX-2, pY);
	cout << "               ";
	gotoxy(pX-3, pY);
	cout << "               ";
	gotoxy(pX-4, pY);
	cout << "               ";
}
char getCharAtxy(short int pX, short int pY)
{
	CHAR_INFO ci;
	COORD xy = {0,0};
	SMALL_RECT rect = { pX, pY, pX, pY};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}
void movePlayerLeft() 
{
	if (getCharAtxy(pX - 1, pY) == ' ')
	{
	erasePlayer1();
	pX = pX -1;
	printPlayer(); 
	} 
}
void movePlayerRight()  
{
	if (getCharAtxy(pX + 15, pY)== ' ')
	{
	erasePlayer1();
	pX = pX +1;
	printPlayer();
	} 
}
void movePlayerUp()
{
	if (getCharAtxy(pX, pY+5)== ' ')
	{
	erasePlayer2();
	pY = pY - 1;
	printPlayer();
	}
}