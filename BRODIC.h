#pragma once
#ifndef BRODIC_H_INCLUDED
#define BRODIC_H_INCLUDED

#include <thread>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <iostream>
#include <fstream>
#include <fcntl.h>
#include <io.h>
#include <time.h>
#include <ctype.h>
#pragma comment(lib, "winmm.lib")

#define POCETAK_TABELE_X 25
#define POCETAK_TABELE_Y 25
#define DISTANCA_X 21
#define DISTANCA_Y 9
#define DIM 11

#define NOSAC_X POCETAK_TABELE_X + 270
#define NOSAC_Y POCETAK_TABELE_Y

#define KRSTARICA_X  POCETAK_TABELE_X + 300
#define KRSTARICA_Y  POCETAK_TABELE_Y + 40

#define RAZARAC_X POCETAK_TABELE_X + 300
#define RAZARAC_Y POCETAK_TABELE_Y + 60

#define PODMORNICA_X POCETAK_TABELE_X + 310
#define PODMORNICA_Y POCETAK_TABELE_Y + 80

#define BROJ_NOSAC_X NOSAC_X + 200
#define BROJ_NOSAC_Y NOSAC_Y + 20

#define BROJ_KRSTARICA_X KRSTARICA_X + 100
#define BROJ_KRSTARICA_Y KRSTARICA_Y + 10

#define BROJ_RAZARAC_X RAZARAC_X + 100
#define BROJ_RAZARAC_Y RAZARAC_Y + 12

#define BROJ_PODMORNICA_X PODMORNICA_X + 60
#define BROJ_PODMORNICA_Y PODMORNICA_Y + 10

#define MESSAGE_X 125
#define MESSAGE_Y 140

#define STIKLER_X 500
#define STIKLER_Y 128

#define IME_IGRACA_UNOS_X 170
#define IME_IGRACA_UNOS_Y 3

#define IME1_X 30
#define IME1_Y 135

#define IME2_X 400
#define IME2_Y 135


//#define KANTA_X
//#define KANTA_Y

#define SHUFFLE_X 450
#define SHUFFLE_Y 128

#define MOD_X 10
#define MOD_Y 135

#define POCETAK_IGRA_X POCETAK_TABELE_X 
#define POCETAK_IGRA_Y POCETAK_TABELE_Y 

/**********************************
---KORDINATE-ZA-OPCIJA-NA-MENIJU---
**********************************/
#define PLAY_X 29
#define PLAY_Y 10
#define	SETTINGS_X 15
#define SETTINGS_Y 40
#define EXIT_X 32
#define EXIT_Y 55
#define PLAY_VS_CPU_X 7
#define PLAY_VS_CPU_Y 25
/**********************************
**********************************/
#define STAT_NOSAC_X POCETAK_IGRA_X + 260 + 30
#define STAT_NOSAC_Y POCETAK_IGRA_Y + 20

#define STAT_KRSTARICA_X POCETAK_IGRA_X + 260 + 30
#define STAT_KRSTARICA_Y STAT_NOSAC_Y + 15

#define STAT_RAZARAC_X POCETAK_IGRA_X + 260 + 30
#define STAT_RAZARAC_Y STAT_KRSTARICA_Y + 15

#define STAT_PODMORNICA_X POCETAK_IGRA_X + 260 + 30
#define STAT_PODMORNICA_Y STAT_RAZARAC_Y + 15

#define UNOS_SIRINA_KONZOLE 550
#define UNOS_VISINA_KONZOLE 150
#define UNOS_FONT_Y 4

#define DEFAULT_TEXT_COLOR 10
#define DEFAULT_BACKGROUND_COLOR 0

#define SELECT_TEXT_COLOR 1
#define SELECT_BACKGROUND_COLOR 0

#define ERROR_TEXT_COLOR 4

using namespace std;

struct POLJE
{
	int vrednost=0; // 0-prazno, 1-Nalazi se brod, 2-nalazi se unisten brod
	int vidljivost=0; //0-skriveno, 1-vidljivo
};

/*************************
------SLOVA-I-BROJEVI-----
**************************/

void slovoA(int x, int y);
void slovoB(int x, int y);
void slovoC(int x, int y);
void slovoD(int x, int y);
void slovoE(int x, int y);
void slovoF(int x, int y);
void slovoG(int x, int y);
void slovoH(int x, int y);
void slovoI(int x, int y);
void slovoJ(int x, int y);
void slovoK(int x, int y);
void slovoL(int x, int y);
void slovoM(int x, int y);
void slovoN(int x, int y);
void slovoO(int x, int y);
void slovoQ(int x, int y);
void slovoP(int x, int y);
void slovoR(int x, int y);
void slovoS(int x, int y);
void slovoT(int x, int y);
void slovoU(int x, int y);
void slovoV(int x, int y);
void slovoW(int x, int y);
void slovoX(int x, int y);
void slovoY(int x, int y);
void slovoZ(int x, int y);
void br0(int x, int y);
void br1(int x, int y);
void br2(int x, int y);
void br3(int x, int y);
void br4(int x, int y);
void br5(int x, int y);
void br6(int x, int y);
void br7(int x, int y);
void br8(int x, int y);
void br9(int x, int y);
void dvotacka(int x, int y);
void maloX(int x, int y);

/*************************
--------------------------
**************************/

/*******************************
---------DUGMAD-I-POLJA---------
*******************************/

void plej(int x, int y);
void settings(int x, int y);
void exit(int x, int y);
void PlejVsCpu(int x, int y);

void obrisiPolje(int x, int y);
void crvenoPolje(int x, int y);
void SelektovanoPolje(int x, int y);
void talas3(int x, int y);
void postavljenBrod(int x, int y);
void stikler(int x, int y);
void shuffle(int x, int y);

/*************************
--------------------------
**************************/

/****************************
------FUNKCIJE-ZA-ISPIS------
*****************************/

void ispisiIzbor(int dugme);
void exitAnim();
void ispisiProsli(int sta);
int meni();
void settingsMeni();
void krstarica(int x, int y);
void nosacAviona(int x, int y);
void podmornica(int x, int y);
void razarac(int x, int y);
void ispisPolje(POLJE mat[][DIM], int iV, int iK);//LELE
void ispisiTablu();
void tablaZaIgru(const char* ime1, const char* ime2);
void animeGif();
void updateBrojac(int vrstaAviona, int kolicina);
void updateTabla(POLJE mat[][DIM]);
void ispisiString(const char* string, int x, int y);
void stat_broj(int x, int y, int value);
void uradiNaporanPosao(POLJE mat[][DIM], int trenutnaVrsta, int trenutnaKolona);
void ispisiSat(int prviHp, int drugiHp, int naPotezu);

/*************************
--------------------------
**************************/

/******************************************
------FUNKCIJE-ZA-PODESAVANJE-KONZOLE------
*******************************************/

void SakrijKursor();
void gotoxy(int x, int y);
void changeConsole(SHORT width, SHORT height, int font, int fontx);
void changeFgBg(int fg, int bg);
void mojaSema();
wchar_t* ucitajFajl(const char imeFajla[]);

/*************************
--------------------------
**************************/

/************************************
----------OSTALE-FUNKCIJE------------
*************************************/

int uX(int broj); //daje x kordinate u tabeli u odnosu na parametar broj, parametar broj bi bila neka kolona (kolona 5 = neka kordinata x)
int uY(int broj); //daje y kordinate u tabeli u odnosu na parametar broj -||- umesto kolone vrsta
void UnosImena(char* ime, int igrac); //Ispisuje se meni za unos imena igraca odredjenog parametrom igrac i smesta ime u string ime
BOOL PostavkaBrodova(POLJE tabla[][DIM], const char* ime); //Prikazuje se interaktivno okruzenje za unos tj. postavku brodova
void update(POLJE mat[][DIM], COORD niz[], int n);
void obrisiOkolo(POLJE mat[][DIM], int v, int k);
void postaviRandom(POLJE mat[][DIM]);
int cinIgre(POLJE tablaPrvog[][DIM], POLJE tablaDrugog[][DIM], const char* imePrvog, const char* imeDrugog);
void exitAnim();//animacija za izlazak iz aplikacije
void ucitajFrejmove();//Ucitava sve frejmove gifa, i smesta ih u memoriju

/*************************
--------------------------
**************************/

#endif // BRODIC_H_INCLUDED
