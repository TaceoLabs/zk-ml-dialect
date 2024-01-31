#ifndef LIB_DIALECT_ZKML_EXP_NO_CLIP_TD_
#define LIB_DIALECT_ZKML_EXP_NO_CLIP_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

def ZkMl_ExpNoClipOp : Op<ZkMl_Dialect, "exp-no-clip"> {
  let summary = "Exp that does not clip post comma limbs. Used in Softmax/Sigmoid";
  let arguments = (ins AnyTypeOf<[F16, F32, F64]>:$input);
  let results = (outs AnyTypeOf<[F16, F32, F64]>:$output);
  let extraClassDeclaration = [{
    static int getNumberOfOperands() {
      return 1;
    }
    static int getNumberOfResults() {
      return 1;
    }
  }];
}

#endif  // LIB_DIALECT_ZKML_GATHER_TD_
