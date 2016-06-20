//
//  ECNFactory.hpp
//  TestFactory
//
//  Created by chris folan on 18/06/2016.
//  Copyright © 2016 chris folan. All rights reserved.
//

#ifndef ECNFactory_hpp
#define ECNFactory_hpp

#include "ECN.hpp"

class ECNFactory
{
public:
    Ecn* getEcn(ecn_e ecn);
};


#endif /* ECNFactory_hpp */
