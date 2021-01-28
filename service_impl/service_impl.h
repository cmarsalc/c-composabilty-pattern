#ifndef SERVICE_IMPL_H_
#define SERVICE_IMPL_H_

#include "iservice.h"           // implements
#include "service_impl_map.h"   // expose instances

// In case you need to bind the API anywhere so it can be used as an interface
extern const iServiceApi ServiceImplApi;

// Expose API in case the service implementation is to be used directly and not via the interface
void ServiceImpl_Foo(uint8_t id, const char* text);
void ServiceImpl_Bar(uint8_t id, uint8_t op1, uint8_t op2);

#endif
