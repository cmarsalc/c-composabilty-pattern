#include "service_impl_private.h"
#include "service_impl_map.h"

const sServiceImplMap ServiceImplMap[NUM_OF_SERVICE_IMPLS] = {
    [SERVICE_IMPL_A] = {
        .name = "SERVICE INST A",
    },
    [SERVICE_IMPL_B] = {
        .name = "SERVICE INST B", 
    }
};
