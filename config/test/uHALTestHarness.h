
#ifndef UHAL_TEST_HARNESS_H
#define UHAL_TEST_HARNESS_H

#define TEST_HARNESS_UART_BUFFER_SIZE 100

#include <stdint.h>

static uint8_t uart_harness_to_test_buffer[TEST_HARNESS_UART_BUFFER_SIZE];

static uint16_t uart_harness_to_test_buffer_count;

static uint8_t uart_test_to_harness_buffer[TEST_HARNESS_UART_BUFFER_SIZE];

static uint16_t uart_test_to_harness_buffer_count;


void uHAL_Test_Harness_UART_Send(uint8_t byte);

uint8_t uHAL_Test_Harness_UART_Receive();

#endif