#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CTransformation_2d
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CTransformation_2d

#include "type_.CTransformation.h"


namespace cutting_tool_schema_arm
{

class CTransformation_2d : public ::cutting_tool_schema_arm::CTransformation
{
public:
	cutting_tool_schema_arm_EXPORT CTransformation_2d(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CTransformation_2d(CTransformation_2d const& init);
	void operator=(CTransformation_2d const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CTransformation_2d); }
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CTransformation_2d
