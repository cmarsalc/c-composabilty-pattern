#ifndef SERVICE_IMPL_PARTIAL_H_
#define SERVICE_IMPL_PARTIAL_H_

#include "service.h"                    // implements
#include "service_impl_partial_map.h"   // expose instances

// In case you need to bind the API anywhere so it can be used as an interface
extern const iService ServiceImplPartialApi;

// Expose API in case the service implementation is to be used directly and not via the interface
void ServiceImplPartial_Foo(uint8_t id, const char* text);

#endif
