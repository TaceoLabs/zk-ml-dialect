#ifndef LIB_DIALECT_ZKML_ARG_MIN_TD_
#define LIB_DIALECT_ZKML_ARG_MIN_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

def ZkMl_ArgMinOp : Op<ZkMl_Dialect, "arg-min"> {
  let summary = "A dedicated ArgMin intrinsic";
  let arguments = (ins AnyTypeOf<[F16, F32, F64]>:$acc,
    AnyTypeOf<[F16, F32, F64]>:$next, AnyTypeOf<[I16, I32, I64]>:$accIndex, Index:$nextIndex,
   DefaultValuedAttr<I1Attr, "0">:$select_last_index);
  let results = (outs AnyTypeOf<[F16, F32, F64]>:$min, AnyTypeOf<[I16, I32, I64]>:$minIndex);
  let extraClassDeclaration = [{
    static int getNumberOfOperands() {
      return 4;
    }
    static int getNumberOfResults() {
      return 2;
    }
  }];
}
#endif  // LIB_DIALECT_ZKML_ARG_MIN_TD_
