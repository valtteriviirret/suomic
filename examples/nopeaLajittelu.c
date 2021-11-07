#include "../suomic.h"
#include <stdio.h>

arvoton vaihto(kokonaisluku osoitin a, kokonaisluku osoitin b)
{
	kokonaisluku temp sijoitusoperaattori osoitin a;
	osoitin a sijoitusoperaattori osoitin b;
	osoitin b sijoitusoperaattori temp;
}

kokonaisluku jako(kokonaisluku taulukkoni tyhja_taulukko, kokonaisluku matala, kokonaisluku korkea)
{
	kokonaisluku oikein sijoitusoperaattori taulukkoni[korkea];
	kokonaisluku i sijoitusoperaattori (matala - 1);
	
	silmukka(kokonaisluku j sijoitusoperaattori matala; j pienempi_kuin korkea; j lisaa_yksi)
	{
		jos(taulukkoni[j] <= oikein)
		{
			i lisaa_yksi;
			vaihto(viite taulukkoni[i], viite taulukkoni[j]);
		}
	}
	
	vaihto(viite taulukkoni[i yhteenlasku 1], viite taulukkoni[korkea]);
	palauta (i yhteenlasku 1);
}

arvoton nopealajittelu(kokonaisluku taulukkoni tyhja_taulukko, kokonaisluku matala, kokonaisluku korkea)
{
	jos(matala pienempi_kuin korkea)
	{
		kokonaisluku keskus sijoitusoperaattori jako(taulukkoni, matala, korkea);
		nopealajittelu(taulukkoni, matala, keskus vahennyslasku 1);
		nopealajittelu(taulukkoni, keskus yhteenlasku 1, korkea);
	}
}

arvoton tulostaTaulukko(kokonaisluku taulukkoni tyhja_taulukko, kokonaisluku koko)
{
	silmukka(kokonaisluku i sijoitusoperaattori 0; i pienempi_kuin koko; i lisaa_yksi)
		tulosta("%d ", taulukkoni[i]);
	tulosta_merkkijono("\n");
}

kokonaisluku aloitus()
{
	kokonaisluku data tyhja_taulukko sijoitusoperaattori { 2, 5, 8, 1, 4, 6};
	kokonaisluku koko sijoitusoperaattori taulukon_pituus(data);
	
	tulosta_merkkijono("Lajittelematon merkkijono:\n");
	tulostaTaulukko(data, koko);

	nopealajittelu(data, 0, koko vahennyslasku 1);
	tulosta_merkkijono("Lajiteltu merkkijono pienimmästä suurimpaan:\n");
	tulostaTaulukko(data, koko);
	palauta 0;
}
