/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/fatal-compat/gen-cpp/module_constants.h"

namespace test_cpp1 { namespace cpp_reflection {

constexpr int32_t const module_constants::constant1_;
constexpr char const *const module_constants::constant2_;
constexpr enum1 const module_constants::constant3_;

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

moduleConstants::moduleConstants() {
  constant1 = module_constants::constant1();
  constant2 = module_constants::constant2();
  constant3 = module_constants::constant3();
}

#pragma GCC diagnostic pop

}} // namespace

