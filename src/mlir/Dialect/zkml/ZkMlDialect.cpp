#include "mlir/Dialect/zkml/ZkMlDialect.h"
#include "mlir/Dialect/zkml/IR/Gather.h"
#include "mlir/Dialect/zkml/IR/DotProduct.h"

#include "mlir/IR/Builders.h"
#include "llvm/ADT/TypeSwitch.h"

#include "mlir/Dialect/zkml/ZkMlDialect.cpp.inc"
#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/Gather.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/DotProduct.cpp.inc"

namespace mlir {
namespace zkml {

void ZkMlDialect::initialize() {
  // This is where we will register types and operations with the dialect
addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/Gather.cpp.inc"
      >();

addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/DotProduct.cpp.inc"
      >();
};

}  // namespace tutorial
}  // namespace mlir
