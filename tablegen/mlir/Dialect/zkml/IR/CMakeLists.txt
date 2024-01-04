set(LLVM_TARGET_DEFINITIONS ArgMin.td)
mlir_tablegen(ArgMin.h.inc -gen-op-decls)
mlir_tablegen(ArgMin.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlArgMinIncGen)

set(LLVM_TARGET_DEFINITIONS ArgMax.td)
mlir_tablegen(ArgMax.h.inc -gen-op-decls)
mlir_tablegen(ArgMax.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlArgMaxIncGen)

set(LLVM_TARGET_DEFINITIONS Gather.td)
mlir_tablegen(Gather.h.inc -gen-op-decls)
mlir_tablegen(Gather.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlGatherIncGen)

set(LLVM_TARGET_DEFINITIONS DotProduct.td)
mlir_tablegen(DotProduct.h.inc -gen-op-decls)
mlir_tablegen(DotProduct.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlDotProductIncGen)

