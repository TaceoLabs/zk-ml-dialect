#ifndef LIB_DIALECT_ZKML_ZKMLDIALECT_TD_
#define LIB_DIALECT_ZKML_ZKMLDIALECT_TD_

include "mlir/IR/DialectBase.td"

def ZkMl_Dialect : Dialect {
  let name = "zkML";
  let summary = "A dialect to rewrite operations for better handling in ZK";
  let description = [{
    The zkML dialect consists of function calls optimized for plonkish arithmetization.
  }];

  let cppNamespace = "::mlir::zkml";
}
#endif //LIB_DIALECT_ZKML_ZKMLDIALECT_TD_
