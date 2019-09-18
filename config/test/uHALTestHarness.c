#include "uHALTestHarness.h"
#include <stdio.h>

static uint8_t uart_harness_to_test_buffer[TEST_HARNESS_UART_BUFFER_SIZE] = {0};

static uint16_t uart_harness_to_test_buffer_count = 0;

static uint8_t uart_test_to_harness_buffer[TEST_HARNESS_UART_BUFFER_SIZE] = {0};

static uint16_t uart_test_to_harness_buffer_count = 0;

void uHAL_Test_Harness_UART_Send(uint8_t byte)
{
    
    printf("%x sent to test via UART", byte);
    uart_harness_to_test_buffer[uart_harness_to_test_buffer_count++] = byte;
    
}

uint8_t uHAL_Test_Harness_UART_Receive()
{

    if(uart_test_to_harness_buffer_count > 0)
    {
        return uart_test_to_harness_buffer[uart_test_to_harness_buffer_count--];
    }

}