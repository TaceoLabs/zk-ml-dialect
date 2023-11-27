set(LLVM_TARGET_DEFINITIONS Gather.td)
mlir_tablegen(Gather.h.inc -gen-op-decls)
mlir_tablegen(Gather.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlGatherIncGen)

set(LLVM_TARGET_DEFINITIONS DotProduct.td)
mlir_tablegen(DotProduct.h.inc -gen-op-decls)
mlir_tablegen(DotProduct.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlDotProductIncGen)

