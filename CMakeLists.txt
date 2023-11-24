cmake_minimum_required(VERSION 3.19.0)

project(zkml-dialect)
include(MLIR.cmake)
add_mlir_dialect(ZkMlDialect zkml)
add_mlir_library(OMZkMlOps
  # Top files for ONNX dialect
  src/Dialect/zkml/ZkMlDialect.cpp
  src/Dialect/zkml/IR/Gather/Gather.cpp


  DEPENDS
  LINK_LIBS PRIVATE
  OMDiagnostic

  LINK_LIBS PUBLIC
  MLIRFuncDialect
  )
target_include_directories(OMZkMlOps PUBLIC include)
