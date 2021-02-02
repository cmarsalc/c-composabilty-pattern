#include "client.h"             // implements
#include "client_private.h"     // uses

void Client_ExecuteServices(void)
{
    for (uint8_t i = 0; i < NUM_OF_CLIENTS; i++)
    {
        const sClientMap* map = &ClientMap[i];
        Service_Foo(map->service, "hello world!");
        Service_Bar(map->service, 1, 2);
    }
}
