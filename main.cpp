// Copyright (C) 2017 GPL 3 and higher by Ingo Höft,  <Ingo@Hoeft-online.de>
// Redistribution only with this Copyright remark. Last modified: 2022-01-25

#include <arpa/inet.h>
#include <iostream>

#include "upnplib_gtest_tools_unix.hpp"

int main() {
    upnplib::CIfaddr4Container ifaddr4Container;

    if (!ifaddr4Container.add("lo")) {
        std::cout << "Error: ifaddr4Container.add()\n";
        return 1;
    }

    ifaddrs* ifaddr = ifaddr4Container.get_ifaddr(1);
    ifaddr = ifaddr4Container.get_ifaddr(1);
    std::cout << "DEBUG: on main: ifaddr = " << ifaddr << "\n";

    sockaddr_in* ifa_addr_in = (sockaddr_in*)ifaddr->ifa_addr;
    char addr4buf[INET_ADDRSTRLEN]{};
    inet_ntop(AF_INET, &ifa_addr_in->sin_addr.s_addr, addr4buf, sizeof(addr4buf));
    std::cout << addr4buf << "\n";

    if(std::string(addr4buf) != "127.0.0.1")
        return 1;

    return 0;
}
