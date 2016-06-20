//
//  ECNFactory.cpp
//  TestFactory
//
//  Created by chris folan on 18/06/2016.
//  Copyright © 2016 chris folan. All rights reserved.
//

#include <iostream>
#include "ECNFactory.hpp"
#include "ReutersECN.hpp"
#include "BloombergECN.hpp"

using namespace std;

Ecn* ECNFactory::getEcn(ecn_e ecn)
{
    Ecn* pEcn = NULL;
        
    switch(ecn)
    {
        case REUTERS:
                pEcn = new ReutersECN();
                break;
        case BLOOMBERG:
                pEcn = new BloombergECN();
                break;
/* 1111111111
        case EBS:
                pEcn = new EBSECN();
                break;
        case FXall:
                pEcn = new FXall();
                break;
1111111111 */
        default:
                pEcn = NULL;
                break;
    }
    return pEcn;
    }

