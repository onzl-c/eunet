# pragma once

#include "eunet.h"

#pragma pack(push, 1)
struct Ip4Hdr {
    uint8_t hlen_:4, v_:4;
    uint8_t tos_;
    uint16_t tlen_;
    uint16_t id_;
    uint16_t frag_;
    uint8_t ttl_;
    uint8_t p_;
    uint16_t csum_;
    uint32_t sip_;
    uint32_t dip_;

    // ip protocol types
    enum: uint8_t {
        TCP = 0x06,
        UDP = 0x11,
        ICMP = 0x01
    };
};
#pragma pack(pop)