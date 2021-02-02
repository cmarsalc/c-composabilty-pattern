#include <stddef.h>
#include "service.h"

void Service_Foo(Service service, const char* text)
{
    // Checks for NULL api meaning it accepts NULL objects
    if (service.api != NULL)
    {
        service.api->foo(service.id, text);
    }
}

void Service_Bar(Service service, uint8_t op1, uint8_t op2)
{
    // Checks also for API callback, meaning it supports partial implementation
    // Partial implementation could be useful for given service classes with
    // some "optional" services (i.e. debugging, optional features...)
    if (service.api != NULL && service.api->bar != NULL)
    {
        service.api->bar(service.id, op1, op2);
    }
}

