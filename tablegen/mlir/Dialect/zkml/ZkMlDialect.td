#ifndef LIB_DIALECT_ZKML_ZKMLDIALECT_TD_
#define LIB_DIALECT_ZKML_ZKMLDIALECT_TD_

include "mlir/IR/DialectBase.td"

def ZkMl_Dialect : Dialect {
  let name = "zkML";
  let summary = "A dialect to rewrite operations for better handling in ZK";
  let description = [{
    The zkML dialect consists of function calls optimized for plonkish arithmetization.
  }];

  let extraClassDeclaration = [{
  public:
    ::mlir::Attribute parseAttribute(::mlir::DialectAsmParser &parser,
                                     ::mlir::Type type) const override;
    void printAttribute(::mlir::Attribute attr,
                        ::mlir::DialectAsmPrinter &printer) const override;
  }];

  let cppNamespace = "::mlir::zkml";
}
#endif //LIB_DIALECT_ZKML_ZKMLDIALECT_TD_
