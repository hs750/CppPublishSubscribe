
#ifndef Publisher_h
#define Publisher_h

#include "PublishableData.h"

namespace cps {
    
class Publisher {
public:
    virtual void publish (PublishableData * data) = 0;
    virtual bool allowPublishLoopback() = 0;
};
    
}
#endif /* Publisher_h */
