//
//  BloombergECN.cpp
//  TestFactory
//
//  Created by chris folan on 18/06/2016.
//  Copyright © 2016 chris folan. All rights reserved.
//

#include <iostream>
#include "BloombergECN.hpp"

using namespace std;

BloombergECN::BloombergECN()
{
    m_protocol = FIX;
}
    
void BloombergECN::connect()
{
       cout<<"Connecting to Bloomberg..." << endl;
}
    
void BloombergECN::parseMessage()
{
    cout<<"parsing Bloomberg using protocol: " << m_protocolData.getName(m_protocol) << endl;
}
