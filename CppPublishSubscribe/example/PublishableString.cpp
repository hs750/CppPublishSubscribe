
#include "PublishableString.hpp"

const std::string PublishableString::dataString(){
    return data;
}

const char * PublishableString::dataCString(){
    return data.c_str();
}

PublishableString::PublishableString(const std::string & s){
    data = s;
}

std::string PublishableString::typeName(){
    return type;
}

const std::string PublishableString::type = "PublishableString";