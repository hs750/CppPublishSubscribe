
#include "PubSubImpl.hpp"
#include "PublishableString.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    PubSubImpl psi;
    PublishableString * s = new PublishableString("String Hello");
    psi.publish(s);
    
    
    return 0;
}
