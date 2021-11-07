#include "../suomic.h"
#include <stdio.h>

kokonaisluku aloitus()
{
	kokonaisluku vuosi;
	tulosta_merkkijono("Syötä vuosi: ");
	vastaanota("%d", &vuosi);

	jos(vuosi jakojaannos 4 yhta_suuri_kuin 0)
	{
		jos(vuosi jakojaannos 100 yhta_suuri_kuin 0)
		{
			jos(vuosi % 400 yhta_suuri_kuin 0)
				tulosta("%d on karkausvuosi", vuosi);
			muuten
				tulosta("%d ei ole karkausvuosi", vuosi);
		}
		muuten
			tulosta("%d on karkausvuosi", vuosi);
	}
	muuten
		tulosta("%d ei ole karkausvuosi", vuosi);
	
	palauta 0;
}
