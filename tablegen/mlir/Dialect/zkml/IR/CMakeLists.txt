set(LLVM_TARGET_DEFINITIONS ArgMin.td)
mlir_tablegen(ArgMin.h.inc -gen-op-decls)
mlir_tablegen(ArgMin.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlArgMinIncGen)

set(LLVM_TARGET_DEFINITIONS ArgMax.td)
mlir_tablegen(ArgMax.h.inc -gen-op-decls)
mlir_tablegen(ArgMax.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlArgMaxIncGen)

set(LLVM_TARGET_DEFINITIONS CmpSet.td)
mlir_tablegen(CmpSet.h.inc -gen-op-decls)
mlir_tablegen(CmpSet.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlCmpSetIncGen)

set(LLVM_TARGET_DEFINITIONS Gather.td)
mlir_tablegen(Gather.h.inc -gen-op-decls)
mlir_tablegen(Gather.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlGatherIncGen)

set(LLVM_TARGET_DEFINITIONS DotProduct.td)
mlir_tablegen(DotProduct.h.inc -gen-op-decls)
mlir_tablegen(DotProduct.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlDotProductIncGen)

set(LLVM_TARGET_DEFINITIONS ExpNoClip.td)
mlir_tablegen(ExpNoClip.h.inc -gen-op-decls)
mlir_tablegen(ExpNoClip.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlExpNoClipIncGen)

set(LLVM_TARGET_DEFINITIONS Trigonometric.td)
mlir_tablegen(Trigonometric.h.inc -gen-op-decls)
mlir_tablegen(Trigonometric.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlTrigonometricIncGen)

set(LLVM_TARGET_DEFINITIONS Trace.td)
mlir_tablegen(Trace.h.inc -gen-op-decls)
mlir_tablegen(Trace.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlTraceIncGen)

set(LLVM_TARGET_DEFINITIONS OnnxAmount.td)
mlir_tablegen(OnnxAmount.h.inc -gen-op-decls)
mlir_tablegen(OnnxAmount.cpp.inc -gen-op-defs)
add_public_tablegen_target(MLIRZKMlOnnxAmountIncGen)


set(LLVM_TARGET_DEFINITIONS ZkMlAttributes.td)
mlir_tablegen(ZkMlAttrDefs.h.inc -gen-attrdef-decls -attrdefs-dialect=zkML)
mlir_tablegen(ZkMlAttrDefs.cpp.inc -gen-attrdef-defs -attrdefs-dialect=zkML)
add_public_tablegen_target(MLIRZKMlAttrDefsIncGen)

