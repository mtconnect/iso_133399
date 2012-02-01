#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_coordinate_space_3d
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_coordinate_space_3d

#include "type_.CCartesian_coordinate_space.h"


namespace cutting_tool_schema_arm
{

class CCartesian_coordinate_space_3d : public ::cutting_tool_schema_arm::CCartesian_coordinate_space
{
public:
	cutting_tool_schema_arm_EXPORT CCartesian_coordinate_space_3d(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CCartesian_coordinate_space_3d(CCartesian_coordinate_space_3d const& init);
	void operator=(CCartesian_coordinate_space_3d const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CCartesian_coordinate_space_3d); }
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CCartesian_coordinate_space_3d
