#include <stddef.h>
#include "service.h"

void Service_Foo(Service service, const char* text)
{
    if (service.api != NULL)
    {
        service.api->foo(service.id, text);
    }
}

void Service_Bar(Service service, uint8_t op1, uint8_t op2)
{
    if (service.api != NULL)
    {
        service.api->bar(service.id, op1, op2);
    }
}

