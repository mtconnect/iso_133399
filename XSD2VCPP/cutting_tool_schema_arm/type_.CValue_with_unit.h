#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_with_unit
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_with_unit

#include "type_.CProperty_value.h"


namespace cutting_tool_schema_arm
{

class CValue_with_unit : public ::cutting_tool_schema_arm::CProperty_value
{
public:
	cutting_tool_schema_arm_EXPORT CValue_with_unit(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CValue_with_unit(CValue_with_unit const& init);
	void operator=(CValue_with_unit const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CValue_with_unit); }
	MemberElement<xs::CstringType, _altova_mi_altova_CValue_with_unit_altova_Significant_digits> Significant_digits;
	struct Significant_digits { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CUnit_componentType, _altova_mi_altova_CValue_with_unit_altova_Unit_component> Unit_component;
	struct Unit_component { typedef Iterator<CUnit_componentType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_with_unit
