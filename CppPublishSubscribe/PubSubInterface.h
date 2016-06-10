
#ifndef __PubSubLibC__PubSubInterface__
#define __PubSubLibC__PubSubInterface__

#include <unordered_map>

#include "PubSubManager.h"
#include "PublishableData.h"
#include "Subscriber.h"
#include "Publisher.h"

namespace cps {
    
class PubSubInterface : public Subscriber, public Publisher{
    static std::unordered_map<std::string, PubSubManager*> pubSubManagers;
    
public:
    void subscribe(const std::string & datatype);
    void publish(PublishableData * data);
};

}
#endif /* defined(__PubSubLibC__PubSubInterface__) */
