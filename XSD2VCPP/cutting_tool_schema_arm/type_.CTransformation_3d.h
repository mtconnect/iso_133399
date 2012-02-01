#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CTransformation_3d
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CTransformation_3d

#include "type_.CTransformation.h"


namespace cutting_tool_schema_arm
{

class CTransformation_3d : public ::cutting_tool_schema_arm::CTransformation
{
public:
	cutting_tool_schema_arm_EXPORT CTransformation_3d(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CTransformation_3d(CTransformation_3d const& init);
	void operator=(CTransformation_3d const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CTransformation_3d); }
	MemberElement<CAxis_3Type, _altova_mi_altova_CTransformation_3d_altova_Axis_3> Axis_3;
	struct Axis_3 { typedef Iterator<CAxis_3Type> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CTransformation_3d
