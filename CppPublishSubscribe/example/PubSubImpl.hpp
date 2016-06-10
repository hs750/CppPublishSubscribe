
#ifndef PubSubImpl_hpp
#define PubSubImpl_hpp

#include "../PubSubInterface.h"
#include "../PublishableData.h"

class PubSubImpl : public cps::PubSubInterface {
public:
    PubSubImpl();
    void receive (cps::PublishableData * data) override;
};

#endif /* PubSubImpl_hpp */
