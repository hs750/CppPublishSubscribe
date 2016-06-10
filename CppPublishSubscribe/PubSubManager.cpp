
#include "PubSubManager.h"

using namespace cps;

void PubSubManager::addSubscriber(Subscriber * subsciber){
    subscribers.insert(subsciber);
}

void PubSubManager::broadcastData(PublishableData * data, Publisher * sender){
    for(auto sub : subscribers){
        bool send = true;
        if(Publisher * pubsub = dynamic_cast<Publisher*>(sub)){
            if(pubsub == sender){
                send = sender->allowPublishLoopback();
            }
        }
        
        if(send){
            sub->receive(data);
        }
    }
}