#ifndef SERVICE_IMPL_PRIVATE_H_
#define SERVICE_IMPL_PRIVATE_H_

#include "service_impl_map.h"

typedef struct {
    const char* name;
} sServiceImplMap;

extern const sServiceImplMap ServiceImplMap[NUM_OF_SERVICE_IMPLS];

#endif
