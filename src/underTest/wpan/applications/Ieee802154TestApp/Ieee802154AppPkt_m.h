//
// Generated file, do not edit! Created by opp_msgc 4.3 from underTest/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt.msg.
//

#ifndef _IEEE802154APPPKT_M_H_
#define _IEEE802154APPPKT_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif

// cplusplus {{
using namespace std;
// }}



/**
 * Class generated from <tt>underTest/wpan/applications/Ieee802154TestApp/Ieee802154AppPkt.msg</tt> by opp_msgc.
 * <pre>
 * packet Ieee802154AppPkt 
 * {
 *     string sourceName; 	
 *     string destName;		
 *     simtime_t creationTime; 
 * }
 * </pre>
 */
class Ieee802154AppPkt : public ::cPacket
{
  protected:
    opp_string sourceName_var;
    opp_string destName_var;
    simtime_t creationTime_var;

  private:
    void copy(const Ieee802154AppPkt& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const Ieee802154AppPkt&);

  public:
    Ieee802154AppPkt(const char *name=NULL, int kind=0);
    Ieee802154AppPkt(const Ieee802154AppPkt& other);
    virtual ~Ieee802154AppPkt();
    Ieee802154AppPkt& operator=(const Ieee802154AppPkt& other);
    virtual Ieee802154AppPkt *dup() const {return new Ieee802154AppPkt(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual const char * getSourceName() const;
    virtual void setSourceName(const char * sourceName);
    virtual const char * getDestName() const;
    virtual void setDestName(const char * destName);
    virtual simtime_t getCreationTime() const;
    virtual void setCreationTime(simtime_t creationTime);
};

inline void doPacking(cCommBuffer *b, Ieee802154AppPkt& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, Ieee802154AppPkt& obj) {obj.parsimUnpack(b);}


#endif // _IEEE802154APPPKT_M_H_
