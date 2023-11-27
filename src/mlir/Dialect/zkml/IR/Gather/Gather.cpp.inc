/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Definitions                                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#ifdef GET_OP_LIST
#undef GET_OP_LIST

::zk_ml_toolchain::zkml::GatherOp
#endif  // GET_OP_LIST

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace zk_ml_toolchain {
namespace zkml {

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_Gather2Etb0(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isUnsignedInteger(8)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isUnsignedInteger(16)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isUnsignedInteger(32)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isUnsignedInteger(64)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(8)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(16)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isBF16()); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isF16()); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isF32()); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isF64()); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(1)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return ((elementType.isa<::mlir::ComplexType>())) && ((elementType.cast<::mlir::ComplexType>().getElementType().isF32())); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return ((elementType.isa<::mlir::ComplexType>())) && ((elementType.cast<::mlir::ComplexType>().getElementType().isF64())); }(type.cast<::mlir::ShapedType>().getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of 8-bit unsigned integer values or memref of 16-bit unsigned integer values or memref of 32-bit unsigned integer values or memref of 64-bit unsigned integer values or memref of 8-bit signless integer values or memref of 16-bit signless integer values or memref of 32-bit signless integer values or memref of 64-bit signless integer values or memref of bfloat16 type values or memref of 16-bit float values or memref of 32-bit float values or memref of 64-bit float values or memref of 1-bit signless integer values or memref of complex type with 32-bit float elements values or memref of complex type with 64-bit float elements values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_type_constraint_Gather2Etb1(
    ::mlir::Operation *op, ::mlir::Type type, ::llvm::StringRef valueKind,
    unsigned valueIndex) {
  if (!((((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(32)); }(type.cast<::mlir::ShapedType>().getElementType()))) || (((type.isa<::mlir::MemRefType>())) && ([](::mlir::Type elementType) { return (elementType.isSignlessInteger(64)); }(type.cast<::mlir::ShapedType>().getElementType()))))) {
    return op->emitOpError(valueKind) << " #" << valueIndex
        << " must be memref of 32-bit signless integer values or memref of 64-bit signless integer values, but got " << type;
  }
  return ::mlir::success();
}

static ::mlir::LogicalResult __mlir_ods_local_attr_constraint_Gather2Etb0(
    ::mlir::Operation *op, ::mlir::Attribute attr, ::llvm::StringRef attrName) {
  if (attr && !(((attr.isa<::mlir::IntegerAttr>())) && ((attr.cast<::mlir::IntegerAttr>().getType().isSignedInteger(64))))) {
    return op->emitOpError("attribute '") << attrName
        << "' failed to satisfy constraint: 64-bit signed integer attribute";
  }
  return ::mlir::success();
}
} // namespace zkml
} // namespace zk_ml_toolchain
namespace zk_ml_toolchain {
namespace zkml {

//===----------------------------------------------------------------------===//
// ::zk_ml_toolchain::zkml::GatherOp definitions
//===----------------------------------------------------------------------===//

namespace detail {
GatherOpGenericAdaptorBase::GatherOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions) : odsAttrs(attrs), odsRegions(regions) {  if (odsAttrs)
    odsOpName.emplace("zkML.Gather", odsAttrs.getContext());
}

std::pair<unsigned, unsigned> GatherOpGenericAdaptorBase::getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize) {
  return {index, 1};
}

::mlir::DictionaryAttr GatherOpGenericAdaptorBase::getAttributes() {
  return odsAttrs;
}

::mlir::IntegerAttr GatherOpGenericAdaptorBase::getAxisAttr() {
  assert(odsAttrs && "no attributes when constructing adapter");
  auto attr = ::mlir::impl::getAttrFromSortedRange(odsAttrs.begin() + 0, odsAttrs.end() - 0, GatherOp::getAxisAttrName(*odsOpName)).dyn_cast_or_null<::mlir::IntegerAttr>();
  return attr;
}

int64_t GatherOpGenericAdaptorBase::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getSExtValue();
}

} // namespace detail
GatherOpAdaptor::GatherOpAdaptor(GatherOp op) : GatherOpAdaptor(op->getOperands(), op->getAttrDictionary(), op->getRegions()) {}

::mlir::LogicalResult GatherOpAdaptor::verify(::mlir::Location loc) {
  auto namedAttrRange = odsAttrs;
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_axis;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == GatherOp::getAxisAttrName(*odsOpName)) {
      tblgen_axis = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (tblgen_axis && !(((tblgen_axis.isa<::mlir::IntegerAttr>())) && ((tblgen_axis.cast<::mlir::IntegerAttr>().getType().isSignedInteger(64)))))
    return emitError(loc, "'zkML.Gather' op ""attribute 'axis' failed to satisfy constraint: 64-bit signed integer attribute");
  return ::mlir::success();
}

std::pair<unsigned, unsigned> GatherOp::getODSOperandIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::operand_range GatherOp::getODSOperands(unsigned index) {
  auto valueRange = getODSOperandIndexAndLength(index);
  return {std::next(getOperation()->operand_begin(), valueRange.first),
           std::next(getOperation()->operand_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GatherOp::getData() {
  return *getODSOperands(0).begin();
}

::mlir::Value GatherOp::getIndices() {
  return *getODSOperands(1).begin();
}

::mlir::MutableOperandRange GatherOp::getDataMutable() {
  auto range = getODSOperandIndexAndLength(0);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

::mlir::MutableOperandRange GatherOp::getIndicesMutable() {
  auto range = getODSOperandIndexAndLength(1);
  auto mutableRange = ::mlir::MutableOperandRange(getOperation(), range.first, range.second);
  return mutableRange;
}

std::pair<unsigned, unsigned> GatherOp::getODSResultIndexAndLength(unsigned index) {
  return {index, 1};
}

::mlir::Operation::result_range GatherOp::getODSResults(unsigned index) {
  auto valueRange = getODSResultIndexAndLength(index);
  return {std::next(getOperation()->result_begin(), valueRange.first),
           std::next(getOperation()->result_begin(), valueRange.first + valueRange.second)};
}

::mlir::Value GatherOp::getOutput() {
  return *getODSResults(0).begin();
}

::mlir::IntegerAttr GatherOp::getAxisAttr() {
  return ::mlir::impl::getAttrFromSortedRange((*this)->getAttrs().begin() + 0, (*this)->getAttrs().end() - 0, getAxisAttrName()).dyn_cast_or_null<::mlir::IntegerAttr>();
}

int64_t GatherOp::getAxis() {
  auto attr = getAxisAttr();
  return attr.getValue().getSExtValue();
}

void GatherOp::setAxisAttr(::mlir::IntegerAttr attr) {
  (*this)->setAttr(getAxisAttrName(), attr);
}

void GatherOp::setAxis(int64_t attrValue) {
  (*this)->setAttr(getAxisAttrName(), ::mlir::Builder((*this)->getContext()).getIntegerAttr(::mlir::Builder((*this)->getContext()).getIntegerType(64, /*isSigned=*/true), attrValue));
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value data, ::mlir::Value indices, ::mlir::IntegerAttr axis) {
  odsState.addOperands(data);
  odsState.addOperands(indices);
  if (axis) {
    odsState.addAttribute(getAxisAttrName(odsState.name), axis);
  }
  odsState.addTypes(output);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value data, ::mlir::Value indices, ::mlir::IntegerAttr axis) {
  odsState.addOperands(data);
  odsState.addOperands(indices);
  if (axis) {
    odsState.addAttribute(getAxisAttrName(odsState.name), axis);
  }
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type output, ::mlir::Value data, ::mlir::Value indices, int64_t axis) {
  odsState.addOperands(data);
  odsState.addOperands(indices);
  odsState.addAttribute(getAxisAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64, /*isSigned=*/true), axis));
  odsState.addTypes(output);
}

void GatherOp::build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value data, ::mlir::Value indices, int64_t axis) {
  odsState.addOperands(data);
  odsState.addOperands(indices);
  odsState.addAttribute(getAxisAttrName(odsState.name), odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64, /*isSigned=*/true), axis));
  assert(resultTypes.size() == 1u && "mismatched number of results");
  odsState.addTypes(resultTypes);
}

void GatherOp::build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes) {
  assert(operands.size() == 2u && "mismatched number of parameters");
  odsState.addOperands(operands);
  odsState.addAttributes(attributes);
  assert(resultTypes.size() == 1u && "mismatched number of return types");
  odsState.addTypes(resultTypes);
}

void GatherOp::populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes) {
  auto attrNames = opName.getAttributeNames();
  ::mlir::Builder odsBuilder(attrNames.front().getContext());
  if (!attributes.get(attrNames[0])) {
    attributes.append(attrNames[0], odsBuilder.getIntegerAttr(odsBuilder.getIntegerType(64, /*isSigned=*/true), 0));
  }
}

::mlir::LogicalResult GatherOp::verifyInvariantsImpl() {
  auto namedAttrRange = (*this)->getAttrs();
  auto namedAttrIt = namedAttrRange.begin();
  ::mlir::Attribute tblgen_axis;
  while (true) {
    if (namedAttrIt == namedAttrRange.end()) {
      break;
    }
    else if (namedAttrIt->getName() == getAxisAttrName()) {
      tblgen_axis = namedAttrIt->getValue();
    }
    ++namedAttrIt;
  }

  if (::mlir::failed(__mlir_ods_local_attr_constraint_Gather2Etb0(*this, tblgen_axis, "axis")))
    return ::mlir::failure();
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSOperands(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_Gather2Etb0(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
    auto valueGroup1 = getODSOperands(1);

    for (auto v : valueGroup1) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_Gather2Etb1(*this, v.getType(), "operand", index++)))
        return ::mlir::failure();
    }
  }
  {
    unsigned index = 0; (void)index;
    auto valueGroup0 = getODSResults(0);

    for (auto v : valueGroup0) {
      if (::mlir::failed(__mlir_ods_local_type_constraint_Gather2Etb0(*this, v.getType(), "result", index++)))
        return ::mlir::failure();
    }
  }
  return ::mlir::success();
}

::mlir::LogicalResult GatherOp::verifyInvariants() {
  return verifyInvariantsImpl();
}

} // namespace zkml
} // namespace zk_ml_toolchain
MLIR_DEFINE_EXPLICIT_TYPE_ID(::zk_ml_toolchain::zkml::GatherOp)


#endif  // GET_OP_CLASSES

