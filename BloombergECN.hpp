//
//  BloombergECN.hpp
//  TestFactory
//
//  Created by chris folan on 18/06/2016.
//  Copyright © 2016 chris folan. All rights reserved.
//

#ifndef BloombergECN_hpp
#define BloombergECN_hpp

#include "ECN.hpp"

/*Derived class Reuters from Ecn */
class BloombergECN: public Ecn
{
public:
    BloombergECN();
    void connect();
    void parseMessage();
};

#endif /* BloombergECN_hpp */
