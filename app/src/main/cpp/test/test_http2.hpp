//
//  test_http2.hpp
//  test_http2
//
//  Created by zuoyu on 2020/5/21.
//  Copyright © 2020 zuoyu. All rights reserved.
//

#ifndef test_http2_hpp
#define test_http2_hpp

#include <stdio.h>
#include <arpa/inet.h>
#include <netdb.h>
#include <openssl/err.h>
#include <openssl/ssl.h>
#include <sys/socket.h>
#include <unistd.h>
#include <cstring>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void test_curl_http2();
int main();

#endif /* test_http2_hpp */
