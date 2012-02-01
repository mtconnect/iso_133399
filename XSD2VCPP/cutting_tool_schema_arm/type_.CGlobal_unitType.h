#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGlobal_unitType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGlobal_unitType



namespace cutting_tool_schema_arm
{

class CGlobal_unitType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CGlobal_unitType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CGlobal_unitType(CGlobal_unitType const& init);
	void operator=(CGlobal_unitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CGlobal_unitType); }
	MemberElement<CUnit, _altova_mi_altova_CGlobal_unitType_altova_Unit> Unit;
	struct Unit { typedef Iterator<CUnit> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CGlobal_unitType
