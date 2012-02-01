#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CNamed_size
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CNamed_size

#include "type_.CRectangular_size.h"


namespace cutting_tool_schema_arm
{

class CNamed_size : public ::cutting_tool_schema_arm::CRectangular_size
{
public:
	cutting_tool_schema_arm_EXPORT CNamed_size(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CNamed_size(CNamed_size const& init);
	void operator=(CNamed_size const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CNamed_size); }
	MemberElement<CReferenced_standardType, _altova_mi_altova_CNamed_size_altova_Referenced_standard> Referenced_standard;
	struct Referenced_standard { typedef Iterator<CReferenced_standardType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CNamed_size_altova_Size> Size;
	struct Size { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CNamed_size
