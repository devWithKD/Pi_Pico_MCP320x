#include <stdio.h>
#include <stdlib.h>
#include "pico/stdlib.h"
#include "hardware/spi.h"
#include "pico/binary_info.h"
#include "include/MCP320x.hpp"

#define MCP320x 8     // (Generally "#define MCP320X X", where X is the last model digit/number of inputs)

#define READ_BIT 0x80



int main(){

    // MCP320X mcp3208(MCP320x, CLOCK_PIN, MOSI_PIN, MISO_PIN, CS_PIN);
    // while(1){
    //     printf("MCP3208: ADC Values are:\n");
    //     for(int i = 0; i < 8; i ++){
    //         printf("Channel %d: %d\n", i,mcp3208.readADC(i));
    //     }
    //     sleep_ms(1000);
    // }
}