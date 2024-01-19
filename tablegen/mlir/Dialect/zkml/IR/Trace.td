#ifndef LIB_DIALECT_ZKML_TRACE_TD_
#define LIB_DIALECT_ZKML_TRACE_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

def ZkMl_TraceOp : Op<ZkMl_Dialect, "trace"> {
  let summary = "A debug operation to trace execution";
  let arguments = (ins StrAttr:$trace);
}
#endif  // LIB_DIALECT_ZKML_TRACE_TD_
