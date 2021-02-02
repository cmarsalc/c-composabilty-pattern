# c-composabilty-pattern
Simple demonstration of a C composability pattern

Client --uses--> iService <|--implements-- ServiceImpl

## Design decisions:
1. Program against a regular procedure call
2. Instance binding in client map
3. Delegation in `service.c` file

## Properties:
- Complexity hidden from clients (1)
- Enables both static vs dynamic binding (1)
- If dynamic binding is used it can be made as efficient as with client function pointers calls using (1, but static inline instead of 3)
- Eliminates 1 map file (2)
- Supported by mocking frameworks like FFF or CMock (3)

## Naming conventions (simplify):
- Header file to be called as abstraction name (i.e. `logger.h`)
- Abstraction class to use Uppercase with no prefix (i.e. `Logger`). This is an "opaque" type from the client POV.
- Abstraction instance argument name use lowercase with no prefix (i.e. `Logger_Log(Logger logger, const char* text);`)
