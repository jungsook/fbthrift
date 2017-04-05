/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#pragma once

#include "thrift/compiler/test/fixtures/types/gen-cpp2/module_types.h"
#include <thrift/lib/cpp/TApplicationException.h>
#include <folly/io/IOBuf.h>
#include <folly/io/IOBufQueue.h>
#include <thrift/lib/cpp/transport/THeader.h>
#include <thrift/lib/cpp2/server/Cpp2ConnContext.h>
#include <thrift/lib/cpp2/GeneratedCodeHelper.h>

#include <thrift/lib/cpp2/protocol/BinaryProtocol.h>
#include <thrift/lib/cpp2/protocol/CompactProtocol.h>
namespace apache { namespace thrift { namespace fixtures { namespace types {

}}}} // apache::thrift::fixtures::types
namespace std {

} // std
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace fixtures { namespace types {

}}}} // apache::thrift::fixtures::types
namespace std {

} // std
namespace apache { namespace thrift { namespace fixtures { namespace types {

template <class Protocol_>
uint32_t decorated_struct::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "field") {
        fid = 1;
        ftype = apache::thrift::protocol::T_STRING;
      }
    }
    switch (fid) {
      case 1:
      {
        if (ftype == apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->field);
          this->__isset.field = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t decorated_struct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("decorated_struct");
  xfer += prot_->serializedFieldSize("field", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->field);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t decorated_struct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("decorated_struct");
  xfer += prot_->serializedFieldSize("field", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->serializedSizeString(this->field);
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t decorated_struct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("decorated_struct");
  xfer += prot_->writeFieldBegin("field", apache::thrift::protocol::T_STRING, 1);
  xfer += prot_->writeString(this->field);
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

}} // apache::thrift
namespace std {

} // std
namespace apache { namespace thrift { namespace fixtures { namespace types {

template <typename T_ContainerStruct_fieldA_struct_setter>
std::vector<int32_t>& ContainerStruct::set_fieldA(T_ContainerStruct_fieldA_struct_setter&& fieldA_) {
  fieldA = std::forward<T_ContainerStruct_fieldA_struct_setter>(fieldA_);
  __isset.fieldA = true;
  return fieldA;
}

template <typename T_ContainerStruct_fieldB_struct_setter>
std::list<int32_t>& ContainerStruct::set_fieldB(T_ContainerStruct_fieldB_struct_setter&& fieldB_) {
  fieldB = std::forward<T_ContainerStruct_fieldB_struct_setter>(fieldB_);
  __isset.fieldB = true;
  return fieldB;
}

template <typename T_ContainerStruct_fieldC_struct_setter>
std::deque<int32_t>& ContainerStruct::set_fieldC(T_ContainerStruct_fieldC_struct_setter&& fieldC_) {
  fieldC = std::forward<T_ContainerStruct_fieldC_struct_setter>(fieldC_);
  __isset.fieldC = true;
  return fieldC;
}

template <typename T_ContainerStruct_fieldD_struct_setter>
folly::fbvector<int32_t>& ContainerStruct::set_fieldD(T_ContainerStruct_fieldD_struct_setter&& fieldD_) {
  fieldD = std::forward<T_ContainerStruct_fieldD_struct_setter>(fieldD_);
  __isset.fieldD = true;
  return fieldD;
}

template <typename T_ContainerStruct_fieldE_struct_setter>
folly::small_vector<int32_t>& ContainerStruct::set_fieldE(T_ContainerStruct_fieldE_struct_setter&& fieldE_) {
  fieldE = std::forward<T_ContainerStruct_fieldE_struct_setter>(fieldE_);
  __isset.fieldE = true;
  return fieldE;
}

template <typename T_ContainerStruct_fieldF_struct_setter>
folly::sorted_vector_set<int32_t>& ContainerStruct::set_fieldF(T_ContainerStruct_fieldF_struct_setter&& fieldF_) {
  fieldF = std::forward<T_ContainerStruct_fieldF_struct_setter>(fieldF_);
  __isset.fieldF = true;
  return fieldF;
}

template <typename T_ContainerStruct_fieldG_struct_setter>
folly::sorted_vector_map<int32_t, std::string>& ContainerStruct::set_fieldG(T_ContainerStruct_fieldG_struct_setter&& fieldG_) {
  fieldG = std::forward<T_ContainerStruct_fieldG_struct_setter>(fieldG_);
  __isset.fieldG = true;
  return fieldG;
}

template <class Protocol_>
uint32_t ContainerStruct::read(Protocol_* iprot) {
  uint32_t xfer = 0;
  std::string fname;
  apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using apache::thrift::TProtocolException;


  while (true) {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == apache::thrift::protocol::T_STOP) {
      break;
    }
    if (fid == std::numeric_limits<int16_t>::min()) {
      if (fname == "fieldA") {
        fid = 12;
        ftype = apache::thrift::protocol::T_LIST;
      }
      else if (fname == "fieldB") {
        fid = 2;
        ftype = apache::thrift::protocol::T_LIST;
      }
      else if (fname == "fieldC") {
        fid = 3;
        ftype = apache::thrift::protocol::T_LIST;
      }
      else if (fname == "fieldD") {
        fid = 4;
        ftype = apache::thrift::protocol::T_LIST;
      }
      else if (fname == "fieldE") {
        fid = 5;
        ftype = apache::thrift::protocol::T_LIST;
      }
      else if (fname == "fieldF") {
        fid = 6;
        ftype = apache::thrift::protocol::T_SET;
      }
      else if (fname == "fieldG") {
        fid = 7;
        ftype = apache::thrift::protocol::T_MAP;
      }
    }
    switch (fid) {
      case 12:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->fieldA = std::vector<int32_t>();
          uint32_t _size_r;
          apache::thrift::protocol::TType _etype_r;
          xfer += iprot->readListBegin(_etype_r, _size_r);
          uint32_t _i_r;
          if (_size_r == std::numeric_limits<uint32_t>::max()) {
            for (_i_r = 0; iprot->peekList(); ++_i_r) {
              this->fieldA.resize(_i_r + 1);
              xfer += iprot->readI32(this->fieldA[_i_r]);
            }
          }
          else {
            this->fieldA.resize(_size_r);
            for (_i_r = 0; _i_r < _size_r; ++_i_r) {
              xfer += iprot->readI32(this->fieldA[_i_r]);
            }
          }
          xfer += iprot->readListEnd();
          this->__isset.fieldA = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 2:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->fieldB = std::list<int32_t>();
          uint32_t _size_r;
          apache::thrift::protocol::TType _etype_r;
          xfer += iprot->readListBegin(_etype_r, _size_r);
          uint32_t _i_r;
          if (_size_r == std::numeric_limits<uint32_t>::max()) {
            for (_i_r = 0; iprot->peekList(); ++_i_r) {
              int32_t _elem_r;
              xfer += iprot->readI32(_elem_r);
              this->fieldB.push_back(std::move(_elem_r));
            }
          }
          else {
            for (_i_r = 0; _i_r < _size_r; ++_i_r) {
              int32_t _elem_r;
              xfer += iprot->readI32(_elem_r);
              this->fieldB.push_back(std::move(_elem_r));
            }
          }
          xfer += iprot->readListEnd();
          this->__isset.fieldB = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 3:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->fieldC = std::deque<int32_t>();
          uint32_t _size_r;
          apache::thrift::protocol::TType _etype_r;
          xfer += iprot->readListBegin(_etype_r, _size_r);
          uint32_t _i_r;
          if (_size_r == std::numeric_limits<uint32_t>::max()) {
            for (_i_r = 0; iprot->peekList(); ++_i_r) {
              int32_t _elem_r;
              xfer += iprot->readI32(_elem_r);
              this->fieldC.push_back(std::move(_elem_r));
            }
          }
          else {
            for (_i_r = 0; _i_r < _size_r; ++_i_r) {
              int32_t _elem_r;
              xfer += iprot->readI32(_elem_r);
              this->fieldC.push_back(std::move(_elem_r));
            }
          }
          xfer += iprot->readListEnd();
          this->__isset.fieldC = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 4:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->fieldD = folly::fbvector<int32_t>();
          uint32_t _size_r;
          apache::thrift::protocol::TType _etype_r;
          xfer += iprot->readListBegin(_etype_r, _size_r);
          uint32_t _i_r;
          if (_size_r == std::numeric_limits<uint32_t>::max()) {
            for (_i_r = 0; iprot->peekList(); ++_i_r) {
              int32_t _elem_r;
              xfer += iprot->readI32(_elem_r);
              this->fieldD.push_back(std::move(_elem_r));
            }
          }
          else {
            for (_i_r = 0; _i_r < _size_r; ++_i_r) {
              int32_t _elem_r;
              xfer += iprot->readI32(_elem_r);
              this->fieldD.push_back(std::move(_elem_r));
            }
          }
          xfer += iprot->readListEnd();
          this->__isset.fieldD = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 5:
      {
        if (ftype == apache::thrift::protocol::T_LIST) {
          this->fieldE = folly::small_vector<int32_t>();
          uint32_t _size_r;
          apache::thrift::protocol::TType _etype_r;
          xfer += iprot->readListBegin(_etype_r, _size_r);
          uint32_t _i_r;
          if (_size_r == std::numeric_limits<uint32_t>::max()) {
            for (_i_r = 0; iprot->peekList(); ++_i_r) {
              int32_t _elem_r;
              xfer += iprot->readI32(_elem_r);
              this->fieldE.push_back(std::move(_elem_r));
            }
          }
          else {
            for (_i_r = 0; _i_r < _size_r; ++_i_r) {
              int32_t _elem_r;
              xfer += iprot->readI32(_elem_r);
              this->fieldE.push_back(std::move(_elem_r));
            }
          }
          xfer += iprot->readListEnd();
          this->__isset.fieldE = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 6:
      {
        if (ftype == apache::thrift::protocol::T_SET) {
          this->fieldF = folly::sorted_vector_set<int32_t>();
          uint32_t _size_r;
          apache::thrift::protocol::TType _etype_r;
          xfer += iprot->readSetBegin(_etype_r, _size_r);
          uint32_t _i_r;
          if (_size_r == std::numeric_limits<uint32_t>::max()) {
            for (_i_r = 0; iprot->peekSet(); ++_i_r) {
              int32_t _elem;
              xfer += iprot->readI32(_elem);
              this->fieldF.insert(std::move(_elem));
            }
          }
          else {
            for (_i_r = 0; _i_r < _size_r; ++_i_r) {
              int32_t _elem;
              xfer += iprot->readI32(_elem);
              this->fieldF.insert(std::move(_elem));
            }
          }
          xfer += iprot->readSetEnd();
          this->__isset.fieldF = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      case 7:
      {
        if (ftype == apache::thrift::protocol::T_MAP) {
          this->fieldG = folly::sorted_vector_map<int32_t, std::string>();
          uint32_t _size_rk_rv;
          apache::thrift::protocol::TType _ktype_rk_rv;
          apache::thrift::protocol::TType _vtype_rk_rv;
          xfer += iprot->readMapBegin(_ktype_rk_rv, _vtype_rk_rv, _size_rk_rv);
          uint32_t _i_rk_rv;
          if (_size_rk_rv == std::numeric_limits<uint32_t>::max()) {
            for (_i_rk_rv = 0; iprot->peekMap(); ++_i_rk_rv) {
              auto const _key_index_rk_rv = [&] {
                int32_t _key;
                xfer += iprot->readI32(_key);
                return _key;
              }
              ();
              std::string& _val = this->fieldG[std::move(_key_index_rk_rv)];
              xfer += iprot->readString(_val);
            }
          }
          else {
            auto const _kreader_rk_rv = [&xfer, &iprot](auto& _key) {
              xfer += iprot->readI32(_key);
            }
            ;
            auto const _vreader_rk_rv = [&xfer, &iprot](auto& _val) {
              xfer += iprot->readString(_val);
            }
            ;
            ::apache::thrift::deserialize_known_length_map(this->fieldG, _size_rk_rv, _kreader_rk_rv, _vreader_rk_rv);
          }
          xfer += iprot->readMapEnd();
          this->__isset.fieldG = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      }
      default:
      {
        xfer += iprot->skip(ftype);
        break;
      }
    }
    xfer += iprot->readFieldEnd();
  }
  xfer += iprot->readStructEnd();

  return xfer;
}

template <class Protocol_>
uint32_t ContainerStruct::serializedSize(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ContainerStruct");
  xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_LIST, 12);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldA.size());
  for (auto _iter_r = this->fieldA.begin(); _iter_r != this->fieldA.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldB", apache::thrift::protocol::T_LIST, 2);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldB.size());
  for (auto _iter_r = this->fieldB.begin(); _iter_r != this->fieldB.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldC", apache::thrift::protocol::T_LIST, 3);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldC.size());
  for (auto _iter_r = this->fieldC.begin(); _iter_r != this->fieldC.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldD", apache::thrift::protocol::T_LIST, 4);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldD.size());
  for (auto _iter_r = this->fieldD.begin(); _iter_r != this->fieldD.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldE", apache::thrift::protocol::T_LIST, 5);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldE.size());
  for (auto _iter_r = this->fieldE.begin(); _iter_r != this->fieldE.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldF", apache::thrift::protocol::T_SET, 6);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_I32, this->fieldF.size());
  for (auto _iter_r = this->fieldF.begin(); _iter_r != this->fieldF.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("fieldG", apache::thrift::protocol::T_MAP, 7);
  xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_I32, apache::thrift::protocol::T_STRING, this->fieldG.size());
  for (auto _iter_rk_rv = this->fieldG.begin(); _iter_rk_rv != this->fieldG.end(); ++_iter_rk_rv) {
    xfer += prot_->serializedSizeI32(_iter_rk_rv->first);
    xfer += prot_->serializedSizeString(_iter_rk_rv->second);
  }
  xfer += prot_->serializedSizeMapEnd();
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ContainerStruct::serializedSizeZC(Protocol_ const* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->serializedStructSize("ContainerStruct");
  xfer += prot_->serializedFieldSize("fieldA", apache::thrift::protocol::T_LIST, 12);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldA.size());
  for (auto _iter_r = this->fieldA.begin(); _iter_r != this->fieldA.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldB", apache::thrift::protocol::T_LIST, 2);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldB.size());
  for (auto _iter_r = this->fieldB.begin(); _iter_r != this->fieldB.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldC", apache::thrift::protocol::T_LIST, 3);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldC.size());
  for (auto _iter_r = this->fieldC.begin(); _iter_r != this->fieldC.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldD", apache::thrift::protocol::T_LIST, 4);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldD.size());
  for (auto _iter_r = this->fieldD.begin(); _iter_r != this->fieldD.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldE", apache::thrift::protocol::T_LIST, 5);
  xfer += prot_->serializedSizeListBegin(apache::thrift::protocol::T_I32, this->fieldE.size());
  for (auto _iter_r = this->fieldE.begin(); _iter_r != this->fieldE.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeListEnd();
  xfer += prot_->serializedFieldSize("fieldF", apache::thrift::protocol::T_SET, 6);
  xfer += prot_->serializedSizeSetBegin(apache::thrift::protocol::T_I32, this->fieldF.size());
  for (auto _iter_r = this->fieldF.begin(); _iter_r != this->fieldF.end(); ++_iter_r) {
    xfer += prot_->serializedSizeI32((*_iter_r));
  }
  xfer += prot_->serializedSizeSetEnd();
  xfer += prot_->serializedFieldSize("fieldG", apache::thrift::protocol::T_MAP, 7);
  xfer += prot_->serializedSizeMapBegin(apache::thrift::protocol::T_I32, apache::thrift::protocol::T_STRING, this->fieldG.size());
  for (auto _iter_rk_rv = this->fieldG.begin(); _iter_rk_rv != this->fieldG.end(); ++_iter_rk_rv) {
    xfer += prot_->serializedSizeI32(_iter_rk_rv->first);
    xfer += prot_->serializedSizeString(_iter_rk_rv->second);
  }
  xfer += prot_->serializedSizeMapEnd();
  xfer += prot_->serializedSizeStop();
  return xfer;
}

template <class Protocol_>
uint32_t ContainerStruct::write(Protocol_* prot_) const {
  uint32_t xfer = 0;
  xfer += prot_->writeStructBegin("ContainerStruct");
  xfer += prot_->writeFieldBegin("fieldA", apache::thrift::protocol::T_LIST, 12);
  xfer += prot_->writeListBegin(apache::thrift::protocol::T_I32, this->fieldA.size());
  for (auto _iter_r = this->fieldA.begin(); _iter_r != this->fieldA.end(); ++_iter_r) {
    xfer += prot_->writeI32((*_iter_r));
  }
  xfer += prot_->writeListEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldB", apache::thrift::protocol::T_LIST, 2);
  xfer += prot_->writeListBegin(apache::thrift::protocol::T_I32, this->fieldB.size());
  for (auto _iter_r = this->fieldB.begin(); _iter_r != this->fieldB.end(); ++_iter_r) {
    xfer += prot_->writeI32((*_iter_r));
  }
  xfer += prot_->writeListEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldC", apache::thrift::protocol::T_LIST, 3);
  xfer += prot_->writeListBegin(apache::thrift::protocol::T_I32, this->fieldC.size());
  for (auto _iter_r = this->fieldC.begin(); _iter_r != this->fieldC.end(); ++_iter_r) {
    xfer += prot_->writeI32((*_iter_r));
  }
  xfer += prot_->writeListEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldD", apache::thrift::protocol::T_LIST, 4);
  xfer += prot_->writeListBegin(apache::thrift::protocol::T_I32, this->fieldD.size());
  for (auto _iter_r = this->fieldD.begin(); _iter_r != this->fieldD.end(); ++_iter_r) {
    xfer += prot_->writeI32((*_iter_r));
  }
  xfer += prot_->writeListEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldE", apache::thrift::protocol::T_LIST, 5);
  xfer += prot_->writeListBegin(apache::thrift::protocol::T_I32, this->fieldE.size());
  for (auto _iter_r = this->fieldE.begin(); _iter_r != this->fieldE.end(); ++_iter_r) {
    xfer += prot_->writeI32((*_iter_r));
  }
  xfer += prot_->writeListEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldF", apache::thrift::protocol::T_SET, 6);
  xfer += prot_->writeSetBegin(apache::thrift::protocol::T_I32, this->fieldF.size());
  for (auto _iter_r = this->fieldF.begin(); _iter_r != this->fieldF.end(); ++_iter_r) {
    xfer += prot_->writeI32((*_iter_r));
  }
  xfer += prot_->writeSetEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldBegin("fieldG", apache::thrift::protocol::T_MAP, 7);
  xfer += prot_->writeMapBegin(apache::thrift::protocol::T_I32, apache::thrift::protocol::T_STRING, this->fieldG.size());
  for (auto _iter_rk_rv = this->fieldG.begin(); _iter_rk_rv != this->fieldG.end(); ++_iter_rk_rv) {
    xfer += prot_->writeI32(_iter_rk_rv->first);
    xfer += prot_->writeString(_iter_rk_rv->second);
  }
  xfer += prot_->writeMapEnd();
  xfer += prot_->writeFieldEnd();
  xfer += prot_->writeFieldStop();
  xfer += prot_->writeStructEnd();
  return xfer;
}

}}}} // apache::thrift::fixtures::types
namespace apache { namespace thrift {

}} // apache::thrift
namespace apache { namespace thrift { namespace fixtures { namespace types {

}}}} // apache::thrift::fixtures::types
