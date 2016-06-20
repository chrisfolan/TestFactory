//
//  main.cpp
//  TestFactory
//
//  Created by chris folan on 18/06/2016.
//  Copyright © 2016 chris folan. All rights reserved.
//

#include <iostream>
#include "EcnFactory.hpp"

Protocol Ecn::m_protocolData;

void init(Protocol& protocol)
{
    protocol.add(XML, "XML");
    protocol.add(FIX, "FIX");
}

int main()
{
    init(Ecn::m_protocolData);
    
    // -- Create factory
    ECNFactory* pEcnFactory = new ECNFactory();
    
    // -- Factory instantiating an object of type REUTERS
    Ecn* pEcn = pEcnFactory->getEcn(REUTERS);
    
    if (pEcn)
    {
        pEcn->connect();
        pEcn->parseMessage();
    }

    // -- Factory instantiating an object of type BLOOMBERG
    Ecn* pEcn2 = pEcnFactory->getEcn(BLOOMBERG);
    
    if (pEcn2)
    {
        pEcn2->connect();
        pEcn2->parseMessage();
    }

    
}