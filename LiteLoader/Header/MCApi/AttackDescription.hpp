// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#include <Global.h>
class AttackDescription {
public:
    virtual char const* getJsonName();
    virtual ~AttackDescription();
    virtual void deserializeData(struct DeserializeDataParams);
    virtual void serializeData(class Json::Value&);
};