#include "Brodic/BRODIC.h"
#pragma warning(disable:4996)

int main()
{
	thread th1 (ucitajFrejmove);
	th1.detach();
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
			settingsMeni();
		if (opcija == 4)
		{
			exitAnim();
			break;
		}
	}
}