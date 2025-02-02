//
// Generated file, do not edit! Created by opp_msgc 4.3 from linklayer/ext/ExtFrame.msg.
//

#ifndef _EXTFRAME_M_H_
#define _EXTFRAME_M_H_

#include <omnetpp.h>

// opp_msgc version check
#define MSGC_VERSION 0x0403
#if (MSGC_VERSION!=OMNETPP_VERSION)
#    error Version mismatch! Probably this file was generated by an earlier version of opp_msgc: 'make clean' should help.
#endif



/**
 * Class generated from <tt>linklayer/ext/ExtFrame.msg</tt> by opp_msgc.
 * <pre>
 * message ExtFrame
 * {
 *     uint8 data[];
 * }
 * </pre>
 */
class ExtFrame : public ::cMessage
{
  protected:
    uint8 *data_var; // array ptr
    unsigned int data_arraysize;

  private:
    void copy(const ExtFrame& other);

  protected:
    // protected and unimplemented operator==(), to prevent accidental usage
    bool operator==(const ExtFrame&);

  public:
    ExtFrame(const char *name=NULL, int kind=0);
    ExtFrame(const ExtFrame& other);
    virtual ~ExtFrame();
    ExtFrame& operator=(const ExtFrame& other);
    virtual ExtFrame *dup() const {return new ExtFrame(*this);}
    virtual void parsimPack(cCommBuffer *b);
    virtual void parsimUnpack(cCommBuffer *b);

    // field getter/setter methods
    virtual void setDataArraySize(unsigned int size);
    virtual unsigned int getDataArraySize() const;
    virtual uint8 getData(unsigned int k) const;
    virtual void setData(unsigned int k, uint8 data);
};

inline void doPacking(cCommBuffer *b, ExtFrame& obj) {obj.parsimPack(b);}
inline void doUnpacking(cCommBuffer *b, ExtFrame& obj) {obj.parsimUnpack(b);}


#endif // _EXTFRAME_M_H_
