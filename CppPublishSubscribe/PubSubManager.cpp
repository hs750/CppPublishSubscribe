
#include "PubSubManager.h"

using namespace cps;

void PubSubManager::addSubscriber(Subscriber * subsciber){
    subscribers.insert(subsciber);
}

void PubSubManager::broadcastData(PublishableData * data){
    for(auto sub : subscribers){
        sub->receive(data);
    }
}