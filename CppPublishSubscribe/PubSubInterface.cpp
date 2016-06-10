
#include "PubSubInterface.h"

using namespace cps;

// Initialse manager map
std::unordered_map<std::string, PubSubManager*> PubSubInterface::pubSubManagers;

void PubSubInterface::subscribe(const std::string & datatype){
        
    auto manit  = pubSubManagers.find(datatype);
    
    PubSubManager * man;
    if(manit == pubSubManagers.end()){
        man = new PubSubManager();
        pubSubManagers.insert({datatype, man});
    }else{
        man = (*manit).second;
    }
    man->addSubscriber(this);
    
}

void PubSubInterface::publish(cps::PublishableData * data){
    std::string type = data->typeName();
    auto manit  = pubSubManagers.find(type);

    if(manit != pubSubManagers.end()){
        PubSubManager * man = (*manit).second;
        man->broadcastData(data, this);
    }
    
}

PubSubInterface::PubSubInterface(bool allowLoopback){
    loopback = allowLoopback;
}

bool PubSubInterface::allowPublishLoopback(){
    return loopback;
}