/*
Program omogucuje pregledavanje i a�uriranje trenutno dostupnih guma na skladi�tu,
bez obzira jesu li nove ili rabljene, te prikazuje njihovu dostupnost ili rezerviranost.
Omogucuje unos, a�uriranje i pregled podataka o popravcima, monta�i, balansiranju i drugim uslugama te
tro�kovima pobolj�anja rada, kao �to su alati, dizalice, narud�be guma, slu�beni automobil i drugo.
Program takoder omogucuje zakazivanje termina te njihovo izmjenu i brisanje.
Generira izvje�taje o svim popravcima i monta�ama za svaki mjesec te izracunava dobit ili gubitak po mjesecu.


*/



#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>


#include "functions.h"
#include "sll_data_type.h"



int main(void) {



	int uvjet = 1;

	while (uvjet)
	{
		uvjet = izbornik();
	}

	printf("Zavrsetak programa!\n");


	return 0;

}

	



	//Vrijeme sada

	/*

	time_t my_time;
	struct tm* timeinfo;
	time(&my_time);
	timeinfo = localtime(&my_time);

	printf("year:%d\n", timeinfo->tm_year + 1900);
	printf("month:%d\n", timeinfo->tm_mon + 1);
	printf("date:%d\n", timeinfo->tm_mday);
	printf("hour:%d\n", timeinfo->tm_hour);
	printf("minutes:%d\n", timeinfo->tm_min);
	printf("seconds:%d\n", timeinfo->tm_sec);

	

	return 0;
}

*/