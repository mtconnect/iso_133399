#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_size_property
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_size_property



namespace cutting_tool_schema_arm
{

class CDocument_size_property : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_size_property(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_size_property(CDocument_size_property const& init);
	void operator=(CDocument_size_property const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_size_property); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_size_property_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_size_property_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<CFile_sizeType, _altova_mi_altova_CDocument_size_property_altova_File_size> File_size;
	struct File_size { typedef Iterator<CFile_sizeType> iterator; };
	MemberElement<CPage_countType, _altova_mi_altova_CDocument_size_property_altova_Page_count> Page_count;
	struct Page_count { typedef Iterator<CPage_countType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_size_property
