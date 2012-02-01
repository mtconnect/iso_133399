#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_item_definition
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_item_definition

#include "type_.CItem_definition.h"


namespace cutting_tool_schema_arm
{

class CPhysical_item_definition : public ::cutting_tool_schema_arm::CItem_definition
{
public:
	cutting_tool_schema_arm_EXPORT CPhysical_item_definition(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPhysical_item_definition(CPhysical_item_definition const& init);
	void operator=(CPhysical_item_definition const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPhysical_item_definition); }
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_item_definition
