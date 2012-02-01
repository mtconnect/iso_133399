#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMating_definition
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMating_definition

#include "type_.CItem_definition.h"


namespace cutting_tool_schema_arm
{

class CMating_definition : public ::cutting_tool_schema_arm::CItem_definition
{
public:
	cutting_tool_schema_arm_EXPORT CMating_definition(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CMating_definition(CMating_definition const& init);
	void operator=(CMating_definition const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CMating_definition); }
	MemberElement<xs::CstringType, _altova_mi_altova_CMating_definition_altova_Mating_type> Mating_type;
	struct Mating_type { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMating_definition
