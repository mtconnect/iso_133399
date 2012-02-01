#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUnit_componentType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUnit_componentType



namespace cutting_tool_schema_arm
{

class CUnit_componentType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CUnit_componentType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CUnit_componentType(CUnit_componentType const& init);
	void operator=(CUnit_componentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CUnit_componentType); }
	MemberElement<CUnit, _altova_mi_altova_CUnit_componentType_altova_Unit> Unit;
	struct Unit { typedef Iterator<CUnit> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CUnit_componentType
