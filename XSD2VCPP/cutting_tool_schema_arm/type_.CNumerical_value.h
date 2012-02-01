#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CNumerical_value
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CNumerical_value

#include "type_.CValue_with_unit.h"


namespace cutting_tool_schema_arm
{

class CNumerical_value : public ::cutting_tool_schema_arm::CValue_with_unit
{
public:
	cutting_tool_schema_arm_EXPORT CNumerical_value(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CNumerical_value(CNumerical_value const& init);
	void operator=(CNumerical_value const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CNumerical_value); }
	MemberElement<xs::CstringType, _altova_mi_altova_CNumerical_value_altova_Value_component> Value_component;
	struct Value_component { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CNumerical_value
