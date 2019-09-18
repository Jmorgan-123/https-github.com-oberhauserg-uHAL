#include <stdio.h>
#include <assert.h>

#include <uHAL.h>

int main()
{
    uHAL_Test_Harness_UART_Send(0);

    printf("lol %d \n", uHALusart_read_byte());



}