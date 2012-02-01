#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAllowed_unitType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAllowed_unitType



namespace cutting_tool_schema_arm
{

class CAllowed_unitType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAllowed_unitType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAllowed_unitType(CAllowed_unitType const& init);
	void operator=(CAllowed_unitType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAllowed_unitType); }
	MemberElement<CUnit, _altova_mi_altova_CAllowed_unitType_altova_Unit> Unit;
	struct Unit { typedef Iterator<CUnit> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAllowed_unitType
