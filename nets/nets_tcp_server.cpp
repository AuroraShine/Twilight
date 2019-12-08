//
// Created by Gorgeous Bubble on 2019/12/8.
//

#include "nets_tcp_server.h"

int nets_tcp_server::initialize() {
    WORD version = MAKEWORD(2, 2);
    WSADATA wsd;
    int err = WSAStartup(version, &wsd);
    if (err != 0) {
        return err;
    }
    return err;
}

int nets_tcp_server::release() {
    int err = WSACleanup();
    if (err != 0) {
        return err;
    }
    return err;
}
