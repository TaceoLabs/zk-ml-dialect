#ifndef LIB_DIALECT_ZKML_ATTRIBUTES_TD_
#define LIB_DIALECT_ZKML_ATTRIBUTES_TD_

include "../ZkMlDialect.td"
include "mlir/IR/AttrTypeBase.td"

class ZkMl_Attr<string name, string attrMnemonic, list<Trait> traits = []>
    : AttrDef<ZkMl_Dialect, name, traits> {
    let mnemonic = attrMnemonic;
}

def ZkMl_PrivateInputAttr : ZkMl_Attr<"ZkMlPrivateInput", "private"> {
  let summary = "An Attribute marking something as private input";
  let description = [{
    A simple attribute marking a value as private input
  }];

  /// Indicate that our attribute will add additional verification to the parameters.
  let genVerifyDecl = 1;
}

def ZkMl_PublicInputAttr : ZkMl_Attr<"ZkMlPublicInput", "public"> {
  let summary = "An Attribute marking something as public input";
  let description = [{
    A simple attribute marking a value as public input
  }];

  /// Indicate that our attribute will add additional verification to the parameters.
  let genVerifyDecl = 1;
}

#endif  // LIB_DIALECT_ZKML_ATTRIBUTES_TD_
