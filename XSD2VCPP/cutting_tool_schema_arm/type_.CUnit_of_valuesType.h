#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUnit_of_valuesType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUnit_of_valuesType



namespace cutting_tool_schema_arm
{

class CUnit_of_valuesType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CUnit_of_valuesType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CUnit_of_valuesType(CUnit_of_valuesType const& init);
	void operator=(CUnit_of_valuesType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CUnit_of_valuesType); }
	MemberElement<CUnit, _altova_mi_altova_CUnit_of_valuesType_altova_Unit> Unit;
	struct Unit { typedef Iterator<CUnit> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUnit_of_valuesType
