#include "udphdr.h"

Buf UdpHdr::parseData(UdpHdr* udpHdr) {
    Buf res;
    res.size_ = udpHdr->len() - sizeof(UdpHdr);
    if (res.size_ > 0)
        res.data_ = reinterpret_cast<const uint8_t*>(udpHdr) + sizeof(UdpHdr);
    else
        res.data_ = nullptr;
    return res;
}