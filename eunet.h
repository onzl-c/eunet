#pragma once

#include <vector>
#include <iostream>
#include <cstdint>
#include <pcap.h>
#include <netinet/in.h>
#include <string>
#include <cstring>
#include <cstdio>
#include <sys/socket.h>
#include <sys/ioctl.h>
#include <net/if.h>
#include <unistd.h>

#include "ip.h"
#include "mac.h"
#include "buf.h"

using namespace std;