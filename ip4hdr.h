# pragma once

#include "eunet.h"

struct ip4hdr {
    uint8_t hlen:4, v:4;
    uint8_t tos;
    uint16_t tlen;
    uint16_t id;
    uint16_t frag;
    uint8_t ttl;
    uint8_t p;
    uint16_t csum;
    uint32_t sip;
    uint32_t dip;

    // ip protocol types
    enum: uint8_t {
        TCP = 0x06,
        UDP = 0x11,
        ICMP = 0x01
    };
};