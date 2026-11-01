
#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>

#define BUFFER_CAPACITY 64

// Structure for storing UART data
typedef struct {
    uint8_t data[BUFFER_CAPACITY];
    int writeIndex;
    int readIndex;
    int totalBytes;
} UART_Buffer;

// UART device containing transmit and receive buffers
typedef struct {
    UART_Buffer transmit;
    UART_Buffer receive;
} UART_Device;

// Initialize a buffer
void Buffer_Initialize(UART_Buffer *b)
{
    b->writeIndex = 0;
    b->readIndex = 0;
    b->totalBytes = 0;
}

// Check whether buffer is full
bool Buffer_Full(UART_Buffer *b)
{
    return b->totalBytes >= BUFFER_CAPACITY;
}

// Check whether buffer is empty
bool Buffer_Empty(UART_Buffer *b)
{
    return b->totalBytes == 0;
}

// Insert a byte into the buffer
bool Buffer_Insert(UART_Buffer *b, uint8_t value)
{
    if (Buffer_Full(b))
        return false;

    b->data[b->writeIndex] = value;
    b->writeIndex = (b->writeIndex + 1) % BUFFER_CAPACITY;
    b->totalBytes++;

    return true;
}

// Remove a byte from the buffer
bool Buffer_Remove(UART_Buffer *b, uint8_t *value)
{
    if (Buffer_Empty(b))
        return false;

    *value = b->data[b->readIndex];
    b->readIndex = (b->readIndex + 1) % BUFFER_CAPACITY;
    b->totalBytes--;

    return true;
}

// Initialize UART device
void UART_Initialize(UART_Device *device)
{
    Buffer_Initialize(&device->transmit);
    Buffer_Initialize(&device->receive);

    printf("UART Device Initialized Successfully.\n");
}

// Add data to transmit buffer
void UART_Transmit(UART_Device *device, uint8_t value)
{
    if (Buffer_Insert(&device->transmit, value))
        printf("Data added to TX: %c\n", value);
    else
        printf("Transmit Buffer Overflow!\n");
}

// Add incoming data to receive buffer
void UART_Receive(UART_Device *device, uint8_t value)
{
    if (Buffer_Insert(&device->receive, value))
        printf("Data received in RX: %c\n", value);
    else
        printf("Receive Buffer Overflow!\n");
}

// Process and display transmitted data
void UART_Transmit_Process(UART_Device *device)
{
    uint8_t value;

    while (Buffer_Remove(&device->transmit, &value))
    {
        printf("Successfully Transmitted: %c\n", value);
    }
}

// Read data from receive buffer
void UART_Receive_Process(UART_Device *device)
{
    uint8_t value;

    while (Buffer_Remove(&device->receive, &value))
    {
        printf("Received Data: %c\n", value);
    }
}

// Main function
int main()
{
    UART_Device device;

    UART_Initialize(&device);

    printf("\n--- UART TRANSMISSION ---\n");

    UART_Transmit(&device, 'H');
    UART_Transmit(&device, 'E');
    UART_Transmit(&device, 'L');
    UART_Transmit(&device, 'L');
    UART_Transmit(&device, 'O');

    UART_Transmit_Process(&device);

    printf("\n--- UART RECEPTION ---\n");

    UART_Receive(&device, 'O');
    UART_Receive(&device, 'K');

    UART_Receive_Process(&device);

    return 0;
}
