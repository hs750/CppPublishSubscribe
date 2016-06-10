
#ifndef Subscriber_h
#define Subscriber_h

#include <string>
#include "PublishableData.h" 

namespace cps {
    
class Subscriber {
public:
    virtual void subscribe (const std::string & datatype) = 0;
    virtual void receive (cps::PublishableData * data) = 0;
};
    
}
#endif /* Subscriber_h */
