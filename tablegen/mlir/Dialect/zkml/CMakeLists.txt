set(LLVM_TARGET_DEFINITIONS ZkMlDialect.td)
mlir_tablegen(ZkMlDialect.h.inc -gen-dialect-decls)
mlir_tablegen(ZkMlDialect.cpp.inc -gen-dialect-defs)
add_public_tablegen_target(MLIRZKMlDialectIncGen)

add_subdirectory(IR)
