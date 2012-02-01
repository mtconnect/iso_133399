#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_coordinate_space_2d
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_coordinate_space_2d

#include "type_.CCartesian_coordinate_space.h"


namespace cutting_tool_schema_arm
{

class CCartesian_coordinate_space_2d : public ::cutting_tool_schema_arm::CCartesian_coordinate_space
{
public:
	cutting_tool_schema_arm_EXPORT CCartesian_coordinate_space_2d(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCartesian_coordinate_space_2d(CCartesian_coordinate_space_2d const& init);
	void operator=(CCartesian_coordinate_space_2d const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCartesian_coordinate_space_2d); }
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_coordinate_space_2d
