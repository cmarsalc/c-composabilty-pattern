#include <stdio.h>
#include <assert.h>
#include "service_impl.h"           // implements
#include "service_impl_private.h"   // uses internal declarations 

const iService ServiceImplApi = {
    .foo = ServiceImpl_Foo,
    .bar = ServiceImpl_Bar,
};

void ServiceImpl_Foo(uint8_t id, const char* text)
{
    assert(id < NUM_OF_SERVICE_IMPLS);
    printf("[%s] %s\n", ServiceImplMap[id].name, text);
}

void ServiceImpl_Bar(uint8_t id, uint8_t op1, uint8_t op2)
{
    assert(id < NUM_OF_SERVICE_IMPLS);
    printf("[%s] %d + %d = %d\n", ServiceImplMap[id].name, op1, op2, op1 + op2);
}
