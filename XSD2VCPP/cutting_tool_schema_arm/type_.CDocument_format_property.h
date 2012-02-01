#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_format_property
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_format_property



namespace cutting_tool_schema_arm
{

class CDocument_format_property : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CDocument_format_property(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CDocument_format_property(CDocument_format_property const& init);
	void operator=(CDocument_format_property const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CDocument_format_property); }

	MemberAttribute<string_type,_altova_mi_altova_CDocument_format_property_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CDocument_format_property_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_format_property_altova_Character_code> Character_code;
	struct Character_code { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CDocument_format_property_altova_Data_format> Data_format;
	struct Data_format { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CSize_formatType, _altova_mi_altova_CDocument_format_property_altova_Size_format> Size_format;
	struct Size_format { typedef Iterator<CSize_formatType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CDocument_format_property
