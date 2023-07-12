#include <stdio.h>
#include <math.h>

struct oszilloskop{
	float periodendauer ;
	float frequenz;
	float amplitude;
	float spitze_spitze;
	float effektivwert;
};

int main(){

	struct oszilloskop wechselspannung = {
		.periodendauer = 20 ,
		.frequenz = ( ( 1/wechselspannung.periodendauer ) *1000 ) ,
		.amplitude = 325 ,
	    .spitze_spitze = 650 ,
		.effektivwert = ( wechselspannung.amplitude/ sqrt(2) )
	};

	printf( "Periodendauer in ms: %f\n", wechselspannung.periodendauer );
	printf( "Frequenz in Hz: %f\n", wechselspannung.frequenz );
	printf( "Amplituden Spannung in V: %f\n", wechselspannung.amplitude );
	printf( "Spitze-Spitze-Wert in V: %f\n", wechselspannung.spitze_spitze );
	printf( "Effektivwert der Spannung in V: %f\n", wechselspannung.effektivwert );

	return 0;
}
