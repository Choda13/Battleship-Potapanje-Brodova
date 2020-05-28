#include "BRODIC.h"
#pragma warning(disable:4996)
//opcije za boju teksta 0-totalno crno ili 13 ljubicasto
//opcija za boju selekta zelena 10
//int x = POCETAK_TABELE_X + 23 * (brk + 1);
//int y = POCETAK_TABELE_Y + 1 + 10 * brv;

int main()
{
	while (1)
	{
		POLJE PrviTabla[DIM][DIM];
		POLJE DrugiTabla[DIM][DIM];
		char ime1[20];
		char ime2[20];
		char pobednikPobeda[100] = "POBEDNIK JE ";
		int opcija;
		int pobednik;
		mojaSema();
		opcija = meni();

		if (opcija == 1)
		{
			UnosImena(ime1, 1);
			UnosImena(ime2, 2);
			PostavkaBrodova(PrviTabla, ime1);
			PostavkaBrodova(DrugiTabla, ime2);
			pobednik = cinIgre(PrviTabla, DrugiTabla, ime1, ime2);
			system("cls");
			if (!pobednik)
				strcat(pobednikPobeda, ime1);
			else
				strcat(pobednikPobeda, ime1);

			changeConsole(280, 50, 7, 0);
			ispisiString(pobednikPobeda, 10, 10);
			Sleep(2000);
			animeGif();
			FlushConsoleInputBuffer(GetStdHandle(STD_OUTPUT_HANDLE));
		}

		if (opcija == 2)
			animeGif();
		if (opcija == 3)
			settings();
		if (opcija == 4)
		{
			exitAnim();
			break;
		}
	}
}