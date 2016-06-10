
#ifndef PublishableString_hpp
#define PublishableString_hpp

#include <string>
#include "../PublishableData.h"

class PublishableString : public cps::PublishableData {
    std::string data;
public:
    static const std::string type;
    PublishableString(const std::string & s);
    std::string typeName();
    const std::string dataString();
    const char * dataCString();
};

#endif /* PublishableString_hpp */
