/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Dialect Declarations                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

namespace zk_ml_toolchain {
namespace zkml {

class ZkMlDialect : public ::mlir::Dialect {
  explicit ZkMlDialect(::mlir::MLIRContext *context);

  void initialize();
  friend class ::mlir::MLIRContext;
public:
  ~ZkMlDialect() override;
  static constexpr ::llvm::StringLiteral getDialectNamespace() {
    return ::llvm::StringLiteral("zkML");
  }
};
} // namespace zkml
} // namespace zk_ml_toolchain
MLIR_DECLARE_EXPLICIT_TYPE_ID(::zk_ml_toolchain::zkml::ZkMlDialect)
