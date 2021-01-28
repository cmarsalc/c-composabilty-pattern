#include "client_private.h"
#include "service_impl.h"

const sClientMap ClientMap[NUM_OF_CLIENTS] = {
    [CLIENT1] = {
        .serviceObj = {
            .id = SERVICE_IMPL_A,
            .api = &ServiceImplApi,
        },
    },
    [CLIENT2] = {
        .serviceObj = {
            .id = SERVICE_IMPL_B,
            .api = &ServiceImplApi,
        },
    },
};
