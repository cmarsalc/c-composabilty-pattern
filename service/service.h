#ifndef SERVICE_H_
#define SERVICE_H_

#include <stdint.h>

// Service interface
typedef struct {
    void (*foo)(uint8_t id, const char* text);
    void (*bar)(uint8_t id, uint8_t op1, uint8_t op2);
} iService;

// Service type
typedef struct {
    const uint8_t id;
    const iService* api;
} Service;

// Service API
void Service_Foo(Service service, const char* text);
void Service_Bar(Service service, uint8_t op1, uint8_t op2);

#endif
