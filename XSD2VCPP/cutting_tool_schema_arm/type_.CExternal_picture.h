#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_picture
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_picture

#include "type_.CExternal_model.h"


namespace cutting_tool_schema_arm
{

class CExternal_picture : public ::cutting_tool_schema_arm::CExternal_model
{
public:
	cutting_tool_schema_arm_EXPORT CExternal_picture(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CExternal_picture(CExternal_picture const& init);
	void operator=(CExternal_picture const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CExternal_picture); }
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_picture
