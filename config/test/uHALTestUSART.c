#include "uHALTestCommon.h"

#ifdef uHAL_USECONFIG_TEST

#include <uHALUSART.h>

#include "uHALTestHarness.h"

uint8_t uHALusart_read_byte()
{

    // Wait for a byte.
    while(uart_harness_to_test_buffer_count <= 0);

    // This is not threadsafe at all. So... 
    // TODO: Fix this.
    return uart_harness_to_test_buffer[uart_harness_to_test_buffer_count--];

}

void uHALusart_write_byte(uint8_t byte)
{

    uart_test_to_harness_buffer[uart_test_to_harness_buffer_count++];
    
}

#endif