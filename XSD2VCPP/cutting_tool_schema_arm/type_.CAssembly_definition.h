#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssembly_definition
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssembly_definition

#include "type_.CItem_definition.h"


namespace cutting_tool_schema_arm
{

class CAssembly_definition : public ::cutting_tool_schema_arm::CItem_definition
{
public:
	cutting_tool_schema_arm_EXPORT CAssembly_definition(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssembly_definition(CAssembly_definition const& init);
	void operator=(CAssembly_definition const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssembly_definition); }
	MemberElement<xs::CstringType, _altova_mi_altova_CAssembly_definition_altova_Assembly_type> Assembly_type;
	struct Assembly_type { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssembly_definition
