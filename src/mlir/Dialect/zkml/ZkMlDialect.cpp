#include "mlir/Dialect/zkml/ZkMlDialect.h"
#include "mlir/Dialect/zkml/Ops/Gather/Gather.h"

#include "mlir/IR/Builders.h"
#include "llvm/ADT/TypeSwitch.h"

#include "ZkMlDialect.cpp.inc"
#define GET_OP_CLASSES
#include "IR/Gather/Gather.cpp.inc"

namespace zk_ml_toolchain {
namespace zkml {

void ZkMlDialect::initialize() {
  // This is where we will register types and operations with the dialect
addOperations<
#define GET_OP_LIST
#include "IR/Gather/Gather.cpp.inc"
      >();
};

}  // namespace tutorial
}  // namespace mlir
