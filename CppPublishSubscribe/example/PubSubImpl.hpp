
#ifndef PubSubImpl_hpp
#define PubSubImpl_hpp

#include <string>

#include "../PubSubInterface.h"
#include "../PublishableData.h"

class PubSubImpl : public cps::PubSubInterface {
    std::string instance;
public:
    PubSubImpl(std::string name);
    void receive (cps::PublishableData * data) override;
};

#endif /* PubSubImpl_hpp */
