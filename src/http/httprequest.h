#pragma once

#include <string>
#include <map>
#include <stdint.h>

extern "C"
{
#include "http_parser.h"
}

#include "tnet_http.h"

namespace tnet
{
    class HttpRequest
    {
    public:
        HttpRequest();
        ~HttpRequest();

        void clear();
        void parseUrl();
        std::string dump();

        std::string url;
        std::string body;

        std::string schema;
        
        std::string host;
        std::string path;
        std::string query;

        Headers_t headers;

        Params_t params;
        
        unsigned short majorVersion;
        unsigned short minorVersion;

        http_method method;

        uint16_t port;

        void parseQuery();
    };
        
}

