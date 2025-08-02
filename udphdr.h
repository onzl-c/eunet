# pragma once

#include "ip4hdr.h"

#pragma pack(push, 1)
struct UdpHdr {
    uint16_t sport_;
    uint16_t dport_;
    uint16_t len_;
    uint16_t csum_;
};
#pragma pack(pop)