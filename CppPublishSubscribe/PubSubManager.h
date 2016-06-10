
#ifndef __PubSubLibC__PubSubManager__
#define __PubSubLibC__PubSubManager__

#include <set>
#include "PublishableData.h"
#include "Subscriber.h"
#include "Publisher.h"

namespace cps {
    
class PubSubManager {
    std::set<Subscriber*> subscribers;
public:
    void addSubscriber(Subscriber * subsciber);
    void broadcastData(PublishableData * data, Publisher * sender);
};

}

#endif /* defined(__PubSubLibC__PubSubManager__) */
