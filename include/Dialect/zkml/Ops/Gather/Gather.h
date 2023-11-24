#ifndef LIB_DIALECT_ZKML_GATHER_TD_
#define LIB_DIALECT_ZKML_GATHER_TD_

#include "../../ZkMlDialect.h"
#include "mlir/IR/BuiltinOps.h"   // from @llvm-project
#include "mlir/IR/BuiltinTypes.h" // from @llvm-project
#include "mlir/IR/Dialect.h"      // from @llvm-project
#include "mlir/IR/DialectImplementation.h"
//
//
#define GET_OP_CLASSES
#include "Gather.h.inc"

#endif // LIB_DIALECT_ZKML_GATHER_TD_