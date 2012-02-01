#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_limit
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_limit

#include "type_.CValue_with_unit.h"


namespace cutting_tool_schema_arm
{

class CValue_limit : public ::cutting_tool_schema_arm::CValue_with_unit
{
public:
	cutting_tool_schema_arm_EXPORT CValue_limit(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CValue_limit(CValue_limit const& init);
	void operator=(CValue_limit const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CValue_limit); }
	MemberElement<xs::CstringType, _altova_mi_altova_CValue_limit_altova_Limit> Limit;
	struct Limit { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CValue_limit_altova_Limit_qualifier> Limit_qualifier;
	struct Limit_qualifier { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_limit
