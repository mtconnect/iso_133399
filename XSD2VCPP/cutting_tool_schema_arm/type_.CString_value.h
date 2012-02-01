#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CString_value
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CString_value

#include "type_.CProperty_value.h"


namespace cutting_tool_schema_arm
{

class CString_value : public ::cutting_tool_schema_arm::CProperty_value
{
public:
	cutting_tool_schema_arm_EXPORT CString_value(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CString_value(CString_value const& init);
	void operator=(CString_value const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CString_value); }
	MemberElement<CValue_specificationType, _altova_mi_altova_CString_value_altova_Value_specification> Value_specification;
	struct Value_specification { typedef Iterator<CValue_specificationType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CString_value
