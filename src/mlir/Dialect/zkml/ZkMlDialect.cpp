#include "mlir/Dialect/zkml/ZkMlDialect.h"
#include "mlir/Dialect/zkml/IR/ArgMin.h"
#include "mlir/Dialect/zkml/IR/ArgMax.h"
#include "mlir/Dialect/zkml/IR/Gather.h"
#include "mlir/Dialect/zkml/IR/DotProduct.h"
#include "mlir/Dialect/zkml/IR/Trace.h"
#include "mlir/Dialect/zkml/IR/OnnxAmount.h"

#include "mlir/IR/Builders.h"
#include "llvm/ADT/TypeSwitch.h"

#include "mlir/Dialect/zkml/ZkMlDialect.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/ArgMin.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/ArgMax.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/Gather.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/DotProduct.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/Trace.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/OnnxAmount.cpp.inc"

namespace mlir {
namespace zkml {

void ZkMlDialect::initialize() {
  // This is where we will register types and operations with the dialect
addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/ArgMin.cpp.inc"
      >();
addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/ArgMax.cpp.inc"
      >();
addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/Gather.cpp.inc"
      >();

addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/DotProduct.cpp.inc"
      >();

addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/Trace.cpp.inc"
      >();

addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/OnnxAmount.cpp.inc"
      >();
};

}  // namespace tutorial
}  // namespace mlir
