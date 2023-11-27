/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Definitions                                                        *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

MLIR_DEFINE_EXPLICIT_TYPE_ID(::zk_ml_toolchain::zkml::ZkMlDialect)
namespace zk_ml_toolchain {
namespace zkml {

ZkMlDialect::ZkMlDialect(::mlir::MLIRContext *context)
    : ::mlir::Dialect(getDialectNamespace(), context, ::mlir::TypeID::get<ZkMlDialect>()) {
  
  initialize();
}

ZkMlDialect::~ZkMlDialect() = default;

} // namespace zkml
} // namespace zk_ml_toolchain
