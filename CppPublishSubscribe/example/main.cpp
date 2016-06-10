
#include "PubSubImpl.hpp"
#include "PublishableString.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    PubSubImpl psi("psi1");
    PublishableString * s = new PublishableString("String Hello");
    PubSubImpl psi2("psi2");
    psi.publish(s);
    
    
    return 0;
}
