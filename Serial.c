#include<stdio.h>
#include<string.h>
/* char data[] = {$GPVTG,0.00,T,,M,0.00,N,0.00,K,N*32 */
/* $GPGGA,152958.964,,,,,0,0,,,M,,M,,*41 */
/* $GPGLL,,,,,152958.964,V,N*73 */
/* $GPGSA,M,1,,,,,,,,,,,,,,,*12 */
/* $GPGSV,1,1,00*79 */
/* $GPRMC,152958.964,V,,,,,0.00,0.00,030412,,,N*40 */

char serial();

char serial(void){
  char c = 0xD;
  return c;
} 

int main(int argc, char *argv[]){
  
  return 0;
}
