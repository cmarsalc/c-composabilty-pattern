#include "client_private.h"
#include "service_impl.h"
#include "service_impl_partial.h"

const sClientMap ClientMap[NUM_OF_CLIENTS] = {
    [CLIENT1] = {
        .service = {
            .id = SERVICE_IMPL_A,
            .api = &ServiceImplApi,
        },
    },
    [CLIENT2] = {
        .service = {
            .id = SERVICE_IMPL_B,
            .api = &ServiceImplApi,
        },
    },
    [CLIENT3] = {
    },
    [CLIENT4] = {
        .service = {
            .id = SERVICE_IMPL_PARTIAL_A,
            .api = &ServiceImplPartialApi,
        }
    }
};
