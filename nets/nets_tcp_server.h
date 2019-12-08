//
// Created by Gorgeous Bubble on 2019/12/8.
//

#ifndef TWILIGHT_NETS_TCP_SERVER_H
#define TWILIGHT_NETS_TCP_SERVER_H

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cerrno>
#include <cstring>

#include <WinSock2.h>

#pragma comment(lib, "Ws2_32.lib")

class nets_tcp_server {
private:

public:
    static int initialize();
    static int release();
};


#endif //TWILIGHT_NETS_TCP_SERVER_H
