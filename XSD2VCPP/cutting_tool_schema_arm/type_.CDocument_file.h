#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_file
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_file



namespace cutting_tool_schema_arm
{

class CDocument_file : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_file(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_file(CDocument_file const& init);
	void operator=(CDocument_file const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_file); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_file_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_file_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CContentType2, _altova_mi_altova_CDocument_file_altova_Content> Content;
	struct Content { typedef Iterator<CContentType2> iterator; };
	MemberElement<CCreationType2, _altova_mi_altova_CDocument_file_altova_Creation> Creation;
	struct Creation { typedef Iterator<CCreationType2> iterator; };
	MemberElement<CDocument_file_typeType, _altova_mi_altova_CDocument_file_altova_Document_file_type> Document_file_type;
	struct Document_file_type { typedef Iterator<CDocument_file_typeType> iterator; };
	MemberElement<CExternal_id_and_locationType, _altova_mi_altova_CDocument_file_altova_External_id_and_location> External_id_and_location;
	struct External_id_and_location { typedef Iterator<CExternal_id_and_locationType> iterator; };
	MemberElement<CFile_formatType, _altova_mi_altova_CDocument_file_altova_File_format> File_format;
	struct File_format { typedef Iterator<CFile_formatType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_file_altova_File_id> File_id;
	struct File_id { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CSizeType3, _altova_mi_altova_CDocument_file_altova_Size> Size;
	struct Size { typedef Iterator<CSizeType3> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_file_altova_Version_id> Version_id;
	struct Version_id { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_file
