#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_range
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_range

#include "type_.CValue_with_unit.h"


namespace cutting_tool_schema_arm
{

class CValue_range : public ::cutting_tool_schema_arm::CValue_with_unit
{
public:
	cutting_tool_schema_arm_EXPORT CValue_range(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CValue_range(CValue_range const& init);
	void operator=(CValue_range const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CValue_range); }
	MemberElement<xs::CstringType, _altova_mi_altova_CValue_range_altova_Lower_limit> Lower_limit;
	struct Lower_limit { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CValue_range_altova_Upper_limit> Upper_limit;
	struct Upper_limit { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_range
