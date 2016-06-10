
#include "PublishableString.hpp"
#include "PubSubImpl.hpp"

PubSubImpl::PubSubImpl(){
    subscribe(PublishableString::type);
}

void PubSubImpl::receive(cps::PublishableData * data) {
    PublishableString s("h");
    if(s.typeName() == data->typeName()){
        PublishableString * d = static_cast<PublishableString*>(data);
        printf("Received: %s\n", d->dataCString());
    }
}