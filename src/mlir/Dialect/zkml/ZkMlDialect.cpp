#include "mlir/Dialect/zkml/ZkMlDialect.h"
#include "mlir/Dialect/zkml/IR/ArgMin.h"
#include "mlir/Dialect/zkml/IR/ArgMax.h"
#include "mlir/Dialect/zkml/IR/Gather.h"
#include "mlir/Dialect/zkml/IR/DotProduct.h"
#include "mlir/Dialect/zkml/IR/Trace.h"
#include "mlir/Dialect/zkml/IR/OnnxAmount.h"
#include "mlir/Dialect/zkml/IR/Trigonometric.h"
#include "mlir/Dialect/zkml/IR/ZkMlAttributes.hpp"

#include "mlir/IR/Builders.h"
#include "llvm/ADT/TypeSwitch.h"

#include "mlir/Dialect/zkml/ZkMlDialect.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/ArgMin.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/ArgMax.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/Gather.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/DotProduct.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/Trigonometric.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/Trace.cpp.inc"

#define GET_OP_CLASSES
#include "mlir/Dialect/zkml/IR/OnnxAmount.cpp.inc"

#define GET_ATTRDEF_CLASSES
#include "mlir/Dialect/zkml/IR/ZkMlAttrDefs.cpp.inc"

namespace mlir {
    namespace zkml {

        void ZkMlDialect::initialize() {
            // This is where we will register types and operations with the dialect
            addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/ArgMin.cpp.inc"
                >();
            addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/ArgMax.cpp.inc"
                >();
            addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/Gather.cpp.inc"
                >();

            addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/DotProduct.cpp.inc"
                >();

            addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/Trigonometric.cpp.inc"
                >();

            addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/Trace.cpp.inc"
                >();

            addOperations<
#define GET_OP_LIST
#include "mlir/Dialect/zkml/IR/OnnxAmount.cpp.inc"
                >();

            addAttributes<
#define GET_ATTRDEF_LIST
#include "mlir/Dialect/zkml/IR/ZkMlAttrDefs.cpp.inc"
                >();
        };

        Attribute ZkMlDialect::parseAttribute(DialectAsmParser &parser, Type type) const {
            StringRef attrTag;
            if (Attribute attr; generatedAttributeParser(parser, &attrTag, type, attr).has_value())
                return attr;
            parser.emitError(parser.getCurrentLocation()) << "unknown attribute `" << attrTag << "` in dialect `zkML`";
            return {};
        };

        /// Print an attribute registered to this dialect.
        void ZkMlDialect::printAttribute(Attribute attr, DialectAsmPrinter &printer) const {
            assert(succeeded(generatedAttributePrinter(attr, printer)) && "cannot print");
        };

    }    // namespace zkml
}    // namespace mlir
