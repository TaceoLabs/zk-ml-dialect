cmake_minimum_required(VERSION 3.19.0)

project(zkml-dialect)
#include(MLIR.cmake)
add_subdirectory(tablegen)

add_mlir_dialect_library(MLIRZkMlDialect
  src/mlir/Dialect/zkml/ZkMlDialect.cpp
  src/mlir/Dialect/zkml/IR/ArgMin.cpp
  src/mlir/Dialect/zkml/IR/ArgMax.cpp
  src/mlir/Dialect/zkml/IR/Gather.cpp
  src/mlir/Dialect/zkml/IR/DotProduct.cpp
  src/mlir/Dialect/zkml/IR/Trace.cpp

  DEPENDS

  MLIRZKMlDialectIncGen
  MLIRZKMlArgMinIncGen
  MLIRZKMlArgMaxIncGen
  MLIRZKMlGatherIncGen
  MLIRZKMlDotProductIncGen
  MLIRZKMlTraceIncGen
  MLIRZKMlOnnxAmountIncGen
  
  LINK_LIBS PUBLIC

  MLIRIR
  )
target_include_directories(MLIRZkMlDialect PUBLIC include)
target_include_directories(MLIRZkMlDialect PUBLIC ${CMAKE_CURRENT_BINARY_DIR}/tablegen)
