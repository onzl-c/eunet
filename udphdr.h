# pragma once

#include "ip4hdr.h"

struct udphdr {
    uint16_t sport;
    uint16_t dport;
    uint16_t len;
    uint16_t csum;
};