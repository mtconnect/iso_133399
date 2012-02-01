#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_document
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_document

#include "type_.CDocument_representation.h"


namespace cutting_tool_schema_arm
{

class CPhysical_document : public ::cutting_tool_schema_arm::CDocument_representation
{
public:
	cutting_tool_schema_arm_EXPORT CPhysical_document(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPhysical_document(CPhysical_document const& init);
	void operator=(CPhysical_document const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPhysical_document); }
	MemberElement<CFileType2, _altova_mi_altova_CPhysical_document_altova_File> File;
	struct File { typedef Iterator<CFileType2> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPhysical_document
