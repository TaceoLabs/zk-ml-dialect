#ifndef LIB_DIALECT_ZKML_ONNX_AMOUNT_TD_
#define LIB_DIALECT_ZKML_ONNX_AMOUNT_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

def ZkMl_OnnxAmountOp : Op<ZkMl_Dialect, "amount"> {
  let summary = "A constant representing how much work we have to do";
  let arguments = (ins I64Attr:$amount);
}
#endif  // LIB_DIALECT_ZKML_ONNX_AMOUNT_TD_
