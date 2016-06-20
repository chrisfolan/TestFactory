//
//  ReutersECN.hpp
//  TestFactory
//
//  Created by chris folan on 18/06/2016.
//  Copyright © 2016 chris folan. All rights reserved.
//

#ifndef ReutersECN_hpp
#define ReutersECN_hpp

#include "ECN.hpp"

/*Derived class Reuters from Ecn */
class ReutersECN: public Ecn
{
public:
    ReutersECN();
    void connect();
    void parseMessage();
};

#endif /* ReutersECN_hpp */
