#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CString_with_language
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CString_with_language



namespace cutting_tool_schema_arm
{

class CString_with_language : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CString_with_language(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CString_with_language(CString_with_language const& init);
	void operator=(CString_with_language const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CString_with_language); }

	MemberAttribute<string_type,_altova_mi_altova_CString_with_language_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CString_with_language_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CString_with_language_altova_Contents> Contents;
	struct Contents { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CLanguage_specificationType, _altova_mi_altova_CString_with_language_altova_Language_specification> Language_specification;
	struct Language_specification { typedef Iterator<CLanguage_specificationType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CString_with_language
