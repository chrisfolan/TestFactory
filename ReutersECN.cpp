//
//  ReutersECN.cpp
//  TestFactory
//
//  Created by chris folan on 18/06/2016.
//  Copyright © 2016 chris folan. All rights reserved.
//

#include <iostream>
#include "ReutersECN.hpp"

using namespace std;

ReutersECN::ReutersECN()
{
    m_protocol = XML;
}
    
void ReutersECN::connect()
{
       cout<<"Connecting to Reuters..." << endl;
}
    
void ReutersECN::parseMessage()
{
    cout<<"parsing Reuters using protocol: " << m_protocolData.getName(m_protocol) << endl;
}
