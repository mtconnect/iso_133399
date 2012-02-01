#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_geometric_model
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_geometric_model

#include "type_.CExternal_model.h"


namespace cutting_tool_schema_arm
{

class CExternal_geometric_model : public ::cutting_tool_schema_arm::CExternal_model
{
public:
	cutting_tool_schema_arm_EXPORT CExternal_geometric_model(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CExternal_geometric_model(CExternal_geometric_model const& init);
	void operator=(CExternal_geometric_model const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CExternal_geometric_model); }
	MemberElement<xs::CstringType, _altova_mi_altova_CExternal_geometric_model_altova_Model_extent> Model_extent;
	struct Model_extent { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CExternal_geometric_model
