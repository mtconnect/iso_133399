#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument



namespace cutting_tool_schema_arm
{

class CDocument : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument(CDocument const& init);
	void operator=(CDocument const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CDescriptionType7, _altova_mi_altova_CDocument_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType7> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_altova_Document_id> Document_id;
	struct Document_id { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CNameType3, _altova_mi_altova_CDocument_altova_Name> Name;
	struct Name { typedef Iterator<CNameType3> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument
