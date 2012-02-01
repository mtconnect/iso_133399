#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_version
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_version



namespace cutting_tool_schema_arm
{

class CDocument_version : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_version(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_version(CDocument_version const& init);
	void operator=(CDocument_version const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_version); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_version_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_version_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_documentType, _altova_mi_altova_CDocument_version_altova_Associated_document> Associated_document;
	struct Associated_document { typedef Iterator<CAssociated_documentType> iterator; };
	MemberElement<CDescriptionType8, _altova_mi_altova_CDocument_version_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType8> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_version_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_version
