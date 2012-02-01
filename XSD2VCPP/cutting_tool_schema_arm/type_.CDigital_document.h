#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDigital_document
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDigital_document

#include "type_.CDocument_representation.h"


namespace cutting_tool_schema_arm
{

class CDigital_document : public ::cutting_tool_schema_arm::CDocument_representation
{
public:
	cutting_tool_schema_arm_EXPORT CDigital_document(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDigital_document(CDigital_document const& init);
	void operator=(CDigital_document const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDigital_document); }
	MemberElement<CFileType, _altova_mi_altova_CDigital_document_altova_File> File;
	struct File { typedef Iterator<CFileType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDigital_document
