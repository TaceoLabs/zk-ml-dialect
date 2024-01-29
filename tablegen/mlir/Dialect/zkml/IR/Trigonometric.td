#ifndef LIB_DIALECT_ZKML_TRIGONOMETRIC_TD_
#define LIB_DIALECT_ZKML_TRIGONOMETRIC_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

def ZkMl_CoshOp : Op<ZkMl_Dialect, "cosh"> {
  let summary = "A dedicated cosh intrinsic";
  let arguments = (ins AnyTypeOf<[F16, F32, F64]>:$input);
  let results = (outs AnyTypeOf<[F16, F32, F64]>:$output);
  let extraClassDeclaration = [{
    static int getNumberOfOperands() {
      return 1;
    }
    static int getNumberOfResults() {
      return 1;
    }
    static std::vector<int> getTypeMap() {
      return {30};
    }
  }];
}

def ZkMl_SinhOp : Op<ZkMl_Dialect, "sinh"> {
  let summary = "A dedicated sinh intrinsic";
  let arguments = (ins AnyTypeOf<[F16, F32, F64]>:$input);
  let results = (outs AnyTypeOf<[F16, F32, F64]>:$output);
  let extraClassDeclaration = [{
    static int getNumberOfOperands() {
      return 1;
    }
    static int getNumberOfResults() {
      return 1;
    }
    static std::vector<int> getTypeMap() {
      return {30};
    }
  }];
}
#endif  // LIB_DIALECT_ZKML_TRIGONOMETRIC_TD_
