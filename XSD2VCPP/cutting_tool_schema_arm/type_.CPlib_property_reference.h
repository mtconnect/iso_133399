#ifndef _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPlib_property_reference
#define _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPlib_property_reference



namespace cutting_tool_schema_arm
{

class CPlib_property_reference : public TypeBase
{
public:
	cutting_tool_schema_arm_EXPORT CPlib_property_reference(MSXML2::IXMLDOMNodePtr const& init);
	cutting_tool_schema_arm_EXPORT CPlib_property_reference(CPlib_property_reference const& init);
	void operator=(CPlib_property_reference const& other) { m_node = other.m_node; }
	static altova::meta::ComplexType StaticInfo() { return altova::meta::ComplexType(types + _altova_ti_altova_CPlib_property_reference); }

	MemberAttribute<string_type,_altova_mi_altova_CPlib_property_reference_altova_id, 0, 0> id;	// id CID

	MemberAttribute<string_type,_altova_mi_altova_CPlib_property_reference_altova_ref, 0, 0> ref;	// ref Cstring
	MemberElement<xs::CstringType, _altova_mi_altova_CPlib_property_reference_altova_Code> Code;
	struct Code { typedef Iterator<xs::CstringType> iterator; };
	MemberElement<CName_scopeType, _altova_mi_altova_CPlib_property_reference_altova_Name_scope> Name_scope;
	struct Name_scope { typedef Iterator<CName_scopeType> iterator; };
	MemberElement<xs::CstringType, _altova_mi_altova_CPlib_property_reference_altova_Version> Version;
	struct Version { typedef Iterator<xs::CstringType> iterator; };
	cutting_tool_schema_arm_EXPORT void SetXsiType();
};


}	// namespace cutting_tool_schema_arm

#endif // _ALTOVA_INCLUDED_cutting_tool_schema_arm_ALTOVA__ALTOVA_CPlib_property_reference
