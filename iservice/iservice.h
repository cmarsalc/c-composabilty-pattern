#ifndef ISERVICE_H_
#define ISERVICE_H_

#include <stdint.h>

typedef struct {
    void (*foo)(uint8_t id, const char* text);
    void (*bar)(uint8_t id, uint8_t op1, uint8_t op2);
} iServiceApi;

typedef struct {
    const uint8_t id;
    const iServiceApi* api;
} oService;

static inline void Service_Foo(oService obj, const char* text)
{
    obj.api->foo(obj.id, text);
}

static inline void Service_Bar(oService obj, uint8_t op1, uint8_t op2)
{
    obj.api->bar(obj.id, op1, op2);
}

#endif
