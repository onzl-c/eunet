# pragma once

#include "eunet.h"

struct arphdr {
    uint16_t hrd;
    uint16_t pro;
    uint8_t hlen;
    uint8_t plen;
    uint16_t op;
    uint8_t smac[6];    
    uint32_t sip;
    uint8_t dmac[6];
    uint32_t dip;

    // network link protocol
    enum: uint16_t {
        ETHERNET = 1
    };

    // opcode
    enum: uint16_t {
        REQUEST = 1,
        REPLY = 2
    };
};