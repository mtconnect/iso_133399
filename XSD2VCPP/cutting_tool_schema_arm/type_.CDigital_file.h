#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDigital_file
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDigital_file

#include "type_.CDocument_file.h"


namespace cutting_tool_schema_arm
{

class CDigital_file : public ::cutting_tool_schema_arm::CDocument_file
{
public:
	cutting_tool_schema_arm_EXPORT CDigital_file(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDigital_file(CDigital_file const& init);
	void operator=(CDigital_file const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDigital_file); }
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDigital_file
