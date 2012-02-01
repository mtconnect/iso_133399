#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMating_association
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMating_association

#include "type_.CItem_structure_association.h"


namespace cutting_tool_schema_arm
{

class CMating_association : public ::cutting_tool_schema_arm::CItem_structure_association
{
public:
	cutting_tool_schema_arm_EXPORT CMating_association(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CMating_association(CMating_association const& init);
	void operator=(CMating_association const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CMating_association); }
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CMating_association
