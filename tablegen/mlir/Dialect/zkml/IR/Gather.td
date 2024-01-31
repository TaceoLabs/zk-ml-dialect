#ifndef LIB_DIALECT_ZKML_GATHER_TD_
#define LIB_DIALECT_ZKML_GATHER_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

def ZkMl_GatherOp : Op<ZkMl_Dialect, "gather-acc"> {
  let summary = "gather-acc";
  let arguments = (ins AnyTypeOf<[F16, F32, F64, I1, I8, I16, I32, I64, UI1, UI8, UI16, UI32, UI64]>:$prev_acc,
    AnyTypeOf<[F16, F32, F64, I1, I8, I16, I32, I64, UI1, UI8, UI16, UI32, UI64]>:$data, AnyTypeOf<[I16, I32, I64]>:$gatherIndex, Index:$dataIndex);
  let results = (outs AnyTypeOf<[F16, F32, F64, I1, I8, I16, I32, I64, UI1, UI8, UI16, UI32, UI64]>:$acc);
  let extraClassDeclaration = [{
    static int getNumberOfOperands() {
      return 4;
    }
    static int getNumberOfResults() {
      return 1;
    }
  }];
}

#endif  // LIB_DIALECT_ZKML_GATHER_TD_
