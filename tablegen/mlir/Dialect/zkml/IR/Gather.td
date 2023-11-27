#ifndef LIB_DIALECT_ZKML_GATHER_TD_
#define LIB_DIALECT_ZKML_GATHER_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

def ZkMl_GatherOp : Op<ZkMl_Dialect, "Gather"> {
  let summary = "ONNX Gather operation";
  let arguments = (ins AnyTypeOf<[MemRefOf<[UI8]>, MemRefOf<[UI16]>, MemRefOf<[UI32]>, MemRefOf<[UI64]>, MemRefOf<[I8]>, MemRefOf<[I16]>, MemRefOf<[I32]>, MemRefOf<[I64]>, MemRefOf<[BF16]>, MemRefOf<[F16]>, MemRefOf<[F32]>, MemRefOf<[F64]>, MemRefOf<[I1]>, MemRefOf<[Complex<F32>]>, MemRefOf<[Complex<F64>]>]>:$data,
    AnyTypeOf<[MemRefOf<[I32]>, MemRefOf<[I64]>]>:$indices,
    DefaultValuedAttr<SI64Attr, "0">:$axis);
  let results = (outs AnyTypeOf<[MemRefOf<[UI8]>, MemRefOf<[UI16]>, MemRefOf<[UI32]>, MemRefOf<[UI64]>, MemRefOf<[I8]>, MemRefOf<[I16]>, MemRefOf<[I32]>, MemRefOf<[I64]>, MemRefOf<[BF16]>, MemRefOf<[F16]>, MemRefOf<[F32]>, MemRefOf<[F64]>, MemRefOf<[I1]>, MemRefOf<[Complex<F32>]>, MemRefOf<[Complex<F64>]>]>:$output);
  let extraClassDeclaration = [{

    static int getNumberOfOperands() {
      return 2;
    }
    static int getNumberOfResults() {
      return 1;
    }
    static std::vector<int> getTypeMap() {
      return {20};
    }
  }];
}

#endif  // LIB_DIALECT_ZKML_GATHER_TD_
