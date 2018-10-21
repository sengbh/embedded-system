#include<avr/io.h>
#include<util/crc16.h>
#include<stdint.h>
#include<avr/pgmspace.h>

uint16_t checkcrc(){
	uint16_t i, crc;
	uint8_t byte;
	for(i=0; crc=0; i<4096; i++){
		byte = pgm_read_byte(i);
		crc = _crc16_update(crc, byte);	
	}
	return crc;
}
int main(){
	uint16_t computed_crc;
	computed_crc = checkcrc();
	return 0;
}
