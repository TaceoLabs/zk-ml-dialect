#ifndef LIB_DIALECT_ZKML_CMP_SET_TD_
#define LIB_DIALECT_ZKML_CMP_SET_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

def ZkMl_CmpSetOp : Op<ZkMl_Dialect, "cmp-set"> {
  let summary = "cmp-set";
  let arguments = (ins 
    AnyTypeOf<[F16, F32, F64, I1, I8, I16, I32, I64, UI1, UI8, UI16, UI32, UI64]>:$cmp_set,
    AnyTypeOf<[F16, F32, F64, I1, I8, I16, I32, I64, UI1, UI8, UI16, UI32, UI64]>:$d_eq,
    AnyTypeOf<[F16, F32, F64, I1, I8, I16, I32, I64, UI1, UI8, UI16, UI32, UI64]>:$d_neq,
    Index:$index);
  let results = (outs AnyTypeOf<[F16, F32, F64, I1, I8, I16, I32, I64, UI1, UI8, UI16, UI32, UI64]>:$result);
  let extraClassDeclaration = [{
    static int getNumberOfOperands() {
      return 4;
    }
    static int getNumberOfResults() {
      return 1;
    }
  }];
}

#endif  // LIB_DIALECT_ZKML_CMP_SET_TD_
