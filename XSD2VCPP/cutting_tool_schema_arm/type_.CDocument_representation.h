#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_representation
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_representation



namespace cutting_tool_schema_arm
{

class CDocument_representation : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_representation(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_representation(CDocument_representation const& init);
	void operator=(CDocument_representation const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_representation); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_representation_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_representation_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CAssociated_document_versionType, _altova_mi_altova_CDocument_representation_altova_Associated_document_version> Associated_document_version;
	struct Associated_document_version { typedef Iterator<CAssociated_document_versionType> iterator; };
	MemberElement<CCommon_locationType, _altova_mi_altova_CDocument_representation_altova_Common_location> Common_location;
	struct Common_location { typedef Iterator<CCommon_locationType> iterator; };
	MemberElement<CContentType, _altova_mi_altova_CDocument_representation_altova_Content> Content;
	struct Content { typedef Iterator<CContentType> iterator; };
	MemberElement<CCreationType, _altova_mi_altova_CDocument_representation_altova_Creation> Creation;
	struct Creation { typedef Iterator<CCreationType> iterator; };
	MemberElement<CDescriptionType5, _altova_mi_altova_CDocument_representation_altova_Description> Description;
	struct Description { typedef Iterator<CDescriptionType5> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_representation_altova_Id2> Id2;
	struct Id2 { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CRepresentation_formatType, _altova_mi_altova_CDocument_representation_altova_Representation_format> Representation_format;
	struct Representation_format { typedef Iterator<CRepresentation_formatType> iterator; };
	MemberElement<CSizeType2, _altova_mi_altova_CDocument_representation_altova_Size> Size;
	struct Size { typedef Iterator<CSizeType2> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_representation
