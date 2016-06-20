//
//  ECN.hpp
//  TestFactory
//
//  Created by chris folan on 18/06/2016.
//  Copyright © 2016 chris folan. All rights reserved.
//

#ifndef ECN_h
#define ECN_h

#include <map>
#include <string>

using namespace std;

enum ecn_e{REUTERS, BLOOMBERG, EBS, FXall};
enum protocol_e{FIX, XML};

typedef std::map<protocol_e, std::string> ProtocolMap;

// -- Protocol details
struct Protocol
{
    ProtocolMap m_map;
    
    void add(protocol_e prot_e, const string name)
    {
        m_map[prot_e] = name;
        cout << prot_e << " -> " << name << endl;
    }
    
    string getName(protocol_e prot_e)   { return m_map[prot_e]; }
    
};


// -- Ecn interface
class Ecn
{
protected:
public:
    protocol_e          m_protocol;
    static Protocol     m_protocolData;
public:
    virtual void    connect() = 0;
    virtual void    parseMessage() = 0;
};



#endif /* ECN_h */
