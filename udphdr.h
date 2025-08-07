# pragma once

#include "ip4hdr.h"

#pragma pack(push, 1)
struct UdpHdr {
    uint16_t sport_;
    uint16_t dport_;
    uint16_t len_;
    uint16_t csum_;

    uint16_t sport() { return ntohs(sport_); }
    uint16_t dport() { return ntohs(dport_); }
    uint16_t len() { return ntohs(len_); }
    uint16_t csum() { return ntohs(csum_); }

    static Buf parseData(UdpHdr* udpHdr);
};
#pragma pack(pop)