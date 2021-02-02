#include <stdio.h>
#include <assert.h>
#include "service_impl_partial.h"           // implements
#include "service_impl_partial_private.h"   // uses internal declarations 

const iService ServiceImplPartialApi = {
    .foo = ServiceImplPartial_Foo,
};

void ServiceImplPartial_Foo(uint8_t id, const char* text)
{
    assert(id < NUM_OF_SERVICE_IMPL_PARTIALS);
    printf("[%s] %s\n", ServiceImplPartialMap[id].name, text);
}

