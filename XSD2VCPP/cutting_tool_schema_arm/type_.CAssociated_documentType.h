#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_documentType
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_documentType



namespace cutting_tool_schema_arm
{

class CAssociated_documentType : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CAssociated_documentType(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CAssociated_documentType(CAssociated_documentType const& init);
	void operator=(CAssociated_documentType const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CAssociated_documentType); }
	MemberElement<CDocument, _altova_mi_altova_CAssociated_documentType_altova_Document> Document;
	struct Document { typedef Iterator<CDocument> iterator; };
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CAssociated_documentType
