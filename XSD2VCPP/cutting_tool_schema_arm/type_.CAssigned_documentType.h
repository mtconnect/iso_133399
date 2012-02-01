#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssigned_documentType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssigned_documentType



namespace cutting_tool_schema_arm
{

class CAssigned_documentType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssigned_documentType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssigned_documentType(CAssigned_documentType const& init);
	void operator=(CAssigned_documentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssigned_documentType); }
	MemberElement<CDocument_version, _altova_mi_altova_CAssigned_documentType_altova_Document_version> Document_version;
	struct Document_version { typedef Iterator<CDocument_version> iterator; };
	MemberElement<CDocument, _altova_mi_altova_CAssigned_documentType_altova_Document> Document;
	struct Document { typedef Iterator<CDocument> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssigned_documentType
