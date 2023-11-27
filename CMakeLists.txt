cmake_minimum_required(VERSION 3.19.0)

project(zkml-dialect)
include(MLIR.cmake)

add_mlir_library(OMZkMlOps
  src/mlir/Dialect/zkml/ZkMlDialect.cpp
  src/mlir/Dialect/zkml/IR/Gather/Gather.cpp

  LINK_COMPONENTS
  Core

  LINK_LIBS PUBLIC
  MLIRComplexDialect
  MLIRGPUOps
  MLIRLinalgDialect
  MLIRLinalgAnalysis
  MLIRLinalgTransforms
  MLIRIR
  MLIRPass
  MLIRRewrite
  MLIRTransformUtils

  )
target_include_directories(OMZkMlOps PUBLIC include)
