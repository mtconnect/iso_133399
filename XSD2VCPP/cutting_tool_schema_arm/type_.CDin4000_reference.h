#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDin4000_reference
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDin4000_reference

#include "type_.CExternal_library_reference.h"


namespace cutting_tool_schema_arm
{

class CDin4000_reference : public ::cutting_tool_schema_arm::CExternal_library_reference
{
public:
	cutting_tool_schema_arm_EXPORT CDin4000_reference(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDin4000_reference(CDin4000_reference const& init);
	void operator=(CDin4000_reference const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDin4000_reference); }
	MemberElement<xs::CstringType, _altova_mi_altova_CDin4000_reference_altova_Characteristics_code_no> Characteristics_code_no;
	struct Characteristics_code_no { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDin4000_reference_altova_Part_no> Part_no;
	struct Part_no { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDin4000_reference
