#include "tcphdr.h"

Buf TcpHdr::parseData(IpHdr* ipHdr, TcpHdr* tcpHdr) {
    Buf res;
    res.size_ = ipHdr->tlen() - ipHdr->hlen() * 4 - tcpHdr->off() * 4;
    if (res.size_ > 0)
        res.data_ = tcpHdr + tcpHdr->off() * 4;
    else
        res.data_ = nullptr;
    return res;
}