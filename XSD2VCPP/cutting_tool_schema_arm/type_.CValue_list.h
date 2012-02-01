#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_list
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_list

#include "type_.CProperty_value.h"


namespace cutting_tool_schema_arm
{

class CValue_list : public ::cutting_tool_schema_arm::CProperty_value
{
public:
	cutting_tool_schema_arm_EXPORT CValue_list(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CValue_list(CValue_list const& init);
	void operator=(CValue_list const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CValue_list); }
	MemberElement<CValuesType, _altova_mi_altova_CValue_list_altova_Values> Values;
	struct Values { typedef Iterator<CValuesType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CValue_list
