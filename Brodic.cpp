#pragma warning(disable:4996)
#include "BRODIC.h"

int delay = 20; //animation delay between frames
wchar_t* frejmovi[300];

void ucitajFrejmove()
{
	char frame[100];
	char num[100];

	for (int i = 0; i < 300; i++)
	{
		strcpy(frame, "GIF\\frame");
		itoa(i, num, 10);
		strcat(frame, num);
		strcat(frame, ".txt");
		frejmovi[i] = ucitajFajl(frame);
	}
}

void gotoxy(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void SakrijKursor()
{
	CONSOLE_CURSOR_INFO info;
	info.dwSize = 100;
	info.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &info);
}

int uX(int broj)
{
	return POCETAK_TABELE_X + 23 * (broj + 1);
}
int uY(int broj)
{
	return POCETAK_TABELE_Y + 1 + 10 * broj;
}

void slovoA(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"         ███         "); y++;
	gotoxy(x, y); wprintf(L"        ██ ██        "); y++;
	gotoxy(x, y); wprintf(L"       ██   ██       "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      █████████      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void slovoB(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"      ████████       "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ████████       "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ████████       "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void slovoC(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       ██████        "); y++;
	gotoxy(x, y); wprintf(L"      ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"       ██████        "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void slovoD(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"      ████████       "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ████████       "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoE(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"      ████████       "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██████         "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ████████       "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void slovoF(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"      ████████       "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██████         "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void slovoG(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       ██████        "); y++;
	gotoxy(x, y); wprintf(L"      ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"      ██             "); y++;
	gotoxy(x, y); wprintf(L"      ██   ████      "); y++;
	gotoxy(x, y); wprintf(L"      ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"      ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"       ██████        "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void slovoH(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      █████████      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void slovoI(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"        ████         "); y++;
	gotoxy(x, y); wprintf(L"         ██          "); y++;
	gotoxy(x, y); wprintf(L"         ██          "); y++;
	gotoxy(x, y); wprintf(L"         ██          "); y++;
	gotoxy(x, y); wprintf(L"         ██          "); y++;
	gotoxy(x, y); wprintf(L"         ██          "); y++;
	gotoxy(x, y); wprintf(L"        ████         "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void slovoJ(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"            ██       "); y++;
	gotoxy(x, y); wprintf(L"            ██       "); y++;
	gotoxy(x, y); wprintf(L"            ██       "); y++;
	gotoxy(x, y); wprintf(L"            ██       "); y++;
	gotoxy(x, y); wprintf(L"      ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"      ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"       ██████        "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void slovoK(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       ██    ██      "); y++;
	gotoxy(x, y); wprintf(L"       ██   ██       "); y++;
	gotoxy(x, y); wprintf(L"       ██  ██        "); y++;
	gotoxy(x, y); wprintf(L"       █████         "); y++;
	gotoxy(x, y); wprintf(L"       ██  ██        "); y++;
	gotoxy(x, y); wprintf(L"       ██   ██       "); y++;
	gotoxy(x, y); wprintf(L"       ██    ██      "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoL(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"        █            "); y++;
	gotoxy(x, y); wprintf(L"        █            "); y++;
	gotoxy(x, y); wprintf(L"        █            "); y++;
	gotoxy(x, y); wprintf(L"        █            "); y++;
	gotoxy(x, y); wprintf(L"        █            "); y++;
	gotoxy(x, y); wprintf(L"        █            "); y++;
	gotoxy(x, y); wprintf(L"        ███████      "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoM(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       ██   ██       "); y++;
	gotoxy(x, y); wprintf(L"       █ █ █ █       "); y++;
	gotoxy(x, y); wprintf(L"       █  █  █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoN(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       ██    █       "); y++;
	gotoxy(x, y); wprintf(L"       █ █   █       "); y++;
	gotoxy(x, y); wprintf(L"       █  █  █       "); y++;
	gotoxy(x, y); wprintf(L"       █   █ █       "); y++;
	gotoxy(x, y); wprintf(L"       █    ██       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoO(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       ███████       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       ███████       "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoQ(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"        █████        "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █   █ █       "); y++;
	gotoxy(x, y); wprintf(L"       █    █        "); y++;
	gotoxy(x, y); wprintf(L"        ████ █       "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoP(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       ██████        "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       ██████        "); y++;
	gotoxy(x, y); wprintf(L"       █             "); y++;
	gotoxy(x, y); wprintf(L"       █             "); y++;
	gotoxy(x, y); wprintf(L"       █             "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoR(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       ██████        "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       ██████        "); y++;
	gotoxy(x, y); wprintf(L"       █   █         "); y++;
	gotoxy(x, y); wprintf(L"       █    █        "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoS(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"        █████        "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █             "); y++;
	gotoxy(x, y); wprintf(L"        █████        "); y++;
	gotoxy(x, y); wprintf(L"             █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"        █████        "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoT(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       ███████       "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoU(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"        █████        "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoV(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"        █   █        "); y++;
	gotoxy(x, y); wprintf(L"         █ █         "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoW(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"       █  █  █       "); y++;
	gotoxy(x, y); wprintf(L"       █  █  █       "); y++;
	gotoxy(x, y); wprintf(L"       █  █  █       "); y++;
	gotoxy(x, y); wprintf(L"       █  █  █       "); y++;
	gotoxy(x, y); wprintf(L"       █  █  █       "); y++;
	gotoxy(x, y); wprintf(L"        ██ ██        "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoX(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"        █   █        "); y++;
	gotoxy(x, y); wprintf(L"         █ █         "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"         █ █         "); y++;
	gotoxy(x, y); wprintf(L"        █   █        "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoY(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"       █     █       "); y++;
	gotoxy(x, y); wprintf(L"        █   █        "); y++;
	gotoxy(x, y); wprintf(L"         █ █         "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}
void slovoZ(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"        ███████      "); y++;
	gotoxy(x, y); wprintf(L"             █       "); y++;
	gotoxy(x, y); wprintf(L"            █        "); y++;
	gotoxy(x, y); wprintf(L"           █         "); y++;
	gotoxy(x, y); wprintf(L"          █          "); y++;
	gotoxy(x, y); wprintf(L"         █           "); y++;
	gotoxy(x, y); wprintf(L"        ███████      "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
}

void maloX(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"██  ██"); y++;
	gotoxy(x, y); wprintf(L" █  █ "); y++;
	gotoxy(x, y); wprintf(L"  ██  "); y++;
	gotoxy(x, y); wprintf(L" █  █ "); y++;
	gotoxy(x, y); wprintf(L"██  ██"); y++;
}

void br0(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"        █████         "); y++;
	gotoxy(x, y); wprintf(L"       ██   ██        "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██       "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██       "); y++;
	gotoxy(x, y); wprintf(L"      ██     ██       "); y++;
	gotoxy(x, y); wprintf(L"       ██   ██        "); y++;
	gotoxy(x, y); wprintf(L"        █████         "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;
}
void br1(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"          ██          "); y++;
	gotoxy(x, y); wprintf(L"        ████          "); y++;
	gotoxy(x, y); wprintf(L"          ██          "); y++;
	gotoxy(x, y); wprintf(L"          ██          "); y++;
	gotoxy(x, y); wprintf(L"          ██          "); y++;
	gotoxy(x, y); wprintf(L"          ██          "); y++;
	gotoxy(x, y); wprintf(L"        ██████        "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;
}
void br2(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"              ██      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"       ██             "); y++;
	gotoxy(x, y); wprintf(L"       ██             "); y++;
	gotoxy(x, y); wprintf(L"       █████████      "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;
}
void br3(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"              ██      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"              ██      "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;
}
void br4(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"       ██             "); y++;
	gotoxy(x, y); wprintf(L"       ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"       ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"       ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"       █████████      "); y++;
	gotoxy(x, y); wprintf(L"             ██       "); y++;
	gotoxy(x, y); wprintf(L"             ██       "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;
}
void br5(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"       ████████       "); y++;
	gotoxy(x, y); wprintf(L"       ██             "); y++;
	gotoxy(x, y); wprintf(L"       ██             "); y++;
	gotoxy(x, y); wprintf(L"       ███████        "); y++;
	gotoxy(x, y); wprintf(L"             ██       "); y++;
	gotoxy(x, y); wprintf(L"       ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"        ██████        "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;
}
void br6(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"       ██             "); y++;
	gotoxy(x, y); wprintf(L"       ████████       "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;
}
void br7(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"       ████████       "); y++;
	gotoxy(x, y); wprintf(L"       ██    ██       "); y++;
	gotoxy(x, y); wprintf(L"            ██        "); y++;
	gotoxy(x, y); wprintf(L"           ██         "); y++;
	gotoxy(x, y); wprintf(L"          ██          "); y++;
	gotoxy(x, y); wprintf(L"          ██          "); y++;
	gotoxy(x, y); wprintf(L"          ██          "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;
}
void br8(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;
}
void br9(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"                      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"        ████████      "); y++;
	gotoxy(x, y); wprintf(L"              ██      "); y++;
	gotoxy(x, y); wprintf(L"       ██     ██      "); y++;
	gotoxy(x, y); wprintf(L"        ███████       "); y++;
	gotoxy(x, y); wprintf(L"                      "); y++;

}

void obrisiPolje(int x, int y)
{
	//changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	_setmode(_fileno(stdout), _O_TEXT);
	gotoxy(x, y); printf("                     "); y++;
	gotoxy(x, y); printf("                     "); y++;
	gotoxy(x, y); printf("                     "); y++;
	gotoxy(x, y); printf("                     "); y++;
	gotoxy(x, y); printf("                     "); y++;
	gotoxy(x, y); printf("                     "); y++;
	gotoxy(x, y); printf("                     "); y++;
	gotoxy(x, y); printf("                     "); y++;
	gotoxy(x, y); printf("                     "); y++;
}

void krstarica(int x, int y)
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	gotoxy(x, y); wprintf(L"                                     ■ ■  ( )                                          "); y++;
	gotoxy(x, y); wprintf(L"                                 ▄▄▄▄■▄■▄▄▄█▄▄                                         "); y++;
	gotoxy(x, y); wprintf(L"                              _  ▌▄▄▄▄▄▄▄▄▄▄▄▄▐  _                                     "); y++;
	gotoxy(x, y); wprintf(L"                       _=====▐ ▌ ▌            ▐ ▐ ▌==== _                              "); y++;
	gotoxy(x, y); wprintf(L"                 =====▐ ▌▄■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■■▄ ▐ ▌====                    "); y++;
	gotoxy(x, y); wprintf(L"  ▀█■■■■■■■■■■■■■■■■■■■■▀ ⦿  ⦿  ⦿  ⦿  ⦿  ⦿  ⦿  ⦿   ▀■■■■■■■■■■■■■■■■■■■█        "); y++;
	gotoxy(x, y); wprintf(L"    ▀███████████████████████████████████████████████████████████████████████████████▀  "); y++;
	gotoxy(x, y); wprintf(L"     ▀█████████████████████████████████████████████████████████████████████████████▀   "); y++;
	gotoxy(x, y); wprintf(L"  wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww "); y++;
	gotoxy(x, y); wprintf(L"wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww"); y++;
	gotoxy(x, y); wprintf(L"   wwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwwww  "); y++;
}

void razarac(int x, int y)
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	gotoxy(x, y); wprintf(L"                                    ▐▄▄                                        "); y++;
	gotoxy(x, y); wprintf(L"                                     |██                                       "); y++;
	gotoxy(x, y); wprintf(L"                                     ▄▄▄                                       "); y++;
	gotoxy(x, y); wprintf(L"                                     ▄▀▀█ [                                    "); y++;
	gotoxy(x, y); wprintf(L"                              ▄      █ |█▄                                     "); y++;
	gotoxy(x, y); wprintf(L"                            ▄██     ▄█|-++▀█                                   "); y++;
	gotoxy(x, y); wprintf(L"                      ▄▄▄█▀▀--█    █--|--|_ █-                                 "); y++;
	gotoxy(x, y); wprintf(L"                     █ /|__|  █  ▄▄█  |--- |█|▄▄                               "); y++;
	gotoxy(x, y); wprintf(L"                   ▄■█■■■■■■■■█■■■■■▄▄▄██■▄■■■▄▄■▄▄▄▄                 /\\       "); y++;
	gotoxy(x, y); wprintf(L"                ▄▄▄█`█' ||___-█]_| _[}-  |     |_[___█■■■■▄           \\/    ▄▄ "); y++;
	gotoxy(x, y); wprintf(L" __...▄▄▄▄▄■■■■█▄■▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀▀█■■▄▄▄▄▄▄▄▄▄▄▄▄▄████  "); y++;
	gotoxy(x, y); wprintf(L"▐████████████████████████████████████████████████████████████████████████████  "); y++;
	gotoxy(x, y); wprintf(L" ▀█████████████████████████████████████████████████████████████████████████▀   ");
}

void podmornica(int x, int y)
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	gotoxy(x, y); wprintf(L"                     ▄                                     "); y++;
	gotoxy(x, y); wprintf(L"                    █ █▄                                   "); y++;
	gotoxy(x, y); wprintf(L"                     ▀▄█                                   "); y++;
	gotoxy(x, y); wprintf(L"     _-   _-    _-  _-██    _-    _-  _-   _-    _-    _-  "); y++;
	gotoxy(x, y); wprintf(L"       _-    _-   -▄▄▄██▄▄▄   _-       _-    _-    _-      "); y++;
	gotoxy(x, y); wprintf(L"    _-   _-    _-  ▌▒▒▒▒▒▒▒▌       _-   _-    _-           "); y++;
	gotoxy(x, y); wprintf(L"      _-    _-    █_) (_)(_█▄▄      _-    _-       _-      "); y++;
	gotoxy(x, y); wprintf(L"              ▄▄▄██▒▒▒▒▒▒▒▒▒▒▒▀▀■▄      ________       _-  "); y++;
	gotoxy(x, y); wprintf(L"        ▄▄▄■■▀▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▀■■▄'       .'            "); y++;
	gotoxy(x, y); wprintf(L"    ▄■▀▀▒▒███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███▀■▄▄▄▄▀'        ~  ~  "); y++;
	gotoxy(x, y); wprintf(L" ▄██▒▒▒▒▒▒███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███▒▒▒▒▒▒▀■▄▄▄  //// ~  ~"); y++;
	gotoxy(x, y); wprintf(L" ▀███▒▒▒▒▒███▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███▒▒▒▒▒▒▒▒▌▌▌<▌▌▌~  ~   "); y++;
	gotoxy(x, y); wprintf(L"     ▀███████▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒▒███▒▒▒▒▒▒▒█▀▀▀  \\ ~  ~   "); y++;
	gotoxy(x, y); wprintf(L"          ▀█████████████████████████████■■▀▀.       ~  ~   "); y++;
	gotoxy(x, y); wprintf(L"                                    `._______`.            "); y++;

}

void nosacAviona(int x, int y)
{
	_setmode(_fileno(stdout), _O_U16TEXT);
	gotoxy(x, y); wprintf(L"                                                                                                                                                                                                "); y++;
	gotoxy(x, y); wprintf(L"                                                                                                                            ▄▄▄                                                                "); y++;
	gotoxy(x, y); wprintf(L"                                                                                                                     ▄■■▀▀▀▀▀█                                                                "); y++;
	gotoxy(x, y); wprintf(L"                                                                                                                ▄▄■■▀ _..,.  █                                                                "); y++;
	gotoxy(x, y); wprintf(L"                                                                                                          ▄▄▄▀▀▀      .==; '.█                                                                "); y++;
	gotoxy(x, y); wprintf(L"                                                                                                    ▄■■■▀▀               :   █▀▄                                                              "); y++;
	gotoxy(x, y); wprintf(L"                                                                                              ▄▄■■▀▀                      ;  █  ▀▄                                                            "); y++;
	gotoxy(x, y); wprintf(L"                                                                                        ▄▄▄▀▀▀                            :  █    ▀▄                                                          "); y++;
	gotoxy(x, y); wprintf(L"                                                                                  ▄▄■■▀▀                                   ; █      ▀▄                                                        "); y++;
	gotoxy(x, y); wprintf(L"                                                                            ▄■■■▀▀                     _.                  : █        ▀▄                                                      "); y++;
	gotoxy(x, y); wprintf(L"                                                                      ▄▄▄▀▀▀                     ▄■■■▀▀▀▀■■■▄              q █     ■■■■■▀▀                                                    "); y++;
	gotoxy(x, y); wprintf(L"                                                                ▄■■■▀▀                           █      _,. █                █_█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄                                             "); y++;
	gotoxy(x, y); wprintf(L"                                                          ▄▄▄▄▀▀                                 █ .--^   :_█                █______|     ==     ▄█'                                            "); y++;
	gotoxy(x, y); wprintf(L"                                                  █▄▄▄■■▀▀                                       █         ;█                ██I H| |_______'(|)█                                               "); y++;
	gotoxy(x, y); wprintf(L"                                              ▄   █ :                                            █     _   :█                ██_H|_|______[ '._█▀    _.---.______                               "); y++;
	gotoxy(x, y); wprintf(L"                                              █   █ ;          ,                                  █▄▄ [_]___█                ██▄▄▄▄▄▄▄▄▄▄▄▄▄▄ '_█     |   ;""         █                           "); y++;
	gotoxy(x, y); wprintf(L"                       ______.---._    ______ █  ██:           ;                                ▄█▀-^'██ '-.█▄     ___       ██ ██  █▀  █   |_[_█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█▄▄▄▄▄▄              ▄█    "); y++;
	gotoxy(x, y); wprintf(L"█                            :  | '|     _ --   █▄█▄█;           :   __nm__             _nm   ▄█▀______██____▀█▄__EEEE3      ██ ██▄▄█ m █▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█▀▀                 ▀▀█    "); y++;
	gotoxy(x, y); wprintf(L"█     ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█▄ ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄██▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄██▄▄▄▄▄▄▄▄▄▄▄▄▄██▄▄▄▄█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄█▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▀▀_█    "); y++;
	gotoxy(x, y); wprintf(L"██         ▀▀█   |   |  |   __ m ___.d88b.H m m ██ ████████████  H *    | .mmmmmmmmm ^ ^   |m[]H m      |   |_ | [][_] * *██ * ***█_█' 7 █ *  *   *   *   *  *  *  *  *  *     .V.    █▀         "); y++;
	gotoxy(x, y); wprintf(L"████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████▀"); y++;
	gotoxy(x, y); wprintf(L"███████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████▀     "); y++;
	gotoxy(x, y); wprintf(L"██████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████▀      "); y++;
	gotoxy(x, y); wprintf(L"▀████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████████▀       "); y++;
	gotoxy(x, y); wprintf(L"                                                                                                                                                                                                 ");
}

void changeConsole(SHORT width, SHORT height, int font, int fontx)
{
	CONSOLE_FONT_INFOEX cfi;
	char komanda[50] = "mode";
	char broj[10];
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = fontx;
	cfi.dwFontSize.Y = font;
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	wcscpy(cfi.FaceName, L"Consolas");
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);


	CONSOLE_SCREEN_BUFFER_INFOEX cinfo;
	cinfo.cbSize = sizeof(cinfo);
	GetConsoleScreenBufferInfoEx(GetStdHandle(STD_OUTPUT_HANDLE), &cinfo);
	cinfo.dwSize.X = width;
	cinfo.dwMaximumWindowSize.X = 1920;
	cinfo.dwMaximumWindowSize.Y = 1080;
	cinfo.srWindow.Bottom = height;
	cinfo.cbSize = sizeof(cinfo);
	SetConsoleScreenBufferInfoEx(GetStdHandle(STD_OUTPUT_HANDLE), &cinfo);
	cinfo.dwSize.X = width;
	cinfo.srWindow.Bottom = height;

}

void ispisiTablu()
{
	_setmode(_fileno(stdout), _O_WTEXT);
	SakrijKursor();
	mojaSema();
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	system("cls");
	changeConsole(UNOS_SIRINA_KONZOLE, UNOS_VISINA_KONZOLE, UNOS_FONT_Y, 0);

	int y = POCETAK_TABELE_Y;
	for (int i = 0; i < 11; i++)
	{
		gotoxy(POCETAK_TABELE_X, y);
		for (int j = 0; j < 251; j++)
			wprintf(L"█");
		y += 10;
	}

	y = POCETAK_TABELE_Y - 9;
	int x = POCETAK_TABELE_X + 21;

	for (int j = 0; j < 11; j++)
	{
		for (int i = 0; i < 10 * 11; i++)
		{
			gotoxy(x, y);
			wprintf(L"██");
			y++;
		}
		x += 23;
		y = POCETAK_TABELE_Y - 9;
	}


	slovoA(POCETAK_TABELE_X + 23, POCETAK_TABELE_Y - 9);
	slovoB(POCETAK_TABELE_X + 2 * 23, POCETAK_TABELE_Y - 9);
	slovoC(POCETAK_TABELE_X + 3 * 23, POCETAK_TABELE_Y - 9);
	slovoD(POCETAK_TABELE_X + 4 * 23, POCETAK_TABELE_Y - 9);
	slovoE(POCETAK_TABELE_X + 5 * 23, POCETAK_TABELE_Y - 9);
	slovoF(POCETAK_TABELE_X + 6 * 23, POCETAK_TABELE_Y - 9);
	slovoG(POCETAK_TABELE_X + 7 * 23, POCETAK_TABELE_Y - 9);
	slovoH(POCETAK_TABELE_X + 8 * 23, POCETAK_TABELE_Y - 9);
	slovoI(POCETAK_TABELE_X + 9 * 23, POCETAK_TABELE_Y - 9);
	slovoJ(POCETAK_TABELE_X + 10 * 23, POCETAK_TABELE_Y - 9);
	br0(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1);
	br1(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1 + 10);
	br2(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1 + 10 * 2);
	br3(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1 + 10 * 3);
	br4(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1 + 10 * 4);
	br5(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1 + 10 * 5);
	br6(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1 + 10 * 6);
	br7(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1 + 10 * 7);
	br8(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1 + 10 * 8);
	br9(POCETAK_TABELE_X - 1, POCETAK_TABELE_Y + 1 + 10 * 9);

	nosacAviona(NOSAC_X, NOSAC_Y);
	krstarica(KRSTARICA_X, KRSTARICA_Y);
	razarac(RAZARAC_X, RAZARAC_Y);
	podmornica(PODMORNICA_X, PODMORNICA_Y);

}

void changeFgBg(int fg, int bg)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (fg + (bg * 16)));
}

void mojaSema()
{
	CONSOLE_SCREEN_BUFFER_INFOEX cinfo;
	cinfo.cbSize = sizeof(cinfo);
	GetConsoleScreenBufferInfoEx(GetStdHandle(STD_OUTPUT_HANDLE), &cinfo);
	cinfo.ColorTable[14] = RGB(131, 255, 255);
	cinfo.ColorTable[10] = RGB(36, 119, 20);
	cinfo.ColorTable[1] = RGB(0, 255, 0);
	cinfo.ColorTable[0] = RGB(0, 0, 0);
	SetConsoleScreenBufferInfoEx(GetStdHandle(STD_OUTPUT_HANDLE), &cinfo);
}

void ispisiProsli(int sta)//sta je kod za koju sliku ili ispisati u proslom stanje pre selektovanja
{
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	switch (sta)
	{
		case 1:	nosacAviona(NOSAC_X, NOSAC_Y); break;
		case 2:	krstarica(KRSTARICA_X, KRSTARICA_Y); break;
		case 3: razarac(RAZARAC_X, RAZARAC_Y); break;
		case 4: podmornica(PODMORNICA_X, PODMORNICA_Y); break;
		case 8: shuffle(SHUFFLE_X, SHUFFLE_Y);
			//case 6: stikler(STIKLER_X, STIKLER_Y);
		default:break;
	}

}

void crvenoPolje(int x, int y)
{
	changeFgBg(ERROR_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
}

void SelektovanoPolje(int x, int y)
{
	changeFgBg(SELECT_TEXT_COLOR, 0);
	_setmode(_fileno(stdout), _O_WTEXT);

	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	gotoxy(x, y); wprintf(L"▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓▓"); y++;
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
}

void postavljenBrod(int x, int y)
{
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_TEXT_COLOR);
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
	gotoxy(x, y); wprintf(L"                     "); y++;
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
}

void talas3(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	//changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	gotoxy(x, y); wprintf(L"WWWWWWWWWWWWWWWWWWWWW"); y++;
	gotoxy(x, y); wprintf(L"WWWWWWWWWWWWWWWWWWWWW"); y++;
	gotoxy(x, y); wprintf(L"WWWWWWWWWWWWWWWWWWWWW"); y++;
	gotoxy(x, y); wprintf(L"WWWWWWWWWWWWWWWWWWWWW"); y++;
	gotoxy(x, y); wprintf(L"WWWWWWWWWWWWWWWWWWWWW"); y++;
	gotoxy(x, y); wprintf(L"WWWWWWWWWWWWWWWWWWWWW"); y++;
	gotoxy(x, y); wprintf(L"WWWWWWWWWWWWWWWWWWWWW"); y++;
	gotoxy(x, y); wprintf(L"WWWWWWWWWWWWWWWWWWWWW"); y++;
	gotoxy(x, y); wprintf(L"WWWWWWWWWWWWWWWWWWWWW"); y++;
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_TEXT_COLOR);
}

BOOL PostavkaBrodova(POLJE mat[][DIM], const char* ime)
{
	ispisiTablu();

	int trenutnaKolona = 0;
	int trenutnaVrsta = 0;
	int novaVrsta = 0;
	int novaKolona = 0;
	int x;
	int y;

	int brNosaca = 1;
	int brKrstarica = 2;
	int brRazaraca = 3;
	int brPodmornica = 4;

	int trenutniIzbor = 1; //izbor necega lol logicno, vrednosti: 1-nosac, 2-krstarica, 3-razarac, 4-podmornica,
						   //5-deleteMode, 6-potvrda o konacnoj postavic, 7-IzbrisiSve, 8-Shuffle lele smiljana(random stavlja brodove na tablu)

	int opsegPolja = 4; //jednostavno opseg polja koje brodic koji treba da se postavi zauzima

	int mod = 0;//0-vertikalni, 1-horizontalni

	char c;
	char modPoruka[10] = "MOD: ";
	COORD polja[4];
	BOOL praznoPolje = true;
	BOOL moze = false;

	for (int i = 0; i < DIM; i++)
		for (int j = 0; j < DIM; j++)
			mat[i][j].vidljivost = 0, mat[i][j].vrednost = 0;

	SakrijKursor();

	changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
	ispisiString(ime, IME_IGRACA_UNOS_X, IME_IGRACA_UNOS_Y);
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);

	updateBrojac(1, brNosaca);
	updateBrojac(2, brKrstarica);
	updateBrojac(3, brRazaraca);
	updateBrojac(4, brPodmornica);


	for (int i = 0; i < opsegPolja; i++)
	{
		polja[i].X = novaKolona;
		polja[i].Y = novaVrsta + i;
		x = uX(polja[i].X);
		y = uY(polja[i].Y);

		if (mat[polja[i].Y][polja[i].X].vidljivost)
			crvenoPolje(x, y);
		else
			SelektovanoPolje(x, y);
	}

	if (mod)
		modPoruka[4] = 'H';
	else
		modPoruka[4] = 'V';

	changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
	ispisiString(modPoruka, MOD_X, MOD_Y);
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	/*kanta*/
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	shuffle(SHUFFLE_X, SHUFFLE_Y);

	while (true)
	{
		if (trenutniIzbor > 5 && opsegPolja != 1)
		{
			for (int i = 0; i < opsegPolja; i++)
				ispisPolje(mat, polja[i].X, polja[i].Y);
			opsegPolja = 1;
		}

		if (trenutniIzbor == 5)
		{
			changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
			ispisiString("WARNING:DELETE MODE", MESSAGE_X, MESSAGE_Y);
			changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
		}
		else if (trenutniIzbor == 7)
		{
			changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
			ispisiString("WARNING:VOID MODE  ", MESSAGE_X, MESSAGE_Y);
			changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
		}
		else
			ispisiString("                   ", MESSAGE_X, MESSAGE_Y);

		moze = false;
		praznoPolje = true;
		Sleep(30);

		if (!brRazaraca && !brNosaca && !brKrstarica && !brPodmornica && trenutniIzbor != 6)
		{
			changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
			stikler(STIKLER_X, STIKLER_Y);
		}

		else if (trenutniIzbor != 6 || brRazaraca || brNosaca || brKrstarica || brPodmornica)
		{
			changeFgBg(DEFAULT_BACKGROUND_COLOR, DEFAULT_BACKGROUND_COLOR);
			stikler(STIKLER_X, STIKLER_Y);
			changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
		}

		if (_kbhit())
		{

			c = _getch();
			FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
			if ((c == 'g' || c == 'G') && !brRazaraca && !brNosaca && !brKrstarica && !brPodmornica)
			{
				changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
				ispisiProsli(trenutniIzbor);
				changeFgBg(SELECT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
				stikler(STIKLER_X, STIKLER_Y);
				trenutniIzbor = 6;
				continue;
			}

			if (c == 't' || c == 'T')
			{
				ispisiProsli(trenutniIzbor);
				trenutniIzbor = 7;
			}

			if (c == 'q' || c == 'Q')
			{
				ispisiProsli(trenutniIzbor);
				trenutniIzbor = 8;
				changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
				shuffle(SHUFFLE_X, SHUFFLE_Y);
			}

			novaKolona = trenutnaKolona;
			novaVrsta = trenutnaVrsta;

			if (c == 'w' || c == 'W')
				novaVrsta--;
			if (c == 's' || c == 'S')
				novaVrsta++;
			if (c == 'a' || c == 'A')
				novaKolona--;
			if (c == 'd' || c == 'D')
				novaKolona++;

			if (novaKolona >= 0 && novaKolona < 10 && novaVrsta < 10 && novaVrsta >= 0 && (novaKolona != trenutnaKolona || novaVrsta != trenutnaVrsta))
			{
				if (!mod)
				{
					if (novaVrsta + opsegPolja > 10)
						continue;

					if (novaVrsta > trenutnaVrsta)
						ispisPolje(mat, polja[0].X, polja[0].Y);
					else if (novaVrsta < trenutnaVrsta)
						ispisPolje(mat, polja[opsegPolja - 1].X, polja[opsegPolja - 1].Y);
					else
						for (int i = 0; i < opsegPolja; i++)
							ispisPolje(mat, polja[i].X, polja[i].Y);

					for (int i = 0; i < opsegPolja; i++)
					{
						polja[i].X = novaKolona;
						polja[i].Y = novaVrsta + i;
						x = uX(polja[i].X);
						y = uY(polja[i].Y);

						if (mat[polja[i].Y][polja[i].X].vidljivost)
							crvenoPolje(x, y);
						else
							SelektovanoPolje(x, y);
					}
					trenutnaKolona = novaKolona;
					trenutnaVrsta = novaVrsta;
				}
				else if (mod)
				{
					if (novaKolona + opsegPolja > 10)
						continue;

					if (novaKolona > trenutnaKolona)
						ispisPolje(mat, polja[0].X, polja[0].Y);
					else if (novaKolona < trenutnaKolona)
						ispisPolje(mat, polja[opsegPolja - 1].X, polja[opsegPolja - 1].Y);
					else
						for (int i = 0; i < opsegPolja; i++)
							ispisPolje(mat, polja[i].X, polja[i].Y);

					for (int i = 0; i < opsegPolja; i++)
					{
						polja[i].X = novaKolona + i;
						polja[i].Y = novaVrsta;
						if (mat[polja[i].Y][polja[i].X].vidljivost)
							crvenoPolje(uX(polja[i].X), uY(polja[i].Y));
						else
							SelektovanoPolje(uX(polja[i].X), uY(polja[i].Y));
					}
					trenutnaKolona = novaKolona;
					trenutnaVrsta = novaVrsta;
				}

			}

			if (c >= '1' && c <= '4' || c == 'e' || c == 'E')
			{
				if (c - 48 != trenutniIzbor)
					ispisiProsli(trenutniIzbor);


				for (int i = 0; i < opsegPolja; i++)
					ispisPolje(mat, polja[i].X, polja[i].Y);
				changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
				switch (c)
				{
					case '1':
					{
						nosacAviona(NOSAC_X, NOSAC_Y);
						trenutniIzbor = 1;
					}
					break;

					case '2':
					{
						krstarica(KRSTARICA_X, KRSTARICA_Y);
						trenutniIzbor = 2;
					}
					break;

					case '3':
					{
						razarac(RAZARAC_X, RAZARAC_Y);
						trenutniIzbor = 3;
					}
					break;

					case '4':
					{
						podmornica(PODMORNICA_X, PODMORNICA_Y);
						trenutniIzbor = 4;
					}
					break;

					case 'e': case 'E':
						trenutniIzbor = 5;
				}

				switch (trenutniIzbor)
				{
					case 1:opsegPolja = 4; break;
					case 2:opsegPolja = 3; break;
					case 3:opsegPolja = 2; break;
					case 4:opsegPolja = 1; break;
					case 5:opsegPolja = 1; break;
				}

				for (int i = 0; i < opsegPolja; i++)
				{
					novaKolona = 4;
					novaVrsta = 5;
					trenutnaKolona = 4;
					trenutnaVrsta = 5;
					if (!mod)
					{
						polja[i].X = novaKolona;
						polja[i].Y = novaVrsta + i;
					}
					else
					{
						polja[i].X = novaKolona + i;
						polja[i].Y = novaVrsta;
					}
					if (mat[polja[i].Y][polja[i].X].vidljivost)
						crvenoPolje(uX(polja[i].X), uY(polja[i].Y));
					else
						SelektovanoPolje(uX(polja[i].X), uY(polja[i].Y));
				}
			}
			if (c == 'r' || c == 'R')
			{
				mod = !mod;
				trenutnaKolona = 4;
				trenutnaVrsta = 5;
				novaKolona = 4;
				novaVrsta = 5;

				if (mod)
					modPoruka[4] = 'h';
				else
					modPoruka[4] = 'v';
				changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
				ispisiString(modPoruka, MOD_X, MOD_Y);
				changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);

				for (int i = 0; i < opsegPolja; i++)
					ispisPolje(mat, polja[i].X, polja[i].Y);

				for (int i = 0; i < opsegPolja; i++)
				{
					if (!mod)
					{
						polja[i].X = novaKolona;
						polja[i].Y = novaVrsta + i;
					}
					else
					{
						polja[i].X = novaKolona + i;
						polja[i].Y = novaVrsta;
					}
					if (mat[polja[i].Y][polja[i].X].vidljivost)
						crvenoPolje(uX(polja[i].X), uY(polja[i].Y));
					else
						SelektovanoPolje(uX(polja[i].X), uY(polja[i].Y));
				}
			}

			if (c == 13)
			{
				if (trenutniIzbor == 7)
				{
					for (int i = 0; i < 10; i++)
						for (int j = 0; j < 10; j++)
						{
							mat[i][j].vrednost = 0;
							mat[i][j].vidljivost = 0;
							ispisPolje(mat, j, i);
						}
					brNosaca = 1;
					brKrstarica = 2;
					brRazaraca = 3;
					brPodmornica = 4;
					updateBrojac(1, 1);
					updateBrojac(2, 2);
					updateBrojac(3, 3);
					updateBrojac(4, 4);
					continue;
				}

				if (trenutniIzbor == 8)
				{
					postaviRandom(mat);
					brNosaca = 0;
					brKrstarica = 0;
					brRazaraca = 0;
					brPodmornica = 0;
					updateBrojac(1, 0);
					updateBrojac(2, 0);
					updateBrojac(3, 0);
					updateBrojac(4, 0);
					trenutniIzbor = 8;
					continue;
				}

				if (trenutniIzbor != 5)
				{
					for (int i = 0; i < opsegPolja; i++)
					{
						if (mat[polja[i].Y][polja[i].X].vrednost == 1) //1 nalazi se brod
							praznoPolje = false;

						if (polja[i].Y && mat[polja[i].Y - 1][polja[i].X].vrednost == 1)
							praznoPolje = false;
						if (polja[i].Y && polja[i].X && mat[polja[i].Y - 1][polja[i].X - 1].vrednost == 1)
							praznoPolje = false;
						if (polja[i].X && mat[polja[i].Y][polja[i].X - 1].vrednost == 1)
							praznoPolje = false;
						if (polja[i].X && polja[i].Y < 10 && mat[polja[i].Y + 1][polja[i].X - 1].vrednost == 1)
							praznoPolje = false;
						if (polja[i].Y < 10 && mat[polja[i].Y + 1][polja[i].X].vrednost == 1)
							praznoPolje = false;
						if (polja[i].X < 10 && polja[i].Y < 10 && mat[polja[i].Y + 1][polja[i].X + 1].vrednost == 1)
							praznoPolje = false;
						if (polja[i].X < 10 && mat[polja[i].Y][polja[i].X + 1].vrednost == 1)
							praznoPolje = false;
						if (polja[i].X < 10 && polja[i].Y && mat[polja[i].Y - 1][polja[i].X + 1].vrednost == 1)
							praznoPolje = false;
					}
					if (!praznoPolje && trenutniIzbor != 6)
						continue;

					if (trenutniIzbor == 1 && !brNosaca)
						continue;
					else if (trenutniIzbor == 1)
					{
						brNosaca--;
						changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
						updateBrojac(trenutniIzbor, brNosaca);
						moze = true;
					}

					if (trenutniIzbor == 2 && !brKrstarica)
						continue;

					else if (trenutniIzbor == 2)
					{
						brKrstarica--;
						changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
						updateBrojac(trenutniIzbor, brKrstarica);
						moze = true;
					}

					if (trenutniIzbor == 3 && !brRazaraca)
						continue;

					else if (trenutniIzbor == 3)
					{
						brRazaraca--;
						changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
						updateBrojac(trenutniIzbor, brRazaraca);
						moze = true;
					}

					if (trenutniIzbor == 4 && !brPodmornica)
						continue;

					else if (trenutniIzbor == 4)
					{
						brPodmornica--;
						changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
						updateBrojac(trenutniIzbor, brPodmornica);
						moze = true;
					}

					if (trenutniIzbor == 6)
					{
						for (int i = 0; i < 10; i++)
							for (int j = 0; j < 10; j++)
								mat[i][j].vidljivost = 0;
						return true;
					}

					if (moze)
					{
						for (int i = 0; i < opsegPolja; i++)
						{
							mat[polja[i].Y][polja[i].X].vrednost = 1;
							mat[polja[i].Y][polja[i].X].vidljivost = 1;

							if (polja[i].Y && mat[polja[i].Y - 1][polja[i].X].vrednost != 1)
							{
								mat[polja[i].Y - 1][polja[i].X].vrednost = 0, mat[polja[i].Y - 1][polja[i].X].vidljivost = 1;
								ispisPolje(mat, polja[i].X, polja[i].Y - 1);
							}

							if (polja[i].Y && polja[i].X && mat[polja[i].Y - 1][polja[i].X - 1].vrednost != 1)
							{
								mat[polja[i].Y - 1][polja[i].X - 1].vrednost = 0, mat[polja[i].Y - 1][polja[i].X - 1].vidljivost = 1;
								ispisPolje(mat, polja[i].X - 1, polja[i].Y - 1);
							}

							if (polja[i].X && mat[polja[i].Y][polja[i].X - 1].vrednost != 1)
							{
								mat[polja[i].Y][polja[i].X - 1].vrednost = 0, mat[polja[i].Y][polja[i].X - 1].vidljivost = 1;
								ispisPolje(mat, polja[i].X - 1, polja[i].Y);
							}

							if (polja[i].X && polja[i].Y < 9 && mat[polja[i].Y + 1][polja[i].X - 1].vrednost != 1)
							{
								mat[polja[i].Y + 1][polja[i].X - 1].vrednost = 0, mat[polja[i].Y + 1][polja[i].X - 1].vidljivost = 1;
								ispisPolje(mat, polja[i].X - 1, polja[i].Y + 1);
							}

							if (polja[i].Y < 9 && mat[polja[i].Y + 1][polja[i].X].vrednost != 1)
							{
								mat[polja[i].Y + 1][polja[i].X].vrednost = 0, mat[polja[i].Y + 1][polja[i].X].vidljivost = 1;
								ispisPolje(mat, polja[i].X, polja[i].Y + 1);
							}

							if (polja[i].X < 9 && polja[i].Y < 9 && mat[polja[i].Y + 1][polja[i].X + 1].vrednost != 1)
							{
								mat[polja[i].Y + 1][polja[i].X + 1].vrednost = 0, mat[polja[i].Y + 1][polja[i].X + 1].vidljivost = 1;
								ispisPolje(mat, polja[i].X + 1, polja[i].Y + 1);
							}

							if (polja[i].X < 9 && mat[polja[i].Y][polja[i].X + 1].vrednost != 1)
							{
								mat[polja[i].Y][polja[i].X + 1].vrednost = 0, mat[polja[i].Y][polja[i].X + 1].vidljivost = 1;
								ispisPolje(mat, polja[i].X + 1, polja[i].Y);
							}

							if (polja[i].X < 9 && polja[i].Y && mat[polja[i].Y - 1][polja[i].X + 1].vrednost != 1)
							{
								mat[polja[i].Y - 1][polja[i].X + 1].vrednost = 0, mat[polja[i].Y - 1][polja[i].X + 1].vidljivost = 1;
								ispisPolje(mat, polja[i].X + 1, polja[i].Y - 1);
							}

							ispisPolje(mat, polja[i].X, polja[i].Y);
						}
					}
				}

				else
				{
					int brojac = 0;
					if (mat[trenutnaVrsta][trenutnaKolona].vrednost)
					{
						int i = trenutnaVrsta, j = trenutnaKolona;
						i++;
						while (mat[i][j].vrednost)
						{
							if (mat[i][j].vrednost)
							{
								mat[i][j].vrednost = 0;
								mat[i][j].vidljivost = 0;
								obrisiOkolo(mat, i, j);
								brojac++;
							}
							i++;
						}

						i = trenutnaVrsta, j = trenutnaKolona;
						i--;
						while (mat[i][j].vrednost)
						{
							if (mat[i][j].vrednost)
							{
								mat[i][j].vrednost = 0;
								mat[i][j].vidljivost = 0;
								obrisiOkolo(mat, i, j);
								brojac++;
							}
							i--;
						}

						i = trenutnaVrsta, j = trenutnaKolona;
						j++;
						while (mat[i][j].vrednost)
						{
							if (mat[i][j].vrednost)
							{
								mat[i][j].vrednost = 0;
								mat[i][j].vidljivost = 0;
								obrisiOkolo(mat, i, j);
								brojac++;
							}
							j++;
						}

						i = trenutnaVrsta, j = trenutnaKolona;
						j--;
						while (mat[i][j].vrednost)
						{
							if (mat[i][j].vrednost)
							{
								mat[i][j].vrednost = 0;
								mat[i][j].vidljivost = 0;
								obrisiOkolo(mat, i, j);
								brojac++;
							}
							j--;
						}

						mat[trenutnaVrsta][trenutnaKolona].vidljivost = 0;
						mat[trenutnaVrsta][trenutnaKolona].vrednost = 0;
						brojac++;
						obrisiOkolo(mat, trenutnaVrsta, trenutnaKolona);
						updateTabla(mat);
						changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
						switch (brojac)
						{
							case 1:brPodmornica++; updateBrojac(4, brPodmornica); break;
							case 2:brRazaraca++; updateBrojac(3, brRazaraca); break;
							case 3:brKrstarica++; updateBrojac(2, brKrstarica); break;
							case 4:brNosaca++; updateBrojac(1, brNosaca); break;
						}

					}
				}
			}

		}
	}

	return true;
}

void ispisPolje(POLJE mat[][DIM], int iK, int iV)
{
	if (mat[iV][iK].vidljivost)
		switch (mat[iV][iK].vrednost)// 0-prazno, 1-Nalazi se brod, 2-nalazi se unisten brod, 
		{
			case 0: talas3(uX(iK), uY(iV)); break;
			case 1: postavljenBrod(uX(iK), uY(iV)); break;
			case 2: crvenoPolje(uX(iK), uY(iV)); break;
			case 3: break;
		}
	else
	{
		changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
		obrisiPolje(uX(iK), uY(iV));
		changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	}
}

int meni()
{
	char c;
	while (_kbhit())
		c = _getch();
	SakrijKursor();
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	changeConsole(115, 75, 7, 0);
	system("cls");

	changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
	plej(PLAY_X, PLAY_Y);
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);

	PlejVsCpu(PLAY_VS_CPU_X, PLAY_VS_CPU_Y);
	settings(SETTINGS_X, SETTINGS_Y);
	exit(EXIT_X, EXIT_Y);

	int izbor = 1;

	while (1) {
		Sleep(1);
		if (_kbhit())
		{
			c = _getch();
			FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));

			if (c == 'w' || c == 'W')
			{
				changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
				ispisiIzbor(izbor);
				if (izbor == 1)
					izbor = 4;
				else izbor--;
				changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
				ispisiIzbor(izbor);

			}



			if (c == 's' || c == 'S')
			{
				changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
				ispisiIzbor(izbor);
				if (izbor == 4)
					izbor = 1;
				else izbor++;
				changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
				ispisiIzbor(izbor);

			}

			if (c == 13)
				return izbor;



		}
	}
	return 0;
}

void ispisiIzbor(int dugme) {
	switch (dugme)
	{
		case 1: plej(PLAY_X, PLAY_Y); break;
		case 2: PlejVsCpu(PLAY_VS_CPU_X, PLAY_VS_CPU_Y); break;
		case 3: settings(SETTINGS_X, SETTINGS_Y); break;
		case 4: exit(EXIT_X, EXIT_Y); break;



		default:
			break;
	}

}


void plej(int x, int y) {

	setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"     ─────────────────────────────────────────────       "); y++;
	gotoxy(x, y); wprintf(L"    │                                             │      "); y++;
	gotoxy(x, y); wprintf(L"    │        ██████  █          █    █     █      │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █     █ █         █ █    █   █       │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █     █ █        █   █    █ █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │        ██████  █       █     █    █         │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █       █       ███████    █         │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █       █       █     █    █         │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █       ███████ █     █    █         │      "); y++;
	gotoxy(x, y); wprintf(L"    │                                             │      "); y++;
	gotoxy(x, y); wprintf(L"     ─────────────────────────────────────────────       "); y++;
}
void settings(int x, int y) {
	setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"     ───────────────────────────────────────────────────────────────────────────       "); y++;
	gotoxy(x, y); wprintf(L"    │                                                                           │      "); y++;
	gotoxy(x, y); wprintf(L"    │         █████  ███████ ███████ ███████ ███ █     █  █████   █████         │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █     █ █          █       █     █  ██    █ █     █ █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █       █          █       █     █  █ █   █ █       █              │      "); y++;
	gotoxy(x, y); wprintf(L"    │         █████  █████      █       █     █  █  █  █ █  ████  █████         │      "); y++;
	gotoxy(x, y); wprintf(L"    │              █ █          █       █     █  █   █ █ █     █       █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █     █ █          █       █     █  █    ██ █     █ █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │         █████  ███████    █       █    ███ █     █  █████   █████         │      "); y++;
	gotoxy(x, y); wprintf(L"    │                                                                           │       "); y++;
	gotoxy(x, y); wprintf(L"     ───────────────────────────────────────────────────────────────────────────       "); y++;
}
void exit(int x, int y) {
	setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"     ───────────────────────────────────────       "); y++;
	gotoxy(x, y); wprintf(L"    │                                       │      "); y++;
	gotoxy(x, y); wprintf(L"    │       ███████ █     █ ███ ███████     │      "); y++;
	gotoxy(x, y); wprintf(L"    │       █        █   █   █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │       █         █ █    █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │       █████      █     █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │       █         █ █    █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │       █        █   █   █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │       ███████ █     █ ███    █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │                                       │      "); y++;
	gotoxy(x, y); wprintf(L"     ───────────────────────────────────────       "); y++;
}
void PlejVsCpu(int x, int y) {
	setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"     ─────────────────────────────────────────────────────────────────────────────────────────────       "); y++;
	gotoxy(x, y); wprintf(L"    │                                                                                             │      "); y++;
	gotoxy(x, y); wprintf(L"    │        ██████  █          █    █     █    █     █  █████      █████  ██████  █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █     █ █         █ █    █   █     █     █ █     █    █     █ █     █ █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █     █ █        █   █    █ █      █     █ █          █       █     █ █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │        ██████  █       █     █    █       █     █  █████     █       ██████  █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █       █       ███████    █        █   █        █    █       █       █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █       █       █     █    █         █ █   █     █    █     █ █       █     █        │      "); y++;
	gotoxy(x, y); wprintf(L"    │        █       ███████ █     █    █          █     █████      █████  █        █████         │      "); y++;
	gotoxy(x, y); wprintf(L"    │                                                                                             │      "); y++;
	gotoxy(x, y); wprintf(L"     ─────────────────────────────────────────────────────────────────────────────────────────────       "); y++;
}
void dvotacka(int x, int y) {
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"            "); y++;
	gotoxy(x, y); wprintf(L"    ▄█▄     "); y++;
	gotoxy(x, y); wprintf(L"    ▀█▀     "); y++;
	gotoxy(x, y); wprintf(L"            "); y++;
	gotoxy(x, y); wprintf(L"            "); y++;
	gotoxy(x, y); wprintf(L"            "); y++;
	gotoxy(x, y); wprintf(L"    ▄█▄     "); y++;
	gotoxy(x, y); wprintf(L"    ▀█▀     "); y++;
	gotoxy(x, y); wprintf(L"            "); y++;
}

void UnosImena(char* ime, int igrac) {

	char w;
	int i = 0, x = 0, y = 3;

	changeConsole(190, 75, 7, 0);
	system("cls");
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);

	slovoP(x, y); x += 14;
	slovoL(x, y); x += 13;
	slovoA(x, y); x += 15;
	slovoY(x, y); x += 14;
	slovoE(x, y); x += 14;
	slovoR(x, y); x += 14;
	if (igrac == 1)
	{
		br1(x, y);
		x += 14;
	}

	else
	{
		br2(x, y);
		x += 16;
	}

	dvotacka(x, y);
	y = 15;
	x = 15;
	while (1)
	{
		w = _getch();

		if ((isalpha(w) && i < 11) || w == 8 || w == 13)
		{
			w = toupper(w);
			switch (w)
			{
				case 'a': case 'A': slovoA(x, y); x += 15; break;
				case 'b': case 'B': slovoB(x, y); x += 15; break;
				case 'c': case 'C': slovoC(x, y); x += 15; break;
				case 'd': case 'D': slovoD(x, y); x += 15; break;
				case 'e': case 'E': slovoE(x, y); x += 15; break;
				case 'f': case 'F': slovoF(x, y); x += 15; break;
				case 'g': case 'G': slovoG(x, y); x += 15; break;
				case 'h': case 'H': slovoH(x, y); x += 15; break;
				case 'i': case 'I': slovoI(x, y); x += 15; break;
				case 'j': case 'J': slovoJ(x, y); x += 15; break;
				case 'k': case 'K': slovoK(x, y); x += 15; break;
				case 'l': case 'L': slovoL(x, y); x += 15; break;
				case 'm': case 'M': slovoM(x, y); x += 15; break;
				case 'n': case 'N': slovoN(x, y); x += 15; break;
				case 'o': case 'O': slovoO(x, y); x += 15; break;
				case 'p': case 'P': slovoP(x, y); x += 15; break;
				case 'q': case 'Q': slovoQ(x, y); x += 15; break;
				case 'r': case 'R': slovoR(x, y); x += 15; break;
				case 's': case 'S': slovoS(x, y); x += 15; break;
				case 't': case 'T': slovoT(x, y); x += 15; break;
				case 'u': case 'U': slovoU(x, y); x += 15; break;
				case 'v': case 'V': slovoV(x, y); x += 15; break;
				case 'w': case 'W': slovoW(x, y); x += 15; break;
				case 'x': case 'X': slovoX(x, y); x += 15; break;
				case 'y': case 'Y': slovoY(x, y); x += 15; break;
				case 'z': case 'Z': slovoZ(x, y); x += 15; break;
				case 8: if (i) { x -= 15; obrisiPolje(x, y); i--; }   break;
				case 13: ime[i] = '\0'; return;

				default:
					break;
			}

			if (isalpha(w))
			{
				ime[i] = w;
				i++;
			}
		}
	}
}

void update(POLJE mat[][DIM], COORD niz[], int n)
{
	BOOL ok = true;
	for (int i = 0; i < DIM; i++)
	{
		for (int j = 0; j < DIM; j++)
		{
			for (int k = 0; k < n; k++)
				if (i == niz[k].Y && j == niz[k].X)
					ok = false;
			if (ok)
				ispisPolje(mat, j, i);
		}
	}
}

void animeGif()
{
	changeConsole(600, 300, 2, 0);
	FlushConsoleInputBuffer(GetStdHandle(STD_OUTPUT_HANDLE));
	system("cls");
	while (!_kbhit())
	{
		changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
		PlaySound(TEXT("dancin.wav"), NULL, SND_NODEFAULT | SND_FILENAME | SND_ASYNC | SND_LOOP);
		for (int i = 0; i < 300; i++)
		{
			SakrijKursor();

			_setmode(_fileno(stdout), _O_TEXT);
			gotoxy(0, 0);
			wprintf(L"%s", frejmovi[i]);

			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			printf("%c[2K", 27);
			if (_kbhit())
			{
				changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
				break;
			}
			
			Sleep(delay);
		}
		PlaySound(NULL, NULL, SND_NODEFAULT | SND_ASYNC);
	}
	PlaySound(NULL, NULL, SND_NODEFAULT | SND_ASYNC);
}

wchar_t* ucitajFajl(const char imeFajla[])
{
	FILE* f = fopen(imeFajla, "r+,ccs=UTF-8");
	wchar_t* niz;
	niz = (wchar_t*)calloc(500 * 500, sizeof(wchar_t));

	fseek(f, 0, SEEK_END);
	size_t size = ftell(f);
	rewind(f);
	fread(niz, sizeof(wchar_t), size, f);
	fclose(f);

	return niz;
}

void updateBrojac(int vrstaAviona, int kolicina)
{
	changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
	switch (vrstaAviona)
	{
		case 1:
			maloX(BROJ_NOSAC_X, BROJ_NOSAC_Y - 5);
			switch (kolicina)
			{
				case 0:br0(BROJ_NOSAC_X + 6, BROJ_NOSAC_Y - 7); break;
				case 1:br1(BROJ_NOSAC_X + 6, BROJ_NOSAC_Y - 7); break;
				case 2:br2(BROJ_NOSAC_X + 6, BROJ_NOSAC_Y - 7); break;
				case 3:br3(BROJ_NOSAC_X + 6, BROJ_NOSAC_Y - 7); break;
				case 4:br4(BROJ_NOSAC_X + 6, BROJ_NOSAC_Y - 7); break;
			}break;//nosac
		case 2:
			maloX(BROJ_KRSTARICA_X, BROJ_KRSTARICA_Y - 5);
			switch (kolicina)
			{
				case 0:br0(BROJ_KRSTARICA_X + 6, BROJ_KRSTARICA_Y - 7); break;
				case 1:br1(BROJ_KRSTARICA_X + 6, BROJ_KRSTARICA_Y - 7); break;
				case 2:br2(BROJ_KRSTARICA_X + 6, BROJ_KRSTARICA_Y - 7); break;
				case 3:br3(BROJ_KRSTARICA_X + 6, BROJ_KRSTARICA_Y - 7); break;
				case 4:br4(BROJ_KRSTARICA_X + 6, BROJ_KRSTARICA_Y - 7); break;
			}break;
			//krstarica
		case 3:
			maloX(BROJ_RAZARAC_X, BROJ_RAZARAC_Y - 5);
			switch (kolicina)
			{
				case 0:br0(BROJ_RAZARAC_X + 6, BROJ_RAZARAC_Y - 7); break;
				case 1:br1(BROJ_RAZARAC_X + 6, BROJ_RAZARAC_Y - 7); break;
				case 2:br2(BROJ_RAZARAC_X + 6, BROJ_RAZARAC_Y - 7); break;
				case 3:br3(BROJ_RAZARAC_X + 6, BROJ_RAZARAC_Y - 7); break;
				case 4:br4(BROJ_RAZARAC_X + 6, BROJ_RAZARAC_Y - 7); break;
			}break;//razarac
		case 4:
			maloX(BROJ_PODMORNICA_X, BROJ_PODMORNICA_Y - 5);
			switch (kolicina)
			{
				case 0:br0(BROJ_PODMORNICA_X + 6, BROJ_PODMORNICA_Y - 7); break;
				case 1:br1(BROJ_PODMORNICA_X + 6, BROJ_PODMORNICA_Y - 7); break;
				case 2:br2(BROJ_PODMORNICA_X + 6, BROJ_PODMORNICA_Y - 7); break;
				case 3:br3(BROJ_PODMORNICA_X + 6, BROJ_PODMORNICA_Y - 7); break;
				case 4:br4(BROJ_PODMORNICA_X + 6, BROJ_PODMORNICA_Y - 7); break;
			}break;//podmornica
			break;
	}
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);

}

void obrisiOkolo(POLJE mat[][DIM], int v, int k)
{
	if (v && k && !mat[v - 1][k - 1].vrednost && mat[v - 1][k - 1].vidljivost)
		mat[v - 1][k - 1].vidljivost = 0;

	if (k && !mat[v][k - 1].vrednost && mat[v][k - 1].vidljivost)
		mat[v][k - 1].vidljivost = 0;

	if (v && !mat[v - 1][k].vrednost && mat[v - 1][k].vidljivost)
		mat[v - 1][k].vidljivost = 0;

	if (v < 9 && k && !mat[v + 1][k - 1].vrednost && mat[v + 1][k - 1].vidljivost)
		mat[v + 1][k - 1].vidljivost = 0;

	if (v < 9 && !mat[v + 1][k].vrednost && mat[v + 1][k].vidljivost)
		mat[v + 1][k].vidljivost = 0;

	if (v < 9 && k < 9 && !mat[v + 1][k + 1].vrednost && mat[v + 1][k + 1].vidljivost)
		mat[v + 1][k + 1].vidljivost = 0;

	if (k < 9 && !mat[v][k + 1].vrednost && mat[v][k + 1].vidljivost)
		mat[v][k + 1].vidljivost = 0;

	if (v && k < 9 && !mat[v - 1][k + 1].vrednost && mat[v - 1][k + 1].vidljivost)
		mat[v - 1][k + 1].vidljivost = 0;
}

void updateTabla(POLJE mat[][DIM])
{
	for (int v = 0; v < 10; v++)
	{
		for (int k = 0; k < 10; k++)
		{
			ispisPolje(mat, k, v);
			if (mat[v][k].vrednost)
			{
				if (v && k && !mat[v - 1][k - 1].vrednost)
				{
					mat[v - 1][k - 1].vidljivost = 1;
					ispisPolje(mat, k - 1, v - 1);
				}

				if (k && !mat[v][k - 1].vrednost)
				{
					mat[v][k - 1].vidljivost = 1;
					ispisPolje(mat, k - 1, v);
				}

				if (v && !mat[v - 1][k].vrednost)
				{
					mat[v - 1][k].vidljivost = 1;
					ispisPolje(mat, k, v - 1);
				}

				if (v < 9 && k && !mat[v + 1][k - 1].vrednost)
				{
					mat[v + 1][k - 1].vidljivost = 1;
					ispisPolje(mat, k - 1, v + 1);
				}

				if (v < 9 && !mat[v + 1][k].vrednost)
				{
					mat[v + 1][k].vidljivost = 1;
					ispisPolje(mat, k, v + 1);
				}

				if (v < 9 && k < 9 && !mat[v + 1][k + 1].vrednost)
				{
					mat[v + 1][k + 1].vidljivost = 1;
					ispisPolje(mat, k + 1, v + 1);
				}

				if (k < 9 && !mat[v][k + 1].vrednost)
				{
					mat[v][k + 1].vidljivost = 1;
					ispisPolje(mat, k + 1, v);
				}

				if (v && k < 9 && !mat[v - 1][k + 1].vrednost)
				{
					mat[v - 1][k + 1].vidljivost = 1;
					ispisPolje(mat, k + 1, v - 1);
				}
			}
		}
	}
}

void ispisiString(const char* string, int x, int y)
{
	int i = 0;
	//changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	while (string[i])
	{
		//changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
		switch (string[i])
		{
			case 'a': case 'A': slovoA(x, y); x += 15; break;
			case 'b': case 'B': slovoB(x, y); x += 15; break;
			case 'c': case 'C': slovoC(x, y); x += 15; break;
			case 'd': case 'D': slovoD(x, y); x += 15; break;
			case 'e': case 'E': slovoE(x, y); x += 15; break;
			case 'f': case 'F': slovoF(x, y); x += 15; break;
			case 'g': case 'G': slovoG(x, y); x += 15; break;
			case 'h': case 'H': slovoH(x, y); x += 15; break;
			case 'i': case 'I': slovoI(x, y); x += 15; break;
			case 'j': case 'J': slovoJ(x, y); x += 15; break;
			case 'k': case 'K': slovoK(x, y); x += 15; break;
			case 'l': case 'L': slovoL(x, y); x += 15; break;
			case 'm': case 'M': slovoM(x, y); x += 15; break;
			case 'n': case 'N': slovoN(x, y); x += 15; break;
			case 'o': case 'O': slovoO(x, y); x += 15; break;
			case 'p': case 'P': slovoP(x, y); x += 15; break;
			case 'q': case 'Q': slovoQ(x, y); x += 15; break;
			case 'r': case 'R': slovoR(x, y); x += 15; break;
			case 's': case 'S': slovoS(x, y); x += 15; break;
			case 't': case 'T': slovoT(x, y); x += 15; break;
			case 'u': case 'U': slovoU(x, y); x += 15; break;
			case 'v': case 'V': slovoV(x, y); x += 15; break;
			case 'w': case 'W': slovoW(x, y); x += 15; break;
			case 'x': case 'X': slovoX(x, y); x += 15; break;
			case 'y': case 'Y': slovoY(x, y); x += 15; break;
			case 'z': case 'Z': slovoZ(x, y); x += 15; break;
			case ' ':obrisiPolje(x, y); x += 15; break;
			case ':':dvotacka(x, y); x += 15; break;
			case '0':br0(x, y); x += 15; break;
			case '1':br1(x, y); x += 15; break;
			case '2':br2(x, y); x += 15; break;
			case '3':br3(x, y); x += 15; break;
			case '4':br4(x, y); x += 15; break;
			case '5':br5(x, y); x += 15; break;
			case '6':br6(x, y); x += 15; break;
			case '7':br7(x, y); x += 15; break;
			case '8':br8(x, y); x += 15; break;
			case '9':br9(x, y); x += 15; break;
		}
		i++;
	}
}

void stikler(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L"  _____________________________________________  "); y++;
	gotoxy(x, y); wprintf(L" │                                             │ "); y++;
	gotoxy(x, y); wprintf(L" │                                             │ "); y++;
	gotoxy(x, y); wprintf(L" │                                             │ "); y++;
	gotoxy(x, y); wprintf(L" │                                       ▄▄    │ "); y++;
	gotoxy(x, y); wprintf(L" │                                   ▄▄███▀    │ "); y++;
	gotoxy(x, y); wprintf(L" │                                 ▄█████▀     │ "); y++;
	gotoxy(x, y); wprintf(L" │                               ▄█████▀       │ "); y++;
	gotoxy(x, y); wprintf(L" │                             ▄█████▀         │ "); y++;
	gotoxy(x, y); wprintf(L" │                           ▄█████▀           │ "); y++;
	gotoxy(x, y); wprintf(L" │                         ▄█████▀             │ "); y++;
	gotoxy(x, y); wprintf(L" │                       ▄█████▀               │ "); y++;
	gotoxy(x, y); wprintf(L" │  ▄▄▄                ▄█████▀                 │ "); y++;
	gotoxy(x, y); wprintf(L" │  ▀████▄           ▄█████▀                   │ "); y++;
	gotoxy(x, y); wprintf(L" │    ▀████▄       ▄█████▀                     │ "); y++;
	gotoxy(x, y); wprintf(L" │      ▀████▄   ▄█████▀                       │ "); y++;
	gotoxy(x, y); wprintf(L" │        ▀████▄█████▀                         │ "); y++;
	gotoxy(x, y); wprintf(L" │          ▀██████▀                           │ "); y++;
	gotoxy(x, y); wprintf(L" │            ▀▀▀▀                             │ "); y++;
	gotoxy(x, y); wprintf(L" │                                             │ "); y++;
	gotoxy(x, y); wprintf(L" │_____________________________________________│ "); y++;

}

void tablaZaIgru(const char* ime1, const char* ime2)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	SakrijKursor();
	mojaSema();
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	system("cls");
	changeConsole(UNOS_SIRINA_KONZOLE + 20, UNOS_VISINA_KONZOLE + 37, UNOS_FONT_Y, 0);

	int y = POCETAK_IGRA_Y;
	for (int i = 0; i < 11; i++)
	{
		gotoxy(POCETAK_IGRA_X, y);
		for (int j = 0; j < 251; j++)
			wprintf(L"█");
		y += 10;
	}

	y = POCETAK_IGRA_Y - 9;
	int x = POCETAK_IGRA_X + 21;

	for (int j = 0; j < 11; j++)
	{
		for (int i = 0; i < 10 * 11; i++)
		{
			gotoxy(x, y);
			wprintf(L"██");
			y++;
		}
		x += 23;
		y = POCETAK_IGRA_Y - 9;
	}

	slovoA(POCETAK_IGRA_X + 23, POCETAK_IGRA_Y - 9);
	slovoB(POCETAK_IGRA_X + 2 * 23, POCETAK_IGRA_Y - 9);
	slovoC(POCETAK_IGRA_X + 3 * 23, POCETAK_IGRA_Y - 9);
	slovoD(POCETAK_IGRA_X + 4 * 23, POCETAK_IGRA_Y - 9);
	slovoE(POCETAK_IGRA_X + 5 * 23, POCETAK_IGRA_Y - 9);
	slovoF(POCETAK_IGRA_X + 6 * 23, POCETAK_IGRA_Y - 9);
	slovoG(POCETAK_IGRA_X + 7 * 23, POCETAK_IGRA_Y - 9);
	slovoH(POCETAK_IGRA_X + 8 * 23, POCETAK_IGRA_Y - 9);
	slovoI(POCETAK_IGRA_X + 9 * 23, POCETAK_IGRA_Y - 9);
	slovoJ(POCETAK_IGRA_X + 10 * 23, POCETAK_IGRA_Y - 9);
	br0(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1);
	br1(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1 + 10);
	br2(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1 + 10 * 2);
	br3(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1 + 10 * 3);
	br4(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1 + 10 * 4);
	br5(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1 + 10 * 5);
	br6(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1 + 10 * 6);
	br7(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1 + 10 * 7);
	br8(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1 + 10 * 8);
	br9(POCETAK_IGRA_X - 1, POCETAK_IGRA_Y + 1 + 10 * 9);

	ispisiString(ime1, IME1_X, IME1_Y);//MIRKO == ime1
	ispisiString(ime2, IME2_X, IME2_Y);//DRAGOLJUB == ime2
	ispisiString("UNISTENI BRODOVI", POCETAK_IGRA_X + 260, POCETAK_IGRA_Y);
	for (int i = 0; i < 245; i++)
	{
		gotoxy(POCETAK_IGRA_X + 260 + i, POCETAK_IGRA_Y + 10); wprintf(L"█");
	}

	ispisiString("NOSAC", STAT_NOSAC_X, STAT_NOSAC_Y);
	ispisiString("KRSTARICA", STAT_KRSTARICA_X, STAT_KRSTARICA_Y);
	ispisiString("RAZARAC", STAT_RAZARAC_X, STAT_RAZARAC_Y);
	ispisiString("PODMORNICA", STAT_PODMORNICA_X, STAT_PODMORNICA_Y);

	/*nosacAviona(NOSAC_X, NOSAC_Y);
	krstarica(KRSTARICA_X, KRSTARICA_Y);
	razarac(RAZARAC_X, RAZARAC_Y);
	podmornica(PODMORNICA_X, PODMORNICA_Y);*/

}

void postaviRandom(POLJE mat[][DIM])
{
	srand(time(0));
	int mod;
	int kolona;
	int vrsta;
	int brod;
	int opseg;
	int brNosaca = 1;
	int brKrstarica = 2;
	int brRazaraca = 3;
	int brPodmornica = 4;
	BOOL more = true;

	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
		{
			mat[i][j].vrednost = 0;
			mat[i][j].vidljivost = 0;
			ispisPolje(mat, j, i);
		}

	while (brNosaca || brPodmornica || brKrstarica || brRazaraca)
	{
		brod = rand() % 4 + 1;
		mod = rand() % 2;
		kolona = rand() % 10;
		vrsta = rand() % 10;
		more = true;
		if ((brod == 1 && !brNosaca) || (brod == 2 && !brKrstarica) || (brod == 3 && !brRazaraca) || (brod == 4 && !brPodmornica))
			continue;

		switch (brod)
		{
			case 1:opseg = 4; brNosaca--; break;
			case 2:opseg = 3; brKrstarica--; break;
			case 3:opseg = 2; brRazaraca--; break;
			case 4:opseg = 1; brPodmornica--; break;
		}

		if (mod)
		{
			if ((kolona + opseg) < 10)
			{
				for (int i = 0; i < opseg; i++)
					if (mat[vrsta][kolona + i].vidljivost)
						more = false;
			}
			else
				more = false;

			if (more)
			{
				for (int i = 0; i < opseg; i++)
				{
					mat[vrsta][kolona + i].vrednost = 1;
					mat[vrsta][kolona + i].vidljivost = 1;
					ispisPolje(mat, kolona + i, vrsta);
					if (vrsta && !mat[vrsta - 1][kolona + i].vidljivost)
					{
						mat[vrsta - 1][kolona + i].vidljivost = 1;
						ispisPolje(mat, kolona + i, vrsta - 1);
					}
					if (vrsta && kolona + i && !mat[vrsta - 1][kolona - 1 + i].vidljivost)
					{
						mat[vrsta - 1][kolona - 1 + i].vidljivost = 1;
						ispisPolje(mat, kolona + i - 1, vrsta - 1);
					}
					if (kolona + i && !mat[vrsta][kolona + i - 1].vidljivost)
					{
						mat[vrsta][kolona - 1 + i].vidljivost = 1;
						ispisPolje(mat, kolona + i - 1, vrsta);
					}
					if (kolona + i && vrsta < 10 && !mat[vrsta + 1][kolona + i - 1].vidljivost)
					{
						mat[vrsta + 1][kolona + i - 1].vidljivost = 1;
						ispisPolje(mat, kolona + i - 1, vrsta + 1);
					}
					if (vrsta < 10 && !mat[vrsta + 1][kolona + i].vidljivost)
					{
						mat[vrsta + 1][kolona + i].vidljivost = 1;
						ispisPolje(mat, kolona + i, vrsta + 1);
					}
					if ((vrsta < 10) && ((kolona + i) < 9) && !mat[vrsta + 1][kolona + 1 + i].vidljivost)
					{
						mat[vrsta + 1][kolona + 1 + i].vidljivost = 1;
						ispisPolje(mat, kolona + i + 1, vrsta + 1);
					}

					if (((kolona + i) < 9) && !mat[vrsta][kolona + i + 1].vidljivost)
					{
						mat[vrsta][kolona + i + 1].vidljivost = 1;
						ispisPolje(mat, kolona + i + 1, vrsta);
					}
					if (vrsta && kolona + i < 9 && !mat[vrsta - 1][kolona + i + 1].vidljivost)
					{
						mat[vrsta - 1][kolona + i + 1].vidljivost = 1;
						ispisPolje(mat, kolona + i + 1, vrsta - 1);
					}
					for (int i = 0; i < 10; i++)
					{
						changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
						obrisiPolje(uX(i), uY(10));
					}
				}
			}

			else
			{
				switch (brod)
				{
					case 1:brNosaca++; break;
					case 2:brKrstarica++; break;
					case 3:brRazaraca++; break;
					case 4:brPodmornica++; break;
				}
			}
		}

		else
		{
			if ((vrsta + opseg) < 10)
			{
				for (int i = 0; i < opseg; i++)
					if (mat[vrsta + i][kolona].vidljivost)
						more = false;
			}
			else
				more = false;

			if (more)
			{
				for (int i = 0; i < opseg; i++)
				{
					mat[vrsta + i][kolona].vrednost = 1;
					mat[vrsta + i][kolona].vidljivost = 1;
					ispisPolje(mat, kolona, vrsta + i);

					if (vrsta + i && !mat[vrsta - 1 + i][kolona].vidljivost)
					{
						mat[vrsta + i - 1][kolona].vidljivost = 1;
						ispisPolje(mat, kolona, vrsta + i - 1);
					}
					if (vrsta + i && kolona && !mat[vrsta + i - 1][kolona - 1].vidljivost)
					{
						mat[vrsta + i - 1][kolona - 1].vidljivost = 1;
						ispisPolje(mat, kolona - 1, vrsta + i - 1);
					}
					if (kolona && !mat[vrsta + i][kolona - 1].vidljivost)
					{
						mat[vrsta + i][kolona - 1].vidljivost = 1;
						ispisPolje(mat, kolona - 1, vrsta + i);
					}
					if (vrsta + i < 9 && kolona && !mat[vrsta + i + 1][kolona - 1].vidljivost)
					{
						mat[vrsta + i + 1][kolona - 1].vidljivost = 1;
						ispisPolje(mat, kolona - 1, vrsta + i + 1);
					}
					if (vrsta + 1 < 10 && !mat[vrsta + i + 1][kolona].vidljivost)
					{
						mat[vrsta + i + 1][kolona].vidljivost = 1;
						ispisPolje(mat, kolona, vrsta + i + 1);
					}
					if (vrsta + 1 < 10 && kolona < 9 && !mat[vrsta + 1 + i][kolona + 1].vidljivost)
					{
						mat[vrsta + 1 + i][kolona + 1].vidljivost = 1;
						ispisPolje(mat, kolona + 1, vrsta + i + 1);
					}
					if (kolona < 9 && !mat[vrsta + i][kolona + 1].vidljivost)
					{
						mat[vrsta + i][kolona + 1].vidljivost = 1;
						ispisPolje(mat, kolona + 1, vrsta + i);
					}
					if (vrsta + i && kolona < 9 && !mat[vrsta + i - 1][kolona + 1].vidljivost)
					{
						mat[vrsta + i - 1][kolona + 1].vidljivost = 1;
						ispisPolje(mat, kolona + 1, vrsta + i - 1);
					}
				}
			}

			else
			{
				switch (brod)
				{
					case 1:brNosaca++; break;
					case 2:brKrstarica++; break;
					case 3:brRazaraca++; break;
					case 4:brPodmornica++; break;
				}
			}
		}
	}
	//updateTabla(mat);
}

void shuffle(int x, int y)
{
	_setmode(_fileno(stdout), _O_WTEXT);
	gotoxy(x, y); wprintf(L" _____________________________________________ "); y++;
	gotoxy(x, y); wprintf(L"│                                             │"); y++;
	gotoxy(x, y); wprintf(L"│                                             │"); y++;
	gotoxy(x, y); wprintf(L"│                                             │"); y++;
	gotoxy(x, y); wprintf(L"│                                             │"); y++;
	gotoxy(x, y); wprintf(L"│                                       ▄     │"); y++;
	gotoxy(x, y); wprintf(L"│                                       ██▄   │"); y++;
	gotoxy(x, y); wprintf(L"│ ████████████▄              ▄██████████████■ │"); y++;
	gotoxy(x, y); wprintf(L"│          ▀████▄         ▄▄███▀▀       ██▀   │"); y++;
	gotoxy(x, y); wprintf(L"│            ▀████▄    ▄████▀           ▀     │"); y++;
	gotoxy(x, y); wprintf(L"│               ▀████▄████▀                   │"); y++;
	gotoxy(x, y); wprintf(L"│                 ███████                     │"); y++;
	gotoxy(x, y); wprintf(L"│               ▄████▀████▄                   │"); y++;
	gotoxy(x, y); wprintf(L"│            ▄████▀    ▀████▄          ▄      │"); y++;
	gotoxy(x, y); wprintf(L"│          ▄████▀         ▀▀███▄▄      ██▄    │"); y++;
	gotoxy(x, y); wprintf(L"│ ████████████▀              ▀█████████████■  │"); y++;
	gotoxy(x, y); wprintf(L"│                                      ██▀    │"); y++;
	gotoxy(x, y); wprintf(L"│                                      ▀      │"); y++;
	gotoxy(x, y); wprintf(L"│                                             │"); y++;
	gotoxy(x, y); wprintf(L"│                                             │"); y++;
	gotoxy(x, y); wprintf(L"│_____________________________________________│"); y++;


}

int cinIgre(POLJE tablaPrvog[][DIM], POLJE tablaDrugog[][DIM], const char* imePrvog, const char* imeDrugog)
{
	tablaZaIgru(imePrvog, imeDrugog);
	srand(time(0));

	int naPotezu = rand() % 2; // 0- prvi, 1-drugi igrac
	int trenutnaKolona = 4;
	int trenutnaVrsta = 4;
	int novaVrsta = trenutnaVrsta;
	int novaKolona = trenutnaKolona;
	int prviHp = 20;
	int drugiHp = 20;
	char c;

	int nosac1 = 0, nosac2 = 0;
	int krstarica1 = 0, krstarica2 = 0;
	int razarac1 = 0, razarac2 = 0;
	int podmornica1 = 0, podmornica2 = 0;

	BOOL nijePromasio = true;

	changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
	if (naPotezu)
	{
		ispisiString(imeDrugog, IME2_X, IME2_Y);
		changeFgBg(DEFAULT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
		ispisiString(imePrvog, IME1_X, IME1_Y);
	}
	else
	{
		ispisiString(imePrvog, IME1_X, IME1_Y);
		changeFgBg(DEFAULT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
		ispisiString(imeDrugog, IME2_X, IME2_Y);
	}
	//strelaGif(128);

	while (prviHp && drugiHp)
	{
		trenutnaKolona = 4;
		trenutnaVrsta = 4;
		nijePromasio = true;
		ispisiSat(prviHp, drugiHp, naPotezu);

		if (naPotezu)
		{
			stat_broj(STAT_NOSAC_X + 170, STAT_NOSAC_Y, nosac2);
			stat_broj(STAT_KRSTARICA_X + 170, STAT_KRSTARICA_Y, krstarica2);
			stat_broj(STAT_RAZARAC_X + 170, STAT_RAZARAC_Y, razarac2);
			stat_broj(STAT_PODMORNICA_X + 170, STAT_PODMORNICA_Y, podmornica2);
		}

		if (!naPotezu)
		{
			stat_broj(STAT_NOSAC_X + 170, STAT_NOSAC_Y, nosac1);
			stat_broj(STAT_KRSTARICA_X + 170, STAT_KRSTARICA_Y, krstarica1);
			stat_broj(STAT_RAZARAC_X + 170, STAT_RAZARAC_Y, razarac1);
			stat_broj(STAT_PODMORNICA_X + 170, STAT_PODMORNICA_Y, podmornica1);
		}

		if (!naPotezu)
		{

			changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
			if (naPotezu)
			{
				ispisiString(imePrvog, IME2_X, IME2_Y);
				changeFgBg(DEFAULT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
				ispisiString(imeDrugog, IME1_X, IME1_Y);
			}
			else
			{
				ispisiString(imePrvog, IME1_X, IME1_Y);
				changeFgBg(DEFAULT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
				ispisiString(imeDrugog, IME2_X, IME2_Y);
			}

			for (int i = 0; i < 10; i++)
				for (int j = 0; j < 10; j++)
					ispisPolje(tablaDrugog, j, i);

			while (nijePromasio && prviHp && drugiHp)
			{
				Sleep(30);
				novaKolona = trenutnaKolona;
				novaVrsta = trenutnaVrsta;
				if (_kbhit())
				{
					c = _getch();
					if (c == 'w' || c == 'W')
						novaVrsta--;
					if (c == 's' || c == 'S')
						novaVrsta++;
					if (c == 'a' || c == 'A')
						novaKolona--;
					if (c == 'd' || c == 'D')
						novaKolona++;

					if (novaKolona >= 0 && novaKolona < 10 && novaVrsta < 10 && novaVrsta >= 0 && (novaKolona != trenutnaKolona || novaVrsta != trenutnaVrsta))
					{
						ispisPolje(tablaDrugog, trenutnaKolona, trenutnaVrsta);
						trenutnaKolona = novaKolona;
						trenutnaVrsta = novaVrsta;
						SelektovanoPolje(uX(trenutnaKolona), uY(trenutnaVrsta));
					}

					if (c == 13)
					{
						tablaDrugog[trenutnaVrsta][trenutnaKolona].vidljivost = 1;
						if (tablaDrugog[trenutnaVrsta][trenutnaKolona].vrednost == 1)
						{
							tablaDrugog[trenutnaVrsta][trenutnaKolona].vrednost = 2;
							drugiHp--;
							BOOL nastavi = true;
							int i = 1;
							int brojac = 1;

							while (trenutnaVrsta - i >= 0 && tablaDrugog[trenutnaVrsta - i][trenutnaKolona].vrednost)
							{
								if (tablaDrugog[trenutnaVrsta - i][trenutnaKolona].vrednost == 2)
									brojac++;
								if (!tablaDrugog[trenutnaVrsta - i][trenutnaKolona].vrednost)
									break;
								if (tablaDrugog[trenutnaVrsta - i][trenutnaKolona].vrednost == 1)
								{
									nastavi = false;
									break;
								}
								i++;
							}

							if (nastavi)
							{
								int i = 1;
								while (trenutnaVrsta + i < 10 && tablaDrugog[trenutnaVrsta + i][trenutnaKolona].vrednost)
								{
									if (tablaDrugog[trenutnaVrsta + i][trenutnaKolona].vrednost == 2)
										brojac++;
									if (!tablaDrugog[trenutnaVrsta + i][trenutnaKolona].vrednost)
										break;
									if (tablaDrugog[trenutnaVrsta + i][trenutnaKolona].vrednost == 1)
									{
										nastavi = false;
										break;
									}
									i++;
								}
							}

							if (nastavi)
							{
								int i = 1;
								while (trenutnaKolona - i >= 0 && tablaDrugog[trenutnaVrsta][trenutnaKolona - i].vrednost)
								{
									if (tablaDrugog[trenutnaVrsta][trenutnaKolona - i].vrednost == 2)
										brojac++;
									if (!tablaDrugog[trenutnaVrsta][trenutnaKolona - i].vrednost)
										break;
									if (tablaDrugog[trenutnaVrsta][trenutnaKolona - i].vrednost == 1)
									{
										nastavi = false;
										break;
									}
									i++;
								}
							}

							if (nastavi)
							{
								int i = 1;
								while (trenutnaKolona + i < 10 && tablaDrugog[trenutnaVrsta][trenutnaKolona + i].vrednost)
								{
									if (tablaDrugog[trenutnaVrsta][trenutnaKolona + i].vrednost == 2)
										brojac++;
									if (!tablaDrugog[trenutnaVrsta][trenutnaKolona + i].vrednost)
										break;
									if (tablaDrugog[trenutnaVrsta][trenutnaKolona + i].vrednost == 1)
									{
										nastavi = false;
										break;
									}
									i++;
								}
							}

							if (nastavi)
							{
								switch (brojac)
								{
									case 1:podmornica1++; break;
									case 2:razarac1++; break;
									case 3:krstarica1++; break;
									case 4:nosac1++; break;
								}
								uradiNaporanPosao(tablaDrugog, trenutnaVrsta, trenutnaKolona);
								int i = 1;
								while (trenutnaVrsta - i >= 0 && tablaDrugog[trenutnaVrsta - i][trenutnaKolona].vrednost==2)
								{
									uradiNaporanPosao(tablaDrugog, trenutnaVrsta - i, trenutnaKolona);
									i++;
								}
								i = 1;
								while (trenutnaVrsta + i < 10 && tablaDrugog[trenutnaVrsta + i][trenutnaKolona].vrednost==2)
								{
									uradiNaporanPosao(tablaDrugog, trenutnaVrsta + i, trenutnaKolona);
									i++;
								}
								i = 1;
								while (trenutnaKolona - i >= 0 && tablaDrugog[trenutnaVrsta][trenutnaKolona - i].vrednost==2)
								{
									uradiNaporanPosao(tablaDrugog, trenutnaVrsta, trenutnaKolona - i);
									i++;
								}
								i = 1;
								while (trenutnaKolona + i < 10 && tablaDrugog[trenutnaVrsta][trenutnaKolona + i].vrednost==2)
								{
									uradiNaporanPosao(tablaDrugog, trenutnaVrsta, trenutnaKolona + i);
									i++;
								}
								stat_broj(STAT_NOSAC_X + 170, STAT_NOSAC_Y, nosac1);
								stat_broj(STAT_KRSTARICA_X + 170, STAT_KRSTARICA_Y, krstarica1);
								stat_broj(STAT_RAZARAC_X + 170, STAT_RAZARAC_Y, razarac1);
								stat_broj(STAT_PODMORNICA_X + 170, STAT_PODMORNICA_Y, podmornica1);
							}

						}
						else
						{
							nijePromasio = false;
							naPotezu = !naPotezu;
						}

						ispisPolje(tablaDrugog, trenutnaKolona, trenutnaVrsta);
					}
				}
			}
		}

		if (naPotezu)
		{
		
			changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
			if (naPotezu)
			{
				ispisiString(imeDrugog, IME2_X, IME2_Y);
				changeFgBg(DEFAULT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
				ispisiString(imePrvog, IME1_X, IME1_Y);
			}
			else
			{
				ispisiString(imePrvog, IME1_X, IME1_Y);
				changeFgBg(DEFAULT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
				ispisiString(imeDrugog, IME2_X, IME2_Y);
			}

			for (int i = 0; i < 10; i++)
				for (int j = 0; j < 10; j++)
					ispisPolje(tablaPrvog, j, i);
			while (nijePromasio && prviHp && drugiHp)
			{
				Sleep(30);
				novaKolona = trenutnaKolona;
				novaVrsta = trenutnaVrsta;
				if (_kbhit())
				{
					c = _getch();
					if (c == 'w' || c == 'W')
						novaVrsta--;
					if (c == 's' || c == 'S')
						novaVrsta++;
					if (c == 'a' || c == 'A')
						novaKolona--;
					if (c == 'd' || c == 'D')
						novaKolona++;

					if (novaKolona >= 0 && novaKolona < 10 && novaVrsta < 10 && novaVrsta >= 0 && (novaKolona != trenutnaKolona || novaVrsta != trenutnaVrsta))
					{
						ispisPolje(tablaPrvog, trenutnaKolona, trenutnaVrsta);
						trenutnaKolona = novaKolona;
						trenutnaVrsta = novaVrsta;
						SelektovanoPolje(uX(trenutnaKolona), uY(trenutnaVrsta));
					}

					if (c == 13)
					{
						tablaPrvog[trenutnaVrsta][trenutnaKolona].vidljivost = 1;
						if (tablaPrvog[trenutnaVrsta][trenutnaKolona].vrednost == 1)
						{
							tablaPrvog[trenutnaVrsta][trenutnaKolona].vrednost = 2;
							prviHp--;
							BOOL nastavi = true;
							int i = 1;
							int brojac = 1;

							while (trenutnaVrsta - i >= 0 && tablaPrvog[trenutnaVrsta - i][trenutnaKolona].vrednost)
							{
								if (tablaPrvog[trenutnaVrsta - i][trenutnaKolona].vrednost == 2)
									brojac++;
								if (!tablaPrvog[trenutnaVrsta - i][trenutnaKolona].vrednost)
									break;
								if (tablaPrvog[trenutnaVrsta - i][trenutnaKolona].vrednost == 1)
								{
									nastavi = false;
									break;
								}
								i++;
							}

							if (nastavi)
							{
								int i = 1;
								while (trenutnaVrsta + i < 10 && tablaPrvog[trenutnaVrsta + i][trenutnaKolona].vrednost)
								{
									if (tablaPrvog[trenutnaVrsta + i][trenutnaKolona].vrednost == 2)
										brojac++;
									if (!tablaPrvog[trenutnaVrsta + i][trenutnaKolona].vrednost)
										break;
									if (tablaPrvog[trenutnaVrsta + i][trenutnaKolona].vrednost == 1)
									{
										nastavi = false;
										break;
									}
									i++;
								}
							}

							if (nastavi)
							{
								int i = 1;
								while (trenutnaKolona - i >= 0 && tablaPrvog[trenutnaVrsta][trenutnaKolona - i].vrednost)
								{
									if (tablaPrvog[trenutnaVrsta][trenutnaKolona - i].vrednost == 2)
										brojac++;
									if (!tablaPrvog[trenutnaVrsta][trenutnaKolona - i].vrednost)
										break;
									if (tablaPrvog[trenutnaVrsta][trenutnaKolona - i].vrednost == 1)
									{
										nastavi = false;
										break;
									}
									i++;
								}
							}

							if (nastavi)
							{
								int i = 1;
								while (trenutnaKolona + i < 10 && tablaPrvog[trenutnaVrsta][trenutnaKolona + i].vrednost)
								{
									if (tablaPrvog[trenutnaVrsta][trenutnaKolona + i].vrednost == 2)
										brojac++;
									if (!tablaPrvog[trenutnaVrsta][trenutnaKolona + i].vrednost)
										break;
									if (tablaPrvog[trenutnaVrsta][trenutnaKolona + i].vrednost == 1)
									{
										nastavi = false;
										break;
									}
									i++;
								}
							}

							if (nastavi)
							{
								switch (brojac)
								{
									case 1:podmornica2++; break;
									case 2:razarac2++; break;
									case 3:krstarica2++; break;
									case 4:nosac2++; break;
								}

								uradiNaporanPosao(tablaPrvog, trenutnaVrsta, trenutnaKolona);

								int i = 1;
								while (trenutnaVrsta - i >= 0 && tablaPrvog[trenutnaVrsta - i][trenutnaKolona].vrednost == 2)
								{
									uradiNaporanPosao(tablaPrvog, trenutnaVrsta - i, trenutnaKolona);
									i++;
								}
								i = 1;
								while (trenutnaVrsta + i < 10 && tablaPrvog[trenutnaVrsta + i][trenutnaKolona].vrednost == 2)
								{
									uradiNaporanPosao(tablaPrvog, trenutnaVrsta + i, trenutnaKolona);
									i++;
								}
								i = 1;
								while (trenutnaKolona - i >= 0 && tablaPrvog[trenutnaVrsta][trenutnaKolona - i].vrednost == 2)
								{
									uradiNaporanPosao(tablaPrvog, trenutnaVrsta, trenutnaKolona - i);
									i++;
								}
								i = 1;
								while (trenutnaKolona + i < 10 && tablaPrvog[trenutnaVrsta][trenutnaKolona + i].vrednost == 2)
								{
									uradiNaporanPosao(tablaPrvog, trenutnaVrsta, trenutnaKolona + i);
									i++;
								}


								stat_broj(STAT_NOSAC_X + 170, STAT_NOSAC_Y, nosac2);
								stat_broj(STAT_KRSTARICA_X + 170, STAT_KRSTARICA_Y, krstarica2);
								stat_broj(STAT_RAZARAC_X + 170, STAT_RAZARAC_Y, razarac2);
								stat_broj(STAT_PODMORNICA_X + 170, STAT_PODMORNICA_Y, podmornica2);
							}
						}
						else
						{
							nijePromasio = false;
							naPotezu = !naPotezu;
						}

						ispisPolje(tablaPrvog, trenutnaKolona, trenutnaVrsta);
					}
				}
			}
		}

	}

	return 0;
}

void ispisiSat(int prviHp, int drugiHp, int naPotezu)
{
	int i;
	int j;
	char frameNum[10];
	char frame[100] = "strela\\frame";
	wchar_t* niz;

	_setmode(_fileno(stdout), _O_TEXT);

	changeFgBg(SELECT_TEXT_COLOR, SELECT_BACKGROUND_COLOR);
	if (naPotezu)
	{
		i = prviHp;
		j = drugiHp;
	}
	else
	{
		i = drugiHp;
		j = prviHp;
	}

	if (i <= j)
	{
		j *= 3;
		for (i *= 3; i <= j; i++)
		{
			if (!i)
				break;
			itoa(i, frameNum, 10);
			strcat(frame, frameNum);
			strcat(frame, ".txt");
			niz = ucitajFajl(frame);
			gotoxy(0, 128);
			wprintf(L"%s", niz);
			free(niz);
			strcpy(frame, "strela\\frame");
			Sleep(5);
		}
	}
	else
	{
		j *= 3;
		for (i *= 3; i >= j; i--)
		{
			if (!i)
				break;
			itoa(i, frameNum, 10);
			strcat(frame, frameNum);
			strcat(frame, ".txt");
			niz = ucitajFajl(frame);
			gotoxy(0, 128);
			wprintf(L"%s", niz);
			free(niz);
			strcpy(frame, "strela\\frame");
			Sleep(5);
			
		}
	}
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	_setmode(_fileno(stdout), _O_WTEXT);
}

void stat_broj(int x, int y, int value)
{
	changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
	switch (value)
	{
		case 0:br0(x, y); break;
		case 1:br1(x, y); break;
		case 2:br2(x, y); break;
		case 3:br3(x, y); break;
		case 4:br4(x, y); break;
	}
}

void uradiNaporanPosao(POLJE mat[][DIM], int trenutnaVrsta, int trenutnaKolona)
{
	if (trenutnaVrsta && !mat[trenutnaVrsta - 1][trenutnaKolona].vrednost)
	{
		mat[trenutnaVrsta - 1][trenutnaKolona].vidljivost = 1;
		ispisPolje(mat, trenutnaKolona, trenutnaVrsta - 1);
	}
	if (trenutnaVrsta && trenutnaKolona && !mat[trenutnaVrsta - 1][trenutnaKolona - 1].vrednost)
	{
		mat[trenutnaVrsta - 1][trenutnaKolona - 1].vidljivost = 1;
		ispisPolje(mat, trenutnaKolona - 1, trenutnaVrsta - 1);
	}
	if (trenutnaKolona && !mat[trenutnaVrsta][trenutnaKolona - 1].vrednost)
	{
		mat[trenutnaVrsta][trenutnaKolona - 1].vidljivost = 1;
		ispisPolje(mat, trenutnaKolona - 1, trenutnaVrsta);
	}
	if (trenutnaVrsta < 10 && trenutnaKolona && !mat[trenutnaVrsta + 1][trenutnaKolona - 1].vrednost)
	{
		mat[trenutnaVrsta + 1][trenutnaKolona - 1].vidljivost = 1;
		ispisPolje(mat, trenutnaKolona - 1, trenutnaVrsta + 1);
	}
	if (trenutnaVrsta + 1 < 10 && !mat[trenutnaVrsta + 1][trenutnaKolona].vrednost)
	{
		mat[trenutnaVrsta + 1][trenutnaKolona].vidljivost = 1;
		ispisPolje(mat, trenutnaKolona, trenutnaVrsta + 1);
	}
	if (trenutnaVrsta + 1 < 10 && trenutnaKolona < 9 && !mat[trenutnaVrsta + 1][trenutnaKolona + 1].vrednost)
	{
		mat[trenutnaVrsta + 1][trenutnaKolona + 1].vidljivost = 1;
		ispisPolje(mat, trenutnaKolona + 1, trenutnaVrsta + 1);
	}
	if (trenutnaKolona < 9 && !mat[trenutnaVrsta][trenutnaKolona + 1].vrednost)
	{
		mat[trenutnaVrsta][trenutnaKolona + 1].vidljivost = 1;
		ispisPolje(mat, trenutnaKolona + 1, trenutnaVrsta);
	}
	if (trenutnaVrsta && trenutnaKolona < 9 && !mat[trenutnaVrsta - 1][trenutnaKolona + 1].vrednost)
	{
		mat[trenutnaVrsta - 1][trenutnaKolona + 1].vidljivost = 1;
		ispisPolje(mat, trenutnaKolona + 1, trenutnaVrsta - 1);
	}
	for (int i = 0; i < 10; i++)
	{
		changeFgBg(DEFAULT_TEXT_COLOR, DEFAULT_BACKGROUND_COLOR);
		obrisiPolje(uX(i),uY(10));
	}
}

void exitAnim()
{
	int j = 70;
	_setmode(_fileno(stdout), _O_TEXT);
	for (int i=0; i < j; i++, j--)
	{
		gotoxy(0, i); printf("%c[2K", 27);
		gotoxy(0, j); printf("%c[2K", 27);
		Sleep(30);
	}
}

void settingsMeni()
{
	changeConsole(300, 50, 4, 0);
	system("cls");
	ispisiString("ANIM DELAY: ", 20, 20);
	char c;
	char string[10];
	itoa(delay, string, 10);
	ispisiString("           ", 200, 20);
	ispisiString(string, 200, 20);
	
	while (1)
	{
		Sleep(10);
		if (_kbhit)
		{
			c = _getch();
			FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
			if (c == 'w' || c == 'W')
			{
				delay++;
				ispisiString("           ", 200, 20);
				itoa(delay, string, 10);
				ispisiString(string, 200, 20);
			}
			if (delay && c == 's' || c == 'S')
			{
				delay--;
				itoa(delay, string, 10);
				ispisiString("           ", 200, 20);
				ispisiString(string, 200, 20);
			}

			if (c == 13)
				break;
		}
	}
}
