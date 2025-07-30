# pragma once

#include "ip4hdr.h"

struct TcpHdr {
    uint16_t sport;
    uint16_t dport;
    uint32_t seq;
    uint32_t ack;
    uint8_t off:4, res:4;
    uint8_t flags;
    uint16_t win;
    uint16_t csum;
    uint16_t urp;

    // flag
    enum: uint8_t {
        FIN = 0x01,
        SYN = 0x02,
        ACK = 0x10,
    };
};