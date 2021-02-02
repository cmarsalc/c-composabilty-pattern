#ifndef SERVICE_IMPL_PARTIAL_PRIVATE_H_
#define SERVICE_IMPL_PARTIAL_PRIVATE_H_

#include "service_impl_partial_map.h"

typedef struct {
    const char* name;
} sServiceImplPartialMap;

extern const sServiceImplPartialMap ServiceImplPartialMap[NUM_OF_SERVICE_IMPL_PARTIALS];

#endif
