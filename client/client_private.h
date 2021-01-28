#ifndef CLIENT_PRIVATE_H_
#define CLIENT_PRIVATE_H_

#include "client_map.h"
#include "iservice.h"

typedef struct {
    oService serviceObj;
} sClientMap;

extern const sClientMap ClientMap[NUM_OF_CLIENTS];

#endif
