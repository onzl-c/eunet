# pragma once

#include "ip4hdr.h"

#pragma pack(push, 1)
struct TcpHdr {
    uint16_t sport_;
    uint16_t dport_;
    uint32_t seq_;
    uint32_t ack_;
    uint8_t off_:4, res_:4;
    uint8_t flags_;
    uint16_t win_;
    uint16_t csum_;
    uint16_t urp_;

    // flag
    enum: uint8_t {
        FIN = 0x01,
        SYN = 0x02,
        ACK = 0x10,
    };
};
#pragma pack(pop)