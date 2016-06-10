
#include "PublishableString.hpp"
#include "PubSubImpl.hpp"

PubSubImpl::PubSubImpl(std::string name) : PubSubInterface(false){
    instance = name;
    subscribe(PublishableString::type);
}

void PubSubImpl::receive(cps::PublishableData * data) {
    PublishableString s("h");
    if(s.typeName() == data->typeName()){
        PublishableString * d = static_cast<PublishableString*>(data);
        printf("%s Received: %s\n", instance.c_str(), d->dataCString());
    }
}