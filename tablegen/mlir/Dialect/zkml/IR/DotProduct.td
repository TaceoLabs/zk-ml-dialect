#ifndef LIB_DIALECT_ZKML_DOT_PRODUCT_TD_
#define LIB_DIALECT_ZKML_DOT_PRODUCT_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

def ZkMl_DotProductOp : Op<ZkMl_Dialect, "dot-product"> {
  let summary = "A dedicated dot-product intrinsic";
  let arguments = (ins AnyTypeOf<[MemRefOf<[UI8]>, MemRefOf<[UI16]>, MemRefOf<[UI32]>, MemRefOf<[UI64]>, MemRefOf<[I8]>, MemRefOf<[I16]>, MemRefOf<[I32]>, MemRefOf<[I64]>, MemRefOf<[BF16]>, MemRefOf<[F16]>, MemRefOf<[F32]>, MemRefOf<[F64]>, MemRefOf<[I1]>, MemRefOf<[Complex<F32>]>, MemRefOf<[Complex<F64>]>]>:$lhs,
    AnyTypeOf<[MemRefOf<[UI8]>, MemRefOf<[UI16]>, MemRefOf<[UI32]>, MemRefOf<[UI64]>, MemRefOf<[I8]>, MemRefOf<[I16]>, MemRefOf<[I32]>, MemRefOf<[I64]>, MemRefOf<[BF16]>, MemRefOf<[F16]>, MemRefOf<[F32]>, MemRefOf<[F64]>, MemRefOf<[I1]>, MemRefOf<[Complex<F32>]>, MemRefOf<[Complex<F64>]>]>:$rhs);
  let results = (outs AnyTypeOf<[MemRefOf<[UI8]>, MemRefOf<[UI16]>, MemRefOf<[UI32]>, MemRefOf<[UI64]>, MemRefOf<[I8]>, MemRefOf<[I16]>, MemRefOf<[I32]>, MemRefOf<[I64]>, MemRefOf<[BF16]>, MemRefOf<[F16]>, MemRefOf<[F32]>, MemRefOf<[F64]>, MemRefOf<[I1]>, MemRefOf<[Complex<F32>]>, MemRefOf<[Complex<F64>]>]>:$output);
}

#endif  // LIB_DIALECT_ZKML_DOT_PRODUCT_TD_
