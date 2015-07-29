#include "../client/undefine.h"
/**
 * Autogenerated by Thrift Compiler (0.9.2)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef Common_TYPES_H
#define Common_TYPES_H

#include <thrift/Thrift.h>
#include <thrift/TApplicationException.h>
#include <thrift/protocol/TProtocol.h>
#include <thrift/transport/TTransport.h>

#include <thrift/cxxfunctional.h>
#include "Errors_types.h"




struct ThriftProtocol {
  enum type {
    TCOMPACT = 0,
    TJSON = 1,
    TBINARY = 2
  };
};

extern const std::map<int, const char*> _ThriftProtocol_VALUES_TO_NAMES;

class Version;

typedef struct _Version__isset {
  _Version__isset() : major(true), minor(true), patch(true), comments(true) {}
  bool major;
  bool minor;
  bool patch;
  bool comments;
} _Version__isset;

class Version {
 public:

  static const char* ascii_fingerprint; // = "87B5B0F746D0EA717BE22BD97F02D9EA";
  static const uint8_t binary_fingerprint[16]; // = {0x87,0xB5,0xB0,0xF7,0x46,0xD0,0xEA,0x71,0x7B,0xE2,0x2B,0xD9,0x7F,0x02,0xD9,0xEA};

  Version(const Version&);
  Version& operator=(const Version&);
  Version() : major(1), minor(0), patch("a51b84fa"), comments("") {
  }

  virtual ~Version() throw();
  int32_t major;
  int32_t minor;
  std::string patch;
  std::string comments;

  _Version__isset __isset;

  void __set_major(const int32_t val);

  void __set_minor(const int32_t val);

  void __set_patch(const std::string& val);

  void __set_comments(const std::string& val);

  bool operator == (const Version & rhs) const
  {
    if (__isset.major != rhs.__isset.major)
      return false;
    else if (__isset.major && !(major == rhs.major))
      return false;
    if (__isset.minor != rhs.__isset.minor)
      return false;
    else if (__isset.minor && !(minor == rhs.minor))
      return false;
    if (__isset.patch != rhs.__isset.patch)
      return false;
    else if (__isset.patch && !(patch == rhs.patch))
      return false;
    if (__isset.comments != rhs.__isset.comments)
      return false;
    else if (__isset.comments && !(comments == rhs.comments))
      return false;
    return true;
  }
  bool operator != (const Version &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const Version & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

void swap(Version &a, Version &b);



#endif