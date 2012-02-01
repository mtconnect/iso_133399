#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_document_versionType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_document_versionType



namespace cutting_tool_schema_arm
{

class CAssociated_document_versionType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_document_versionType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_document_versionType(CAssociated_document_versionType const& init);
	void operator=(CAssociated_document_versionType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_document_versionType); }
	MemberElement<CDocument_version, _altova_mi_altova_CAssociated_document_versionType_altova_Document_version> Document_version;
	struct Document_version { typedef Iterator<CDocument_version> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_document_versionType
